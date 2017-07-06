// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.5/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct ViewGroup;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class ViewGroup :2707
// {
uType* ViewGroup_typeof();
void ViewGroup__AddView1_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int* index);
void ViewGroup__Create_fn(::g::Java::Object** __retval);

struct ViewGroup : uObject
{
    static void AddView1(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int index);
    static ::g::Java::Object* Create();
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
