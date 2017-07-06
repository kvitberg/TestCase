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
        var temp1 = new global::Fuse.Controls.ScrollView();
        var temp2 = new global::Fuse.Controls.StackPanel();
        var temp3 = new global::Separator();
        var temp4 = new global::Fuse.Controls.Panel();
        var temp5 = new global::Fuse.Controls.Text();
        var temp6 = new global::Fuse.Gestures.WhilePressed();
        var temp7 = new global::Fuse.Animations.Scale();
        var temp8 = new global::Separator();
        var temp9 = new global::Fuse.Controls.Panel();
        var temp10 = new global::Fuse.Controls.Text();
        var temp11 = new global::Fuse.Gestures.WhilePressed();
        var temp12 = new global::Fuse.Animations.Scale();
        var temp13 = new global::Separator();
        temp.LineNumber = 2;
        temp.FileName = "Pages/HomePage.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Pages/HomePage.js"));
        temp1.Children.Add(temp2);
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp4);
        temp2.Children.Add(temp8);
        temp2.Children.Add(temp9);
        temp2.Children.Add(temp13);
        temp4.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        temp4.Children.Add(temp5);
        temp4.Children.Add(temp6);
        temp5.Value = "Hent et bilde";
        temp5.Color = Fuse.Drawing.Colors.White;
        temp5.Margin = float4(20f, 20f, 20f, 20f);
        temp6.Animators.Add(temp7);
        temp7.Factor = 0.97f;
        temp7.Duration = 0.06;
        temp7.Easing = Fuse.Animations.Easing.QuadraticOut;
        temp9.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        temp9.Children.Add(temp10);
        temp9.Children.Add(temp11);
        temp10.Value = "Trykk på den her for en fancy animasjon";
        temp10.Color = Fuse.Drawing.Colors.White;
        temp10.Margin = float4(20f, 20f, 20f, 20f);
        temp11.Animators.Add(temp12);
        temp12.Factor = 0.97f;
        temp12.Duration = 0.06;
        temp12.Easing = Fuse.Animations.Easing.QuadraticOut;
        __g_nametable.This = this;
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
}
