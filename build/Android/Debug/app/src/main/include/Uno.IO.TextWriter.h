// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/UnoCore/1.0.13/source/uno/io/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct TextWriter;}}}

namespace g{
namespace Uno{
namespace IO{

// public abstract class TextWriter :3608
// {
struct TextWriter_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose1)(::g::Uno::IO::TextWriter*, bool*);
};

TextWriter_type* TextWriter_typeof();
void TextWriter__ctor__fn(TextWriter* __this);
void TextWriter__Dispose_fn(TextWriter* __this);
void TextWriter__Dispose1_fn(TextWriter* __this, bool* disposing);

struct TextWriter : uObject
{
    void ctor_();
    void Dispose();
    void Dispose1(bool disposing) { (((TextWriter_type*)__type)->fp_Dispose1)(this, &disposing); }
    static void Dispose1(TextWriter* __this, bool disposing) { TextWriter__Dispose1_fn(__this, &disposing); }
};
// }

}}} // ::g::Uno::IO
