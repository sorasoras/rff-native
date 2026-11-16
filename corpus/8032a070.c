#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_8032a070(s32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    f64 f1 = 0.0, t15 = 0.0, t33 = 0.0, t51 = 0.0, t69 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x80u;
    a.r[1] = 0u;
    a.r[2] = 4u;
    (void)tc_call(0x80250b74u, &a);
    t15 = (f64)(f32)((f64)rdf32((u32)param_1 + 8u) - (f64)rdf32((u32)param_2 + 8u));
    f1 = (f64)rdf32(0x817fdfe0u);
    wrf32d(0xcc008000u, (f64)px_w2f(ppc_single_bits((f64)(f32)((f64)rdf32((u32)param_1) - (f64)rdf32((u32)param_2)))));
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, (f64)px_w2f(ppc_single_bits(t15)));
    if ((u32)param_4 != 0u) {
        wr8(0xcc008000u, 0u);
    }
    t33 = (f64)(f32)((f64)rdf32((u32)param_1 + 8u) - (f64)rdf32((u32)param_3 + 8u));
    f1 = (f64)rdf32(0x817fdfd4u);
    wrf32d(0xcc008000u, (f64)px_w2f(ppc_single_bits((f64)(f32)((f64)rdf32((u32)param_1) - (f64)rdf32((u32)param_3)))));
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, (f64)px_w2f(ppc_single_bits(t33)));
    if ((u32)param_4 != 0u) {
        wr8(0xcc008000u, 1u);
    }
    t51 = (f64)(f32)((f64)rdf32((u32)param_1 + 8u) + (f64)rdf32((u32)param_2 + 8u));
    f1 = (f64)rdf32(0x817fdfc8u);
    wrf32d(0xcc008000u, (f64)px_w2f(ppc_single_bits((f64)(f32)((f64)rdf32((u32)param_1) + (f64)rdf32((u32)param_2)))));
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, (f64)px_w2f(ppc_single_bits(t51)));
    if ((u32)param_4 != 0u) {
        wr8(0xcc008000u, 2u);
    }
    t69 = (f64)(f32)((f64)rdf32((u32)param_1 + 8u) + (f64)rdf32((u32)param_3 + 8u));
    f1 = (f64)rdf32(0x817fdfbcu);
    wrf32d(0xcc008000u, (f64)px_w2f(ppc_single_bits((f64)(f32)((f64)rdf32((u32)param_1) + (f64)rdf32((u32)param_3)))));
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, (f64)px_w2f(ppc_single_bits(t69)));
    if ((u32)param_4 != 0u) {
        wr8(0xcc008000u, 3u);
    }
    return;
}
