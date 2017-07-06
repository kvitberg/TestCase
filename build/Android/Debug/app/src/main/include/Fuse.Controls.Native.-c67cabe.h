// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.5/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-98938546.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Slider;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class Slider :1524
// {
::g::Fuse::Controls::Native::Android::View_type* Slider_typeof();
void Slider__Dispose_fn(Slider* __this);
void Slider__OnSeekBarChanged_fn(Slider* __this, double* newProgress);

struct Slider : ::g::Fuse::Controls::Native::Android::LeafView
{
    uStrong<uObject*> _host;

    void OnSeekBarChanged(double newProgress);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
