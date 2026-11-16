#include "tc_rt.h"

void fn_801a65e8(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r0 = rd32(param_1 + 4u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x80157e6cu, &a);
        wr32(param_1 + 4u, 0u);
    }
    f2 = (f64)rdf32(param_2);
    r3 = 0x64u;
    f1 = (f64)rdf32(param_2 + 8u);
    wrf32d(param_1 + 0x14u, (f64)rdf32(param_2 + 4u));
    r0 = rd32(param_2 + 4u);
    wrf32d(param_1 + 0x10u, f2);
    f0 = (f64)rdf32(0x8057599cu);
    wrf32d(param_1 + 0x18u, f1);
    r4 = rd32(param_2);
    wr32(0x817fdfdcu, r0);
    r0 = rd32(param_2 + 8u);
    f1 = (f64)rdf32(0x817fdfdcu);
    wr32(0x817fdfd8u, r4);
    f0 = (f64)(f32)(f1 + f0);
    wr32(0x817fdfe0u, r0);
    wrf32d(0x817fdfdcu, f0);
    if ((u32)param_3 != 0u) {
        r3 = 0x63u;
    }
    a.f[0] = (f64)rdf32(0x805759a0u);
    a.r[0] = r3;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = 0x804b15c0u;
    a.r[3] = 0x804890c8u;
    r3 = tc_call(0x800d7768u, &a);
    r4 = rd32(param_1 + 0xcu);
    wr32(param_1 + 4u, r3);
    wr32(param_1, (ppc_cntlzw((u32)param_3) >> 5u) & 0x7ffffffu);
    if (r4 != 0xffffffffu) {
        a.r[0] = 0x804b9e80u;
        a.r[1] = r4;
        (void)tc_call(0x801206f4u, &a);
        wr32(param_1 + 0xcu, 0xffffffffu);
    }
    return;
}
