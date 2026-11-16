#include "tc_rt.h"

u32 fn_8029a5fc(u32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, r0 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = rd32(param_1);
    r4 = rd32(param_1 + 4u);
    r0 = (u32)rd8(0x80540118u);
    wr32(0x8053f264u, r5);
    c0lt = r0 < 4u;
    wr32(0x8053f268u, r4);
    r0 = rd32(param_1 + 0xcu);
    wr32(0x8053f26cu, rd32(param_1 + 8u));
    wr32(0x8053f270u, r0);
    r0 = rd32(param_1 + 0x14u);
    wr32(0x8053f274u, rd32(param_1 + 0x10u));
    wr32(0x8053f278u, r0);
    if (!c0lt) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0xd0003u;
        a.r[1] = 0x80394200u;
        a.r[2] = r5;
        a.r[3] = 0x8053d958u;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x8028cc54u, &a);
    }
    return 1u;
}
