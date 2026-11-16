#include "tc_rt.h"

void fn_802b39f0(s32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
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
    r7 = param_r7;
    r8 = param_r8;
    r5 = (u32)param_2 + 8u;
    r9 = (u32)rd16((u32)param_1 + 0x46cu);
    r0 = r9 + (((((u32)rd8((u32)param_2 + 6u) << 8u) & 0xffffff00u) + (u32)rd8((u32)param_2 + 7u)) & 0xffffu);
    r6 = r0 & 0xffffu;
    wr16((u32)param_1 + 0x46cu, (u16)r0);
    if (r6 != 0u) {
        r0 = (u32)rd16(0x80545c4eu);
        if (r6 > r0) {
            wr16((u32)param_1 + 0x46cu, (u16)r0);
        }
        while ((r9 & 0xffffu) < (u32)rd16((u32)param_1 + 0x46cu)) {
            r4 = (u32)param_1 + ((r9 << 2u) & 0x3fffcu);
            r8 = ((u32)rd8(r5) << 0x18u) & 0xff000000u;
            r7 = (u32)rd8(r5 + 3u);
            r6 = ((u32)rd8(r5 + 1u) << 0x10u) & 0xffff0000u;
            r0 = ((u32)rd8(r5 + 2u) << 8u) & 0xffffff00u;
            r5 = r5 + 4u;
            r6 = r8 + r6;
            r9 = r9 + 1u;
            r0 = r7 + r0;
            r0 = r6 + r0;
            wr32(r4 + 0x418u, r0);
        }
        r4 = (u32)rd8(r5);
        if (r4 == 0u) {
            wr8((u32)param_1 + 0x474u, 2u);
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = param_r10;
            (void)tc_call(0x802b3b38u, &a);
        } else if (r4 <= 0x10u) {
            r5 = r5 + 1u;
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            a.r[2] = r5;
            (void)tc_call(0x802b374cu, &a);
        } else {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = (u32)param_1;
            a.r[1] = 5u;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = param_r10;
            (void)tc_call(0x802b5264u, &a);
        }
    } else {
        if ((u32)rd8(0x80545c50u) >= 2u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0xa0001u;
            a.r[1] = 0x803979e0u;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = r9;
            a.r[7] = param_r10;
            f1 = tc_callf(0x8028cc54u, &a);
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
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        a.r[0] = (u32)param_1;
        a.r[1] = 0xfff0u;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        (void)tc_call(0x802b5264u, &a);
    }
    return;
}
