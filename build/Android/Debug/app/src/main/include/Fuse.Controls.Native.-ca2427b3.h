// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.5/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-20f6897.h>
#include <Fuse.Controls.Native.-fb992a16.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct SurfaceView;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class SurfaceView :1590
// {
::g::Fuse::Controls::Native::Android::GraphicsViewBase_type* SurfaceView_typeof();
void SurfaceView__ctor_7_fn(SurfaceView* __this);
void SurfaceView__AddCallback_fn(SurfaceView* __this, ::g::Java::Object* handle);
void SurfaceView__Create_fn(::g::Java::Object** __retval);
void SurfaceView__GetSurface_fn(::g::Java::Object* holder, ::g::Java::Object** __retval);
void SurfaceView__New4_fn(SurfaceView** __retval);
void SurfaceView__OnSurfaceChanged_fn(SurfaceView* __this, ::g::Java::Object* holder, int* f, int* w, int* h);
void SurfaceView__OnSurfaceCreated_fn(SurfaceView* __this, ::g::Java::Object* holder);
void SurfaceView__OnSurfaceDestroyed_fn(SurfaceView* __this, ::g::Java::Object* holder);
void SurfaceView__OnSurfaceRedrawNeeded_fn(SurfaceView* __this, ::g::Java::Object* holder);

struct SurfaceView : ::g::Fuse::Controls::Native::Android::GraphicsViewBase
{
    void ctor_7();
    void AddCallback(::g::Java::Object* handle);
    void OnSurfaceChanged(::g::Java::Object* holder, int f, int w, int h);
    void OnSurfaceCreated(::g::Java::Object* holder);
    void OnSurfaceDestroyed(::g::Java::Object* holder);
    void OnSurfaceRedrawNeeded(::g::Java::Object* holder);
    static ::g::Java::Object* Create();
    static ::g::Java::Object* GetSurface(::g::Java::Object* holder);
    static SurfaceView* New4();
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
