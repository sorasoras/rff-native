#include "tc_rt.h"

void fn_8025461c(void)
{
    u32 r6 = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0;
    r6 = rd32(0x80576c88u);
    f6 = (f64)rdf32(0x80576d58u);
    f2 = (f64)rdf32(r6 + 0x550u);
    f7 = (f64)(f32)((f64)rdf32(r6 + 0x54cu) * f6);
    f4 = (f64)rdf32(r6 + 0x548u);
    f5 = (f64)(f32)(f2 * f6);
    f8 = (f64)(f32)(-f2 * f6);
    f2 = (f64)rdf32(r6 + 0x560u);
    f6 = (f64)(f32)((f64)rdf32(r6 + 0x544u) + f7);
    f0 = (f64)rdf32(r6 + 0x55cu);
    f3 = (f64)(f32)((f64)rdf32(r6 + 0x554u) * f2);
    f9 = (f64)(f32)((f64)rdf32(r6 + 0x558u) * f2);
    wr8(0xcc008000u, 0x10u);
    f2 = (f64)rdf32(0x80576d5cu);
    wr32(0xcc008000u, 0x5101au);
    f3 = (f64)(f32)(f9 - f3);
    wrf32d(0xcc008000u, f7);
    wrf32d(0xcc008000u, f8);
    f0 = (f64)(f32)(f9 + f0);
    wrf32d(0xcc008000u, f3);
    wrf32d(0xcc008000u, (f64)(f32)(f2 + f6));
    wrf32d(0xcc008000u, (f64)(f32)(f2 + (f64)(f32)(f4 + f5)));
    wrf32d(0xcc008000u, f0);
    return;
}
