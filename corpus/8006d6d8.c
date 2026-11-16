#include "tc_rt.h"

void fn_8006d6d8(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    if ((rd32(0x8057118cu) & 0x400u) != 0u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x803d29f8u;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        r3 = tc_call(0x80097c5cu, &a);
        if (r3 == 0u) {
            a.r[0] = rd32((u32)param_1 + 0x1610u);
            a.r[1] = (u32)rd16((u32)param_1 + 0x1618u);
            (void)tc_call(0x80081c68u, &a);
            r0 = (u32)rd16(0x8049908cu) - (u32)rd16((u32)param_1 + 0x1614u);
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r0 = r0 & 0xffffu;
            if (r0 >= 0x2710u) {
                r0 = 0x2710u;
            }
            wr16(0x8049908cu, (u16)r0);
            r0 = (u32)rd16(0x8049908au) - (u32)rd16((u32)param_1 + 0x1616u);
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r4 = r0 & 0xffffu;
            if (r4 >= 0xffffu) {
                r4 = 0xffffu;
            }
            wr16(0x8049908au, (u16)r4);
            if ((r4 & 0xffffu) == 0u) {
                wr32(0x8057118cu, rd32(0x8057118cu) & 0xffff6ffeu);
            }
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006d6bcu, &a);
    return;
}
