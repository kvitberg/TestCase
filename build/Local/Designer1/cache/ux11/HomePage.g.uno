[Uno.Compiler.UxGenerated]
public partial class HomePage: Fuse.Controls.Page
{
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static HomePage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public HomePage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp1 = new global::Fuse.Controls.Image();
        var temp2 = new global::Fuse.Controls.ScrollView();
        var temp3 = new global::Fuse.Controls.StackPanel();
        var temp4 = new global::Fuse.Controls.Text();
        var temp5 = new global::Separator();
        var temp6 = new global::Fuse.Controls.Panel();
        var temp7 = new global::Fuse.Controls.Text();
        var temp8 = new global::Fuse.Gestures.WhilePressed();
        var temp9 = new global::Fuse.Animations.Scale();
        var temp10 = new global::Separator();
        var temp11 = new global::Fuse.Controls.Panel();
        var temp12 = new global::Fuse.Controls.Text();
        var temp13 = new global::Fuse.Gestures.WhilePressed();
        var temp14 = new global::Fuse.Animations.Scale();
        var temp15 = new global::Separator();
        var temp16 = new global::Fuse.Controls.Panel();
        var temp17 = new global::Fuse.Controls.Image();
        var temp18 = new global::Fuse.Gestures.WhilePressed();
        var temp19 = new global::Fuse.Animations.Scale();
        var temp20 = new global::Separator();
        var temp21 = new global::Fuse.Drawing.StaticSolidColor(float4(0.4f, 1f, 0.8f, 1f));
        temp.LineNumber = 2;
        temp.FileName = "Pages/HomePage.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/HomePage.js"));
        temp1.StretchMode = Fuse.Elements.StretchMode.Fill;
        temp1.Opacity = 0.7f;
        temp1.Layer = Fuse.Layer.Background;
        temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/background.jpg"));
        temp2.Children.Add(temp3);
        temp3.ItemSpacing = 10f;
        temp3.Padding = float4(10f, 10f, 10f, 10f);
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp5);
        temp3.Children.Add(temp6);
        temp3.Children.Add(temp10);
        temp3.Children.Add(temp11);
        temp3.Children.Add(temp15);
        temp3.Children.Add(temp16);
        temp3.Children.Add(temp20);
        temp4.Value = "TestCase Application";
        temp4.FontSize = 20f;
        temp4.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp4.Color = Fuse.Drawing.Colors.White;
        temp4.Margin = float4(50f, 50f, 50f, 50f);
        temp4.Font = Fuse.Font.Medium;
        temp6.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp8);
        temp7.Value = "Filtermeny";
        temp7.Color = Fuse.Drawing.Colors.White;
        temp7.Margin = float4(20f, 20f, 20f, 20f);
        temp8.Animators.Add(temp9);
        temp9.Factor = 0.97f;
        temp9.Duration = 0.06;
        temp9.Easing = Fuse.Animations.Easing.QuadraticOut;
        temp11.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp13);
        temp12.Value = "Kul animasjon";
        temp12.Color = Fuse.Drawing.Colors.White;
        temp12.Margin = float4(20f, 20f, 20f, 20f);
        temp13.Animators.Add(temp14);
        temp14.Factor = 0.97f;
        temp14.Duration = 0.06;
        temp14.Easing = Fuse.Animations.Easing.QuadraticOut;
        temp16.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp18);
        temp17.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp17.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp17.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/background.jpg"));
        temp18.Animators.Add(temp19);
        temp19.Factor = 0.97f;
        temp19.Duration = 0.06;
        temp19.Easing = Fuse.Animations.Easing.QuadraticOut;
        __g_nametable.This = this;
        this.Background = temp21;
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
