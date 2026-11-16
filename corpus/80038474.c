#include "tc_rt.h"

u32 fn_80038474(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r31 = rd32((u32)param_1 + 0x2cu);
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 0x817fdfb8u;
    a.r[1] = rd32(r31 + 0x10u);
    a.r[2] = rd32(r31 + 0xcu);
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    (void)tc_call(0x800379a8u, &a);
    a.r[0] = 0x817fdfb8u;
    a.r[1] = rd32(r31 + 8u);
    a.r[2] = rd32(r31 + 4u);
    a.r[3] = r31 + 0x2cu;
    r3 = tc_call(0x800381e4u, &a);
    wr32(r31 + 0x28u, r3);
    if (r3 == 0u && rd32(rd32((u32)param_1 + 0x2cu) + 0x2cu) == 0u) {
        wr8((u32)param_1 + rd32(r31 + 0xcu) + 8u, 1u);
    }
    return rd32(r31 + 0x28u);
}
