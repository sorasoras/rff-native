#include "tc_rt.h"

static void px_rec(u32 sp_, u32 param_1, s32 param_2, s32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r1 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r25 = 0, r30 = 0, r31 = 0, t0 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    wr32(sp_ - 0x30u, sp_);
    r1 = sp_ - 0x30u;
    wr32(r1 + 0x34u, 0x817ff000u);
    t0 = r1 + 0xcu;
    wr32(t0, 0u);
    wr32(t0 + 4u, 0u);
    wr32(t0 + 8u, 0u);
    wr32(t0 + 0xcu, 0u);
    wr32(t0 + 0x10u, 0u);
    wr32(t0 + 0x14u, 0u);
    wr32(t0 + 0x18u, 0u);
    wr32(t0 + 0x1cu, 0u);
    wr32(t0 + 0x20u, 0u);
    if ((u32)param_2 != 0u) {
        r31 = rd32((u32)param_2 + 0x14u);
        r30 = (u32)param_2 + 0x14u;
        wr8((u32)param_2 + 0xbbu, (u8)(((((0u - (u32)param_3) | (u32)param_3) >> 0x1fu) & 1u) | ((u32)rd8((u32)param_2 + 0xbbu) & 0xfeu)));
        while (r31 != r30) {
            if (r31 == 0u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0x803604e4u;
                a.r[1] = 0x23du;
                a.r[2] = 0x803604c0u;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                f1 = tc_callf(0x802e41c0u, &a);
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
            }
            r25 = r31 - 4u;
            if (r25 == 0u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0x80360514u;
                a.r[1] = 0x193u;
                a.r[2] = 0x803604f0u;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                f1 = tc_callf(0x802e41c0u, &a);
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
            }
            px_rec(r1, param_1, r25, (u32)param_3, f1, f2, f3, f4, f5, f6, f7, f8, r10, r6, r7, r8, r9);
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            r31 = rd32(r31);
        }
    }
    return;
}

void fn_800fee64(u32 param_1, s32 param_2, s32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    px_rec(0x817fe000u, param_1, param_2, param_3, param_f1, param_f2, param_f3, param_f4, param_f5, param_f6, param_f7, param_f8, param_r10, param_r6, param_r7, param_r8, param_r9);
}
