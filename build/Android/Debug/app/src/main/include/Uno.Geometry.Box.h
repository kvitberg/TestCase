// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Uno.Geometry/1.0.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float3.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Geometry{struct Box;}}}

namespace g{
namespace Uno{
namespace Geometry{

// public struct Box :5
// {
uStructType* Box_typeof();
void Box__ctor__fn(Box* __this, ::g::Uno::Float3* min, ::g::Uno::Float3* max);
void Box__New1_fn(::g::Uno::Float3* min, ::g::Uno::Float3* max, Box* __retval);

struct Box
{
    ::g::Uno::Float3 Minimum;
    ::g::Uno::Float3 Maximum;

    void ctor_(::g::Uno::Float3 min, ::g::Uno::Float3 max);
};

Box Box__New1(::g::Uno::Float3 min, ::g::Uno::Float3 max);
// }

}}} // ::g::Uno::Geometry
