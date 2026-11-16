#include "tc_rt.h"

void fn_800ae1e4(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1) != (u32)param_2) {
        wr32(param_1, (u32)param_2);
        r30 = rd32(0x8046adc4u);
        r31 = (ppc_cntlzw((u32)param_2) >> 5u) & 0x7ffffffu;
        while (r30 != 0u) {
            r3 = rd32(r30 + 8u);
            r0 = rd32(r3 + 0x88u);
            if (r0 == 0u && r0 != 1u) {
                a.r[0] = r3;
                a.r[1] = r31;
                (void)tc_call(0x800d6370u, &a);
            }
            r30 = rd32(r30);
        }
        if ((u32)param_2 != 0u) {
            r3 = tc_call(0x800a7854u, &a);
            f1 = tc_lastf();
            r30 = r3;
            if (r3 != 0u) {
                r31 = rd32(0x80571140u);
                if (r31 != 0u && rd32(r3 + 0xe0u) == r31) {
                    a.r[0] = r3;
                    f1 = tc_callf(0x800c4f20u, &a);
                }
                wr32(r30 + 0xa60u, 0u);
                if (r31 != 0u) {
                    wr32(param_1 + 4u, (u32)((s32)rd32(r31 + 0x9cu) >> 31));
                    a.r[0] = r31;
                    a.r[1] = 0u;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32(r31) + 0x68u), &a);
                    a.r[0] = r31;
                    a.r[1] = tc_lastr4();
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r31) + 0x13cu), &a);
                    if (r3 != 0u) {
                        a.r[0] = r31;
                        (void)tc_call(0x800b037cu, &a);
                    }
                }
            }
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x60u);
            a.r[0] = r3;
            (void)tc_call(0x802138dcu, &a);
            wr32(0x8057118cu, rd32(0x8057118cu) & 0xfffffffdu);
            r3 = tc_call(0x801567a0u, &a);
            f1 = tc_lastf();
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0x20u), &a);
            (void)tc_call(0x800739d8u, &a);
            (void)tc_call(0x801773ccu, &a);
            (void)tc_call(0x80073aa0u, &a);
            wr32(0x8057118cu, rd32(0x8057118cu) & 0xffffffdfu);
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x38u);
            a.r[0] = r3;
            (void)tc_call(0x80141e6cu, &a);
        } else {
            r3 = tc_call(0x800a7854u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                wr32(r3 + 0xa60u, 1u);
            }
            r3 = rd32(0x80571140u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = rd32(param_1 + 4u);
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3) + 0x68u), &a);
            }
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x60u);
            a.r[0] = r3;
            (void)tc_call(0x80213858u, &a);
            wr32(0x8057118cu, rd32(0x8057118cu) | 2u);
            (void)tc_call(0x80073aa8u, &a);
            r3 = tc_call(0x801567a0u, &a);
            f1 = tc_lastf();
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0x24u), &a);
            wr32(0x8057118cu, rd32(0x8057118cu) | 0x20u);
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x38u);
            a.r[0] = r3;
            (void)tc_call(0x80141e74u, &a);
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x38u);
            a.r[0] = r3;
            (void)tc_call(0x80141e74u, &a);
        }
    }
    return;
}
