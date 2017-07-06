// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageHandle;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageLoader;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageLoader__ImageHandlePromise;}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// internal static extern class ImageLoader :89
// {
uClassType* ImageLoader_typeof();
void ImageLoader__Release_fn(::g::Java::Object* bitmap);
void ImageLoader__ReleaseHandle_fn(::g::Fuse::Controls::Native::ImageHandle* handle);

struct ImageLoader : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _imageHandleCache_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _imageHandleCache() { return ImageLoader_typeof()->Init(), _imageHandleCache_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _pendingeImages_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _pendingeImages() { return ImageLoader_typeof()->Init(), _pendingeImages_; }

    static void Release(::g::Java::Object* bitmap);
    static void ReleaseHandle(::g::Fuse::Controls::Native::ImageHandle* handle);
};
// }

}}}} // ::g::Fuse::Controls::Native
