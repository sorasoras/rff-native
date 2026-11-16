#include "tc_rt.h"

u32 fn_801ebe1c(u32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = param_1;
    r31 = rd32(0x804de0f8u);
    do {
        if ((s32)param_1 > 0) {
            r0 = (param_1 >> 3u) & 0x1fffffffu;
            ctr = r0;
            if (r0 != 0u) {
                do {
                    r31 = rd32(r31);
                    r31 = rd32(r31);
                    r31 = rd32(r31);
                    r31 = rd32(r31);
                    r31 = rd32(r31);
                    r31 = rd32(r31);
                    r31 = rd32(r31);
                    r31 = rd32(r31);
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                r3 = param_1 & 7u;
                if (r3 == 0u) break;
            }
            ctr = r3;
            do {
                r31 = rd32(r31);
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    } while (0);
    if (r31 == 0u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x8037615cu;
        a.r[1] = 0x23du;
        a.r[2] = 0x80376138u;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x802e41c0u, &a);
    }
    return rd32(r31 - 4u);
}
