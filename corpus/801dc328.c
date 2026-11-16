#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_801dc328(void)
{
    return (f64)(f32)px_fdiv((f64)rdf32(0x80576200u), (f64)rdf32(0x80571118u));
}
