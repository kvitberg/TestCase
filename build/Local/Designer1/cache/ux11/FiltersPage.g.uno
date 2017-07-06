[Uno.Compiler.UxGenerated]
public partial class FiltersPage: Fuse.Controls.Page
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly FiltersPage __parent;
        [Uno.WeakReference] internal readonly FiltersPage __parentInstance;
        public Template(FiltersPage parent, FiltersPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb0;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "temp_eb0"
        };
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Panel();
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new TestCase_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("name");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp2 = new global::Fuse.Reactive.Data("chooseHike");
            var temp3 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp_eb0 = new global::Fuse.Reactive.EventBinding(temp2, __g_nametable);
            __self.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb0.OnEvent);
            temp.Color = Fuse.Drawing.Colors.White;
            temp.Margin = float4(20f, 20f, 20f, 20f);
            temp.Bindings.Add(temp3);
            __g_nametable.Objects.Add(temp_eb0);
            __self.Children.Add(temp);
            __self.Bindings.Add(temp_eb0);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static FiltersPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public FiltersPage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new TestCase_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("filters");
        var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new global::Fuse.Controls.Image();
        var temp4 = new global::Fuse.Controls.ScrollView();
        var temp5 = new global::Fuse.Controls.StackPanel();
        var temp6 = new global::Fuse.Controls.Text();
        var temp7 = new global::Separator();
        var temp8 = new Template(this, this);
        var temp9 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp10 = new global::Separator();
        var temp11 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 0.4f, 0.4f, 1f));
        temp2.LineNumber = 2;
        temp2.FileName = "Pages/FiltersPage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/FiltersPage.js"));
        temp3.StretchMode = Fuse.Elements.StretchMode.Fill;
        temp3.Opacity = 0.4f;
        temp3.Layer = Fuse.Layer.Background;
        temp3.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/background.jpg"));
        temp4.Children.Add(temp5);
        temp5.Children.Add(temp6);
        temp5.Children.Add(temp7);
        temp5.Children.Add(temp);
        temp5.Children.Add(temp10);
        temp6.Value = "Filter menu";
        temp6.FontSize = 20f;
        temp6.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp6.Color = Fuse.Drawing.Colors.White;
        temp6.Margin = float4(50f, 50f, 50f, 50f);
        temp6.Font = Fuse.Font.Medium;
        temp.Templates.Add(temp8);
        temp.Bindings.Add(temp9);
        __g_nametable.This = this;
        this.Background = temp11;
        this.Children.Add(temp2);
        this.Children.Add(temp3);
        this.Children.Add(temp4);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
}
