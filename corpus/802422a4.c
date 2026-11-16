#include "tc_rt.h"

u32 fn_802422a4(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, c1lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0;
    TcArgs a = {0};
    if (rd32(0x80571798u) == 0u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = rd32(0x80570b40u);
        a.r[2] = param_r5;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x80226610u, &a);
        r4 = rd32(0x80571778u);
        c1lt = (s32)r4 < 0;
        if (r4 != 0u) {
            c0lt = (s32)r4 < 1;
            wr32(0x80571778u, 0u);
            if (r4 == 1u) {
                wr32(0x80570b54u, 0x80242518u);
            } else if (!c0lt) {
                if ((s32)r4 < 6) {
                    wr32(0x80570b54u, 0x80242630u);
                }
            } else if (!c1lt) {
                wr32(0x80570b54u, 0x80242400u);
            }
            wr32(0x80570b50u, r4);
        }
        r0 = rd32(0x80571a0cu);
        wr32(0x80571798u, 1u);
        if (r0 != 0u) {
            r3 = tc_call(0x8023029cu, &a);
            r4 = tc_lastr4();
            r5 = (((r4 << 0x10u) | (r4 >> 0x10u)) & 0xffffu) | ((r3 << 0x10u) & 0xffff0000u);
            r4 = r4 & 0xffffu;
            wr16(0x800030e0u, (u16)((((u32)((s32)r3 >> 16) & 0xffffu) + ((r3 & 0xffffu) + (r4 + (r5 & 0xffffu)))) & 0x3fffu));
            wr32(0x8057178cu, 0xf0000000u);
        }
        r0 = ((u32)rd16(0x800030e0u) << 8u) & 0x3fff00u;
        r7 = r0 | 0x4d000000u;
        r5 = r0 | 0x4d400000u;
        r3 = r0 | 0x4d800000u;
        r0 = r0 | 0x4dc00000u;
        wr32(0x804e6310u, r7);
        wr32(0x804e6314u, r5);
        wr32(0x804e6318u, r3);
        wr32(0x804e631cu, r0);
        (void)tc_call(0x802661b0u, &a);
        a.r[0] = 0x80389410u;
        (void)tc_call(0x8022d8b8u, &a);
        a.r[0] = 0xf0000000u;
        r3 = tc_call(0x80242090u, &a);
    } else {
        r3 = 1u;
    }
    return r3;
}
