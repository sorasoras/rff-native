#include "tc_rt.h"

s32 fn_8022f310(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((s32)rd32(0x80571508u) > 0) {
        r3 = 0u;
    } else {
        r3 = tc_call(0x80227f7cu, &a);
        f1 = tc_lastf();
        r5 = rd32(0x800000e4u);
        if (r3 != r5) {
            r3 = 0u;
        } else {
            if (r5 != 0u) {
                if ((u32)rd16(r5 + 0x2c8u) == 2u) {
                    if ((u32)param_1 == 0u && (s32)rd32(r5 + 0x2d0u) <= (s32)ppc_cntlzw(rd32(0x80571510u))) {
                        r3 = 0u;
                        return (s32)r3;
                    }
                    wr16(r5 + 0x2c8u, 1u);
                    r3 = ((rd32(r5 + 0x2d0u) << 3u) & 0xfffffff8u) - 0x7fb1fa90u;
                    wr32(r5 + 0x2dcu, r3);
                    r4 = rd32(r3 + 4u);
                    if (r4 == 0u) {
                        wr32(r3, r5);
                    } else {
                        wr32(r4 + 0x2e0u, r5);
                    }
                    wr32(r5 + 0x2e4u, r4);
                    wr32(r5 + 0x2e0u, 0u);
                    wr32(rd32(r5 + 0x2dcu) + 4u, r5);
                    r0 = 0x1fu - rd32(r5 + 0x2d0u);
                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                    r0 = rd32(0x80571510u) | r0;
                    wr32(0x80571510u, r0);
                    wr32(0x8057150cu, 1u);
                }
                if (((u32)rd16(r5 + 0x1a2u) & 2u) == 0u) {
                    a.r[0] = r5;
                    r3 = tc_call(0x80227f88u, &a);
                    f1 = tc_lastf();
                    r5 = 0u;
                    if (r3 != 0u) {
                        r3 = 0u;
                        return (s32)r3;
                    }
                }
            }
            if (rd32(0x80571510u) == 0u) {
                a.r[0] = rd32(0x800000e4u);
                a.r[1] = 0u;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(0x80570a88u), &a);
                wr32(0x800000e4u, 0u);
                a.r[0] = 0x804e0670u;
                (void)tc_call(0x80227f20u, &a);
                do {
                    (void)tc_call(0x8022c2c4u, &a);
                    do {
                    } while (rd32(0x80571510u) == 0u);
                    (void)tc_call(0x8022c2b0u, &a);
                } while (rd32(0x80571510u) == 0u);
                a.r[0] = 0x804e0670u;
                f1 = tc_callf(0x80228148u, &a);
            }
            wr32(0x8057150cu, 0u);
            r5 = ppc_cntlzw(rd32(0x80571510u));
            r3 = ((r5 << 3u) & 0xfffffff8u) - 0x7fb1fa90u;
            r30 = rd32(r3);
            r6 = rd32(r30 + 0x2e0u);
            if (r6 == 0u) {
                wr32(r3 + 4u, 0u);
            } else {
                wr32(r6 + 0x2e4u, 0u);
            }
            wr32(r3, r6);
            if (r6 == 0u) {
                r0 = 0x1fu - r5;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = rd32(0x80571510u) & ~r0;
                wr32(0x80571510u, r0);
            }
            wr32(r30 + 0x2dcu, 0u);
            wr16(r30 + 0x2c8u, 2u);
            a.r[0] = rd32(0x800000e4u);
            a.r[1] = r30;
            a.r[2] = r5;
            a.r[3] = r6;
            a.f[0] = f1;
            (void)tc_call(rd32(0x80570a88u), &a);
            wr32(0x800000e4u, r30);
            a.r[0] = r30;
            (void)tc_call(0x80227f20u, &a);
            a.r[0] = r30;
            (void)tc_call(0x80228008u, &a);
            r3 = r30;
        }
    }
    return (s32)r3;
}
