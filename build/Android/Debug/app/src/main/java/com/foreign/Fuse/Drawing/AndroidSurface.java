package com.foreign.Fuse.Drawing;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

// user defined imports
import android.graphics.Canvas;
import android.graphics.Bitmap;
import android.graphics.Shader;
import android.graphics.BitmapShader;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Path;
import android.opengl.GLUtils;
import android.opengl.GLES20;
import android.graphics.Paint;
import android.graphics.LinearGradient;
import android.graphics.Shader.TileMode;
import android.graphics.Color;
import android.graphics.PorterDuffXfermode;
import android.graphics.Matrix;
import android.graphics.PorterDuff.Mode;
import com.fusetools.drawing.surface.AndroidGraphicsContext;
import java.nio.ByteBuffer;
import java.nio.IntBuffer;
import java.nio.ByteOrder;
import java.nio.FloatBuffer;

public class AndroidSurface
{
    static void debug_log(Object message)
    {
        android.util.Log.d("TestCase", (message==null ? "null" : message.toString()));
    }

    public static void BeginImpl109(final Object _context,final int width,final int height,final int glTextureId)
    {
        AndroidGraphicsContext context = (AndroidGraphicsContext) _context;
        context.width = width;
        context.height = height;
        context.glTextureId = glTextureId;
    }
    
    public static void ConcatTransform110(final Object cp,final Object m)
    {
        AndroidGraphicsContext ctx = (AndroidGraphicsContext) cp;
        Matrix matrix = (Matrix) m;
        
        Matrix currentMatrix = ctx.canvas.getMatrix();
        
        boolean something = currentMatrix.preConcat(matrix);
        
        ctx.canvas.setMatrix(currentMatrix);
    }
    
    public static Object CreateFillPaint111()
    {
        Paint paint = new Paint();
        paint.setFlags(Paint.ANTI_ALIAS_FLAG);
        return paint;
    }
    
    public static Object CreateLinearGradient112(final com.uno.IntArray colors,final com.uno.FloatArray stops)
    {
        AndroidGraphicsContext.LinearGradientStore store = new AndroidGraphicsContext.LinearGradientStore();
        store.colors = colors.copyArray();
        store.stops = stops.copyArray();
        return store;
    }
    
    public static Object CreateStrokedPaint113(final float width,final int fjoin,final int fcap,final float miterLimit)
    {
        Paint paint = new Paint();
        
        paint.setStrokeMiter(miterLimit);
        paint.setStrokeCap(Paint.Cap.BUTT);
        paint.setStrokeJoin(Paint.Join.MITER);
        paint.setStyle(Paint.Style.STROKE);
        paint.setStrokeWidth(width);
        paint.setFlags(Paint.ANTI_ALIAS_FLAG);
        
        return paint;
    }
    
    public static void EndImpl114(final Object context)
    {
        AndroidGraphicsContext realContext = (AndroidGraphicsContext) context;
        
        GLES20.glBindTexture(GLES20.GL_TEXTURE_2D, realContext.glTextureId);
        
        // heat up the caches. not needed but good to have
        realContext.bitmap.prepareToDraw();
        
        GLUtils.texImage2D(GLES20.GL_TEXTURE_2D, 0, realContext.bitmap, 0);
        realContext.bitmap.recycle();
    }
    
    public static void FillPathImage115(final Object cp,final Object pathAsObject,final Object imageAsObject,final float originX,final float originY,final float tileSizeX,final float tileSizeY,final float width,final float height,final boolean eoFill,final Object paintAsObject)
    {
        // TODO: reimplement - should wait for upstream changes first
        // see comments on this function in the CoreGraphicsSurface implementation
        // of this function
        
        
        if (tileSizeX == 0 || tileSizeY == 0)
        	return;
        
        AndroidGraphicsContext context = (AndroidGraphicsContext) cp;
        Bitmap image = (Bitmap) imageAsObject;
        Path path = (Path) pathAsObject;
        
        path.setFillType(eoFill ? Path.FillType.EVEN_ODD : Path.FillType.WINDING);
        
        int index = context.canvas.save();
        
        image.prepareToDraw();
        
        Paint paint = (Paint)paintAsObject;
        Bitmap scaledBitmap = Bitmap.createScaledBitmap(
        	image, 
        	(int)tileSizeX, 
        	(int)tileSizeY, 
        	true
        );
        
        // flip the image so that it displays correctly
        Matrix matrix = new Matrix();
        matrix.preScale(1, -1);
        scaledBitmap = Bitmap.createBitmap(scaledBitmap, 0, 0, (int)tileSizeX, (int)tileSizeY, matrix, true);
        
        BitmapShader shader = new BitmapShader(scaledBitmap, Shader.TileMode.REPEAT, Shader.TileMode.REPEAT);
        paint.setShader(shader);
        
        context.canvas.clipPath(path);
        context.canvas.drawPath(path, paint);
        context.canvas.restoreToCount(index);
    }
    
    public static void FillPathLinearGradient116(final Object cp,final Object path,final Object gradientStore,final float startX,final float startY,final float endX,final float endY,final boolean eoFill,final Object pretendPaint)
    {
        AndroidGraphicsContext context = (AndroidGraphicsContext) cp;
        
        Paint paint = null;
        
        paint = (Paint) pretendPaint;
        if (paint == null) paint = new Paint(); 
        
        AndroidGraphicsContext.LinearGradientStore store = (AndroidGraphicsContext.LinearGradientStore) gradientStore;
        
        LinearGradient gradient = new LinearGradient(
        	startX, startY, 
        	endX, endY, 
        	store.colors, store.stops, 
        TileMode.CLAMP);
        
        paint.setShader(gradient);
        
        // this is different from iOS
        // iOS draws relative to the _entire_ canvas
        // and therefore needs to clip to the path before drawing
        // On Android, we can just call `drawPath` which clips
        // to the right area for us
        int index = context.canvas.save();
        context.canvas.drawPath((Path) path, paint);
        context.canvas.restoreToCount(index);
    }
    
    public static void FillPathSolidColor117(final Object cp,final Object pathAsObject,final int color,final boolean eoFill,final Object pretendPaint)
    {
        AndroidGraphicsContext context = (AndroidGraphicsContext) cp;
        Path path = (Path) pathAsObject;
        
        path.setFillType(eoFill ? Path.FillType.EVEN_ODD : Path.FillType.WINDING);
        
        Paint paint = (Paint) pretendPaint;
        if (paint == null)
        {
        	paint = new Paint();
        }
        
        paint.setColor(color);
        context.canvas.drawPath(path, paint);
    }
    
    public static void LoadBitmap118(final Object context,final int width,final int height)
    {
        AndroidGraphicsContext impl = (AndroidGraphicsContext) context;
        Bitmap b = Bitmap.createBitmap(width, height, Bitmap.Config.ARGB_8888);
        
        impl.canvas.setBitmap(b);
        impl.bitmap = b;
        
        impl.canvas.setMatrix(null);
        
        // invert our bitmap since the Android canvas is inversed when drawing
        impl.canvas.translate(0.0f, (float)height);
        impl.canvas.scale(1, -1);
    }
    
    public static Object LoadImage119(final Object cp,final int glTextureId,final int width,final int height)
    {
        AndroidGraphicsContext ctx = (AndroidGraphicsContext)cp;
        int size = width * height * 4;
        int[] pixels = new int[size];
        
        IntBuffer pixelData = IntBuffer.wrap(pixels);
        GLES20.glReadPixels(0, 0, width,height, GLES20.GL_RGBA, GLES20.GL_UNSIGNED_BYTE, pixelData);
        
        Bitmap bitmap = Bitmap.createBitmap(width, height, Bitmap.Config.ARGB_8888);
        bitmap.copyPixelsFromBuffer(pixelData);
        
        return bitmap;
    }
    
    public static Object NewContext120()
    {
        // create an empty canvas
        // this gets populated with a bitmap on `Begin`
        Canvas c = new Canvas();
        
        AndroidGraphicsContext context = new AndroidGraphicsContext();
        context.canvas = c;
        
        return context;
    }
    
    public static void PathClose121(final Object pathAsObject)
    {
        Path path = (Path) pathAsObject;
        path.close();
    }
    
    public static Object PathCreateMutable122()
    {
        return new Path();
    }
    
    public static void PathCurveTo123(final Object pathAsObject,final float x,final float y,final float ax,final float ay,final float bx,final float by)
    {
        Path path = (Path) pathAsObject;
        path.cubicTo(ax, ay, bx, by, x, y);
    }
    
    public static void PathLineTo124(final Object pathAsObject,final float x,final float y)
    {
        Path path = (Path) pathAsObject;
        path.lineTo(x, y);
    }
    
    public static void PathMoveTo125(final Object pathAsObject,final float x,final float y)
    {
        Path path = (Path) pathAsObject;
        path.moveTo( x, y );
    }
    
    public static void recycleBitmap126(final Object bit)
    {
        ((Bitmap) bit).recycle();
    }
    
    public static void RestoreContextState127(final Object cp)
    {
        AndroidGraphicsContext ctx = (AndroidGraphicsContext) cp;
        ctx.restoreCurrentMatrix();
    }
    
    public static void SaveContextState128(final Object cp)
    {
        AndroidGraphicsContext ctx = (AndroidGraphicsContext) cp;
        ctx.saveCurrentMatrix();
    }
    
    public static Object ToMatrix129(final UnoObject _this, final com.uno.FloatArray matrix)
    {
        android.graphics.Matrix m = new android.graphics.Matrix();
        m.setValues(matrix.copyArray());
        return m;
    }
    
}
