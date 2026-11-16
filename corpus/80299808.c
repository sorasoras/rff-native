#include "tc_rt.h"

void fn_80299808(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 == 0u) {
        if ((u32)rd8(0x80540118u) < 1u) {
            return;
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0xd0000u;
        a.r[1] = 0x80393f00u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc54u, &a);
    } else {
        if (param_1 < 3u) {
            r31 = (param_1 * 0x34u) - 0x7fac0e54u;
        }
        if (param_2 != 0u) {
            if (r31 != 0u) {
                wr16(r31 + 8u, (u16)((ppc_cntlzw((u32)rd16(r31 + 8u) - 2u) >> 5u) & 0xffffu));
            }
            if ((u32)rd8(0x8053f260u) == 0u) {
                a.r[0] = r30;
                a.r[1] = param_3;
                a.r[2] = param_2;
                (void)tc_call(0x8029ff48u, &a);
                return;
            }
            a.r[0] = r30;
            a.r[1] = param_3;
            a.r[2] = param_2;
            (void)tc_call(0x802a0ad0u, &a);
        } else {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 1u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80294c94u, &a);
            wr16(r31 + 8u, 3u);
            if ((u32)rd8(0x8053f260u) != 0u && (u32)rd8(r31 + 0x2eu) == 2u) {
                if (param_4 != 0u) {
                    r0 = rd32(param_4 + 4u);
                    wr32(r31 + 0x14u, rd32(param_4));
                    wr32(r31 + 0x18u, r0);
                    r0 = rd32(param_4 + 0xcu);
                    wr32(r31 + 0x1cu, rd32(param_4 + 8u));
                    wr32(r31 + 0x20u, r0);
                }
                r4 = (u32)rd16(0x8053f25cu);
                wr16(r31 + 0x20u, (u16)r4);
                r5 = (u32)rd16(0x8053dfaeu);
                r3 = r4 & r5;
                r28 = r3 & 0x3fu;
                if ((r3 & 0x38u) == 0u) {
                    r28 = (r28 | 8u) & 0xffffu;
                }
                if ((u32)rd8(0x8053df8eu) >= 3u) {
                    r28 = (r28 | ((r4 | r5) & 0x3c0u)) & 0xffffu;
                }
                a.r[0] = r30;
                a.r[1] = param_3;
                a.r[2] = rd32(r31 + 0x14u);
                a.r[3] = rd32(r31 + 0x18u);
                a.r[4] = (u32)rd16(r31 + 0x1cu);
                a.r[5] = (u32)rd16(r31 + 0x1eu);
                a.r[6] = (u32)rd8(r31 + 0x22u);
                a.r[7] = r28 & 0xffffu;
                (void)tc_call(0x802a09e8u, &a);
                wr16(r31 + 0x20u, (u16)r28);
            } else {
                a.r[0] = r30;
                a.r[1] = param_3;
                a.r[2] = 0u;
                (void)tc_call(0x8029fee8u, &a);
            }
        }
    }
    return;
}
