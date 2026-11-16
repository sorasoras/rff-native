#include "tc_rt.h"

s32 fn_800ffef4(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = 0x100u;
    r3 = tc_call(0x800fe3d4u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x800fe444u, &a);
    }
    if (rd32((u32)param_1 + 0xe4u) == 0u) {
        wr32((u32)param_1 + 0xe4u, r30);
        wr32((u32)param_1 + 0xe8u, r30);
        a.r[0] = r30;
        a.r[1] = 0u;
        (void)tc_call(0x800fe560u, &a);
        a.r[0] = r30;
        a.r[1] = 0u;
        (void)tc_call(0x800fe538u, &a);
    } else {
        a.r[0] = r30;
        a.r[1] = rd32((u32)param_1 + 0xe8u);
        (void)tc_call(0x800fe560u, &a);
        a.r[0] = r30;
        a.r[1] = 0u;
        (void)tc_call(0x800fe538u, &a);
        a.r[0] = rd32((u32)param_1 + 0xe8u);
        a.r[1] = r30;
        (void)tc_call(0x800fe538u, &a);
        wr32((u32)param_1 + 0xe8u, r30);
    }
    wr32(r30 + 0xc0u, (u32)param_1);
    wr32(r30 + 0xfcu, (u32)param_1 + 0x24u);
    a.r[0] = r30;
    a.r[1] = param_2;
    (void)tc_call(0x800fea0cu, &a);
    a.r[0] = r30;
    (void)tc_call(0x800fe704u, &a);
    a.r[0] = r30;
    a.r[1] = 0u;
    (void)tc_call(0x800fea20u, &a);
    a.r[0] = 0x817fdfe0u;
    a.r[1] = r30;
    (void)tc_call(0x802e619cu, &a);
    a.r[0] = 0x804b9d30u;
    a.r[1] = 0x817fdfe0u;
    (void)tc_call(0x80100014u, &a);
    f1 = (f64)rdf32(r30 + 0x18u);
    f0 = (f64)rdf32(r30 + 0x1cu);
    wrf32d(0x817fdfd8u, f1);
    wrf32d(0x804b9d68u, f1);
    wrf32d(0x804b9d6cu, f0);
    r4 = rd32((u32)param_1 + 0xd8u);
    wrf32d(0x817fdfdcu, f0);
    wr32((u32)param_1 + 0xd8u, r4 + 1u);
    return (s32)r30;
}
