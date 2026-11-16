#include "tc_rt.h"

void fn_802986e8(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r28 = 0;
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
    r9 = param_r9;
    r28 = rd32(0x8053f008u);
    if ((u32)rd8(0x8053f1a0u) != 0u) {
        r3 = 0xau;
        wr32(0x8053f018u, rd32(0x8053f018u) + 1u);
        if ((u32)param_1 == 0u) {
            r3 = 0u;
        }
        r0 = (u32)rd8(0x8053f1a0u);
        wr8(0x8053f196u, (u8)r3);
        r0 = r0 & 4u;
        if (r0 == 0u) {
            wr32(0x8053f00cu, 0u);
            r3 = rd32(0x8053f034u);
            wr8(0x8053f1a0u, 0u);
            wr8(0x8053f19fu, 0u);
            wr32(0x8053f008u, 0u);
            if (r3 != 0u) {
                a.r[0] = r3;
                f1 = tc_callf(0x8028a35cu, &a);
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
                wr32(0x8053f034u, 0u);
            }
            r4 = 0u;
            wr16(0x8053f038u, 0u);
            r0 = (u32)rd8(0x80540118u);
            wr16(0x8053f03au, 0u);
            if (r0 >= 5u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0xd0004u;
                a.r[1] = 0x80393e84u;
                a.r[2] = (u32)rd8(0x8053f196u);
                a.r[3] = (u32)rd8(0x8053f197u);
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                f1 = tc_callf(0x8028cc84u, &a);
                r4 = tc_lastr4();
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
            if (r28 != 0u) {
                a.r[0] = 0x8053f196u;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                (void)tc_call(r28, &a);
            }
        }
    }
    return;
}
