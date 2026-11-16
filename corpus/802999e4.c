#include "tc_rt.h"

void fn_802999e4(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r20 = 0, r26 = 0, r27 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r27 = 0u;
    r26 = 0x8053f1acu;
    do {
        if ((u32)rd16(r26 + 8u) == 6u && (u32)param_3 == 0u && param_1 == 0u) {
            a.r[0] = r26 + 0x28u;
            r3 = tc_call(0x802940e8u, &a);
            f1 = tc_lastf();
            r5 = r3 & 0xffffu;
            r29 = r3;
            if (param_2 == r5) {
                if ((u32)rd8(0x80540118u) >= 3u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0xd0002u;
                    a.r[1] = 0x80393fdcu;
                    a.r[2] = r5;
                    a.r[3] = (u32)rd8(0x8053f261u);
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    f1 = tc_callf(0x8028cc84u, &a);
                }
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
                f1 = tc_callf(0x80294c94u, &a);
                if ((u32)rd8(0x8053f260u) != 0u) {
                    r3 = (u32)rd16(0x8053dfaeu);
                    r4 = (u32)rd16(r26 + 0x20u);
                    r20 = r4 & r3 & 0x3fu;
                    if ((u32)rd8(0x8053df8eu) >= 3u) {
                        r20 = (r20 | ((r4 | r3) & 0x3c0u)) & 0xffffu;
                    }
                    if ((u32)rd8(0x80540118u) >= 3u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0xd0002u;
                        a.r[1] = 0x80393f8cu;
                        a.r[2] = rd32(r26 + 0x14u);
                        a.r[3] = rd32(r26 + 0x18u);
                        a.r[4] = (u32)rd16(r26 + 0x1cu);
                        a.r[5] = (u32)rd16(r26 + 0x1eu);
                        a.r[6] = (u32)rd8(r26 + 0x22u);
                        a.r[7] = r20 & 0xffffu;
                        (void)tc_call(0x8028cce4u, &a);
                    }
                    a.r[0] = r29 & 0xffffu;
                    a.r[1] = rd32(r26 + 0x14u);
                    a.r[2] = rd32(r26 + 0x18u);
                    a.r[3] = (u32)rd16(r26 + 0x1cu);
                    a.r[4] = (u32)rd16(r26 + 0x1eu);
                    a.r[5] = (u32)rd8(r26 + 0x22u);
                    a.r[6] = r20 & 0xffffu;
                    r3 = tc_call(0x802a08ecu, &a);
                    if ((r3 & 0xffu) != 0u) {
                        wr16(r26 + 0x20u, (u16)r20);
                        r0 = 1u;
                    } else {
                        r0 = 3u;
                    }
                } else {
                    a.r[0] = r29 & 0xffffu;
                    a.r[1] = ((u32)rd16(r26 + 0x20u) << 5u) & 0xe0u;
                    r3 = tc_call(0x8029fe5cu, &a);
                    if ((r3 & 0xffu) != 0u) {
                        r0 = 1u;
                    } else {
                        r0 = 3u;
                    }
                }
                if (r0 == 1u) {
                    wr16(r26 + 8u, 3u);
                }
            }
        }
        r27 = r27 + 1u;
        r26 = r26 + 0x34u;
    } while (r27 < 3u);
    return;
}
