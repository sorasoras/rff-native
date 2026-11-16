#include "tc_rt.h"

u32 fn_80296904(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x80540118u) >= 4u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0xd0003u;
        a.r[1] = 0x80393bb0u;
        a.r[2] = (u32)param_1;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x8028cc6cu, &a);
    }
    r0 = (u32)((s32)ppc_mulhw(274877907, (s32)((u32)param_1 * 0x271u)) >> 6);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    wr16(0x8053dfa4u, (u16)r0);
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x802a164cu, &a);
        r3 = 0u;
    } else {
        r3 = 3u;
    }
    return r3;
}
