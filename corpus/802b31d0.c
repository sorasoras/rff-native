#include "tc_rt.h"

void fn_802b31d0(u32 param_1, u32 param_2, s32 param_3, u32 param_4, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, r6 = 0, r7 = 0, r10 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    r6 = param_4;
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    wr32(0x817fdf40u, 0x817fe000u);
    r7 = 0u;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0x817fdf48u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    ctr = (u32)param_3;
    if ((u32)param_3 > 0u) {
        do {
            wr8(r31, 0x19u);
            wr8(r31 + 1u, (u8)((s32)rd16(r6) >> 8));
            wr8(r31 + 2u, (u8)rd16(r6));
            r31 = r31 + 3u;
            if ((s32)(r31 + 0x7e8020b8u) > 77) {
                if ((u32)rd8(0x80545c50u) < 2u) break;
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                a.r[0] = 0xa0001u;
                a.r[1] = 0x8039795cu;
                a.r[2] = r7 & 0xffffu;
                a.r[3] = (u32)param_3;
                a.r[4] = r7;
                a.r[5] = param_r8;
                a.r[6] = param_r9;
                a.r[7] = param_r10;
                f1 = tc_callf(0x8028cc84u, &a);
                r10 = 0u;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
                break;
            }
            r7 = r7 + 1u;
            r6 = r6 + 2u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = f5;
    a.f[5] = f6;
    a.f[6] = f7;
    a.f[7] = f8;
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 6u;
    a.r[3] = r31 + 0x7e8020b8u;
    a.r[4] = 0x817fdf48u;
    a.r[7] = r10;
    (void)tc_call(0x802b2e38u, &a);
    return;
}
