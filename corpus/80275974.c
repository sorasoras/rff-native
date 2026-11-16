#include "tc_rt.h"

u32 fn_80275974(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r5 = 0, r6 = 0;
    TcArgs a = {0};
    if ((rd32(param_1) - 0x55aa0000u) != 0x382du) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x80570d98u;
        a.r[1] = 0x4au;
        a.r[2] = 0x8038f998u;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x802285e4u, &a);
    }
    wr32(param_2, param_1);
    r6 = param_1 + rd32(param_1 + 4u);
    wr32(param_2 + 4u, r6);
    wr32(param_2 + 8u, param_1 + rd32(param_1 + 0xcu));
    r5 = rd32(r6 + 8u);
    wr32(param_2 + 0xcu, r5);
    wr32(param_2 + 0x10u, r6 + (r5 * 0xcu));
    wr32(param_2 + 0x14u, rd32(param_1 + 8u));
    wr32(param_2 + 0x18u, 0u);
    return 1u;
}
