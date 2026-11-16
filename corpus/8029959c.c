#include "tc_rt.h"

void fn_8029959c(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r12 = 0, r24 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_2;
    r3 = tc_call(0x8029318cu, &a);
    f1 = tc_lastf();
    r29 = r3 & 0xffu;
    if ((s32)r29 < 4) {
        r30 = r29 * 0x11cu;
        r31 = r30 - 0x7fac26a8u;
        if ((u32)param_3 == 0u && (u32)rd16(r31 + 0x38u) != 0u) {
            r3 = tc_call(0x8029a514u, &a);
            f1 = tc_lastf();
            if ((r3 & 0xffu) == 0u) {
                wr16(r31 + 0x38u, 0u);
                if ((u32)rd8(0x80540118u) >= 5u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0xd0004u;
                    a.r[1] = 0x80393ec0u;
                    a.r[2] = param_2;
                    a.r[3] = (u32)rd16(r31 + 0x36u);
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc84u, &a);
                }
                a.r[0] = (u32)rd16(r31 + 0x34u);
                a.r[1] = (u32)rd16(r31 + 0x36u);
                f1 = tc_callf(0x802a0468u, &a);
            }
        }
        r4 = (r29 * 0x22u) - 0x7fac26a8u;
        wr8(r4 + 0x4ecu, (u8)param_3);
        wr16(r4 + 0x4eau, (u16)param_4);
        if ((u32)param_3 == 0u && (u32)rd8(r4 + 0x4d4u) == 1u) {
            wr8(r4 + 0x4d4u, 0u);
        }
        r5 = r4 + 0x4d6u;
        if ((u32)param_3 == 0u && (u32)rd8(r5 + 8u) == 1u) {
            wr8(r5 + 8u, 0u);
        }
        if ((u32)rd8(r4 + 0x4edu) == 1u) {
            a.r[0] = 0x80u;
            a.r[1] = r29;
            a.r[2] = 0u;
            f1 = tc_callf(0x802992b8u, &a);
        }
        r29 = 0u;
        r24 = 0x8053d958u;
        do {
            if (((u32)rd8(r24 + 0x558u) & 2u) != 0u) {
                a.r[0] = r31 + 0x3cu;
                a.r[1] = (u32)param_3;
                a.r[2] = param_4;
                a.r[3] = param_1;
                a.f[0] = f1;
                f1 = tc_callf(rd32(r24 + 0x554u), &a);
            }
            r29 = r29 + 1u;
            r24 = r24 + 8u;
        } while ((s32)r29 < 2);
        r28 = r30 - 0x7fac26a8u;
        if ((u32)rd8(r28 + 0x14fu) == 1u) {
            r24 = r28 + 0x3cu;
            a.r[0] = r24;
            r3 = tc_call(0x80295360u, &a);
            if (r3 == 0u || ((u32)rd8(r3 + 0x76u) & 4u) == 0u) {
                a.r[0] = r24;
                a.r[1] = (ppc_cntlzw((u32)rd8(r30 - 0x7fac255au)) >> 5u) & 0xffu;
                r3 = tc_call(0x802a0e6cu, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if ((r3 & 0xffu) != 0u) {
                    wr8(r28 + 0x14fu, 0u);
                    return;
                }
            } else {
                a.r[0] = param_2;
                a.r[1] = 0u;
                r3 = tc_call(0x802a0574u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if ((r3 & 0xffu) != 0u) {
                    wr8(r28 + 0x14fu, 2u);
                    return;
                }
            }
            wr8(r28 + 0x14fu, 0u);
            r12 = rd32(0x8053df84u);
            if (r12 != 0u) {
                wr8(0x8053df7cu, (u8)param_1);
                a.r[0] = 0x8053df7cu;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                (void)tc_call(r12, &a);
                wr32(0x8053df84u, 0u);
            }
        }
    }
    return;
}
