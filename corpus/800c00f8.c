#include "tc_rt.h"

void fn_800c00f8(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r7 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r7 = (u32)param_2 * 0x58u;
    f1 = (f64)rdf32(0x80572e78u);
    r31 = r7 - 0x7fb97210u;
    wr32(param_1 + 0xa0cu, 0x21u);
    wr32(param_1 + 0xa10u, 0x21u);
    wr32(param_1 + 0xa14u, 0u);
    wr32(param_1 + 0xa08u, (u32)param_2);
    a.r[0] = param_1;
    a.r[1] = (u32)rd8(r31);
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = r7;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
    r3 = (u32)rd8(r31 + 0x1bu);
    wr32(0x817fdfe8u, 0x43300000u);
    f1 = rdf64(0x80572e98u);
    wr32(0x817fdfecu, r3);
    wrf32d(rd32(param_1 + 0x70u) + 0x54u, (f64)(f32)(rdf64(0x817fdfe8u) - f1));
    r3 = (u32)rd8(r31 + 0x1du);
    if (r3 != 0xffu) {
        wr32(0x817fdfecu, r3);
        r3 = rd32(param_1 + 0x70u);
        wr32(0x817fdfe8u, 0x43300000u);
        wrf32d(r3 + 0x60u, (f64)(f32)(rdf64(0x817fdfe8u) - f1));
    }
    return;
}
