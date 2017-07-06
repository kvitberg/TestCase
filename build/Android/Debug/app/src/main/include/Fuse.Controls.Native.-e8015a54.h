// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-118b98c3.h>
#include <Uno.IDisposable.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageLoader__ImageHandlePromise;}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// private sealed extern class ImageLoader.ImageHandlePromise :212
// {
::g::Uno::Threading::Future_type* ImageLoader__ImageHandlePromise_typeof();
void ImageLoader__ImageHandlePromise__Dispose_fn(ImageLoader__ImageHandlePromise* __this);

struct ImageLoader__ImageHandlePromise : ::g::Uno::Threading::Promise
{
    uStrong< ::g::Uno::Collections::List*> _dispose;
};
// }

}}}} // ::g::Fuse::Controls::Native
