// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageHandle;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// internal sealed extern class ImageHandle :41
// {
struct ImageHandle_type : uType
{
    ::g::Uno::IDisposable interface0;
};

ImageHandle_type* ImageHandle_typeof();
void ImageHandle__Dispose_fn(ImageHandle* __this);
void ImageHandle__get_Handle_fn(ImageHandle* __this, uObject** __retval);
void ImageHandle__get_Name_fn(ImageHandle* __this, uString** __retval);

struct ImageHandle : uObject
{
    uStrong<uObject*> _handle;
    bool _isDisposed;
    uStrong<uString*> _name;
    int _pinCount;

    void Dispose();
    uObject* Handle();
    uString* Name();
};
// }

}}}} // ::g::Fuse::Controls::Native
