// This file was generated based on TestCase.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.TestCase_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public static generated class TestCase_bundle :0
// {
// static TestCase_bundle() :0
static void TestCase_bundle__cctor__fn(uType* __type)
{
    TestCase_bundle::HomePage2e5824bf_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"TestCase"*/]))->GetFile(::STRINGS[1/*"homepage-a6...*/]);
}

static void TestCase_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("TestCase");
    ::STRINGS[1] = uString::Const("homepage-a66ffa00.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::TestCase_bundle::HomePage2e5824bf_, uFieldFlagsStatic);
}

uClassType* TestCase_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("TestCase_bundle", options);
    type->fp_build_ = TestCase_bundle_build;
    type->fp_cctor_ = TestCase_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> TestCase_bundle::HomePage2e5824bf_;
// }

} // ::g
