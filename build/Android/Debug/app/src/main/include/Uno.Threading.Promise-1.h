// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Uno.Threading/1.0.13/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.Threading.Future-1.h>
namespace g{namespace Uno{namespace Threading{struct Promise;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Uno{
namespace Threading{

// public class Promise<T> :750
// {
::g::Uno::Threading::Future_type* Promise_typeof();
void Promise__ctor_3_fn(Promise* __this);
void Promise__Cancel_fn(Promise* __this, bool* shutdownGracefully);
void Promise__New1_fn(uType* __type, Promise** __retval);
void Promise__Reject_fn(Promise* __this, ::g::Uno::Exception* reason);
void Promise__Resolve_fn(Promise* __this, void* result);
void Promise__Run_fn(uType* __type, uDelegate* func, ::g::Uno::Threading::Future1** __retval);
void Promise__Run1_fn(uType* __type, uObject* dispatcher, uDelegate* func, ::g::Uno::Threading::Future1** __retval);

struct Promise : ::g::Uno::Threading::Future1
{
    void ctor_3();
    void Reject(::g::Uno::Exception* reason);
    template<class T>
    void Resolve(T result) { Promise__Resolve_fn(this, uConstrain(__type->GetBase(Promise_typeof())->T(0), result)); }
    static Promise* New1(uType* __type);
    static ::g::Uno::Threading::Future1* Run(uType* __type, uDelegate* func);
    static ::g::Uno::Threading::Future1* Run1(uType* __type, uObject* dispatcher, uDelegate* func);
};
// }

}}} // ::g::Uno::Threading
