#include "tc_rt.h"

void fn_8027fc30(u32 param_r3, u32 param_r4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r23 = 0, r24 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)tc_call(0x80284b24u, &a);
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = r3;
    r30 = rd32(((param_r3 << 2u) & 0x3fcu) - 0x7faf46b0u);
    if (rd32(r30 + 0x8dcu) != 0u) {
        r5 = 0u;
        r27 = r30 + ((u32)rd8(r30 + 0x8c8u) * 0x60u) + 0xa0u;
        ctr = 2u;
        do {
            wr8(r27 + r5, 0u);
            r4 = r27 + r5;
            r5 = r5 + 8u;
            wr8(r4 + 1u, 0u);
            wr8(r4 + 2u, 0u);
            wr8(r4 + 3u, 0u);
            wr8(r4 + 4u, 0u);
            wr8(r4 + 5u, 0u);
            wr8(r4 + 6u, 0u);
            wr8(r4 + 7u, 0u);
            r4 = r27 + r5;
            wr8(r27 + r5, 0u);
            r5 = r5 + 8u;
            wr8(r4 + 1u, 0u);
            wr8(r4 + 2u, 0u);
            wr8(r4 + 3u, 0u);
            wr8(r4 + 4u, 0u);
            wr8(r4 + 5u, 0u);
            wr8(r4 + 6u, 0u);
            wr8(r4 + 7u, 0u);
            r4 = r27 + r5;
            wr8(r27 + r5, 0u);
            r5 = r5 + 8u;
            wr8(r4 + 1u, 0u);
            wr8(r4 + 2u, 0u);
            wr8(r4 + 3u, 0u);
            wr8(r4 + 4u, 0u);
            wr8(r4 + 5u, 0u);
            wr8(r4 + 6u, 0u);
            wr8(r4 + 7u, 0u);
            r4 = r27 + r5;
            wr8(r27 + r5, 0u);
            r5 = r5 + 8u;
            wr8(r4 + 1u, 0u);
            wr8(r4 + 2u, 0u);
            wr8(r4 + 3u, 0u);
            wr8(r4 + 4u, 0u);
            wr8(r4 + 5u, 0u);
            wr8(r4 + 6u, 0u);
            wr8(r4 + 7u, 0u);
            r4 = r27 + r5;
            wr8(r27 + r5, 0u);
            r5 = r5 + 8u;
            wr8(r4 + 1u, 0u);
            wr8(r4 + 2u, 0u);
            wr8(r4 + 3u, 0u);
            wr8(r4 + 4u, 0u);
            wr8(r4 + 5u, 0u);
            wr8(r4 + 6u, 0u);
            wr8(r4 + 7u, 0u);
            r4 = r27 + r5;
            wr8(r27 + r5, 0u);
            r5 = r5 + 8u;
            wr8(r4 + 1u, 0u);
            wr8(r4 + 2u, 0u);
            wr8(r4 + 3u, 0u);
            wr8(r4 + 4u, 0u);
            wr8(r4 + 5u, 0u);
            wr8(r4 + 6u, 0u);
            wr8(r4 + 7u, 0u);
            ctr = ctr - 1u;
        } while (ctr != 0u);
        r28 = rd32(r30 + 0x840u);
        wr16(r27, (u16)((((u32)rd8(param_r4 + 1u) & 0xffff00ffu) | (((u32)rd8(param_r4 + 2u) << 8u) & 0xff00u)) & 0x9f1fu));
        wr32(r30 + 0x848u, (u32)((s32)((u32)rd8(param_r4 + 1u) & 0x80u) >> 7));
        wr32(r30 + 0x838u, ((u32)rd8(param_r4 + 3u) >> 3u) & 1u);
        wr32(r30 + 0x83cu, ((u32)rd8(param_r4 + 3u) >> 2u) & 1u);
        wr32(r30 + 0x840u, ((u32)rd8(param_r4 + 3u) >> 1u) & 1u);
        wr32(r30 + 0x844u, (u32)rd8(param_r4 + 3u) & 1u);
        wr8(r30 + 0x84du, (u8)(((u32)rd8(param_r4 + 3u) >> 4u) & 0xfu));
        wr8(r30 + 0x84eu, 0u);
        wr8(r30 + 0x84fu, (u8)((u32)rd8(param_r4 + 5u) & 0xf0u));
        r0 = (u32)rd8(param_r4 + 6u);
        if (r0 < 0x55u) {
            if (r0 < 0x44u) {
                if (r0 < 0x33u) {
                    if (r0 < 3u) {
                        wr8(r30 + 0x84cu, 0u);
                    } else {
                        wr8(r30 + 0x84cu, 1u);
                    }
                } else {
                    wr8(r30 + 0x84cu, 2u);
                }
            } else {
                wr8(r30 + 0x84cu, 3u);
            }
        } else {
            wr8(r30 + 0x84cu, 4u);
        }
        if (rd32(r30 + 0x840u) == 0u) {
            wr8(r30 + 0x8c1u, 0u);
            wr8(r30 + 0x8c2u, 0u);
            a.r[0] = r30 + 0x5ecu;
            (void)tc_call(0x8027e57cu, &a);
            a.r[0] = r30 + 0x5ecu;
            a.r[1] = rd32(r30 + 0x8b8u);
            a.r[2] = (u32)rd8(r30 + 0x98eu);
            a.r[3] = 0u;
            f1 = tc_callf(0x8027de44u, &a);
            if (r28 == 0u) {
                f1 = tc_callf(0x80284b24u, &a);
            } else {
                r12 = rd32(r30 + 0x8a0u);
                if (r12 != 0u) {
                    a.r[0] = param_r3;
                    a.r[1] = 0u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    f1 = tc_callf(r12, &a);
                }
            }
        } else if (r28 != 0u) {
            f1 = tc_callf(0x80284b24u, &a);
        } else {
            (void)tc_call(0x80284b24u, &a);
            wr8(param_r3 - 0x7fa8e4f0u, 0u);
            r24 = rd32(((param_r3 << 2u) & 0x3fcu) - 0x7faf46b0u);
            r23 = rd32(r30 + 0x8a0u);
            a.r[0] = r24 + 0x5ecu;
            (void)tc_call(0x8027e57cu, &a);
            a.r[0] = r24 + 0x5ecu;
            a.r[1] = rd32(r24 + 0x8b8u);
            a.r[2] = (u32)rd8(r24 + 0x98eu);
            a.r[3] = 0x8027e5dcu;
            (void)tc_call(0x8027de44u, &a);
            wr8(r24 + 0x98du, 1u);
            a.r[0] = r24 + 0x5ecu;
            a.r[1] = 0x55u;
            a.r[2] = 0x4a400f0u;
            a.r[3] = 0x8027e5dcu;
            (void)tc_call(0x8027e064u, &a);
            a.r[0] = r24 + 0x5ecu;
            a.r[1] = 0u;
            a.r[2] = 0x4a400fbu;
            a.r[3] = 0x8027e5dcu;
            (void)tc_call(0x8027e064u, &a);
            a.r[0] = r24 + 0x5ecu;
            a.r[1] = r24 + 0x934u;
            a.r[2] = 6u;
            a.r[3] = 0x4a400fau;
            a.r[4] = 0x8027e5dcu;
            f1 = tc_callf(0x8027e3d0u, &a);
            wr8(r30 + 0x911u, 0u);
            wr8(r30 + 0x8c1u, 0xffu);
            wr8(r30 + 0x8c2u, 0u);
            if (r23 != 0u) {
                a.r[0] = param_r3;
                a.r[1] = 0xffu;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r23, &a);
            }
        }
        r3 = rd32(r30 + 0x850u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r30 + 0x838u;
            a.r[2] = 0x18u;
            f1 = tc_callf(0x80004338u, &a);
            wr32(r30 + 0x850u, 0u);
        }
        r12 = rd32(r30 + 0x89cu);
        if (r12 != 0u && (u32)rd8(r30 + 0x8c0u) != 0u) {
            a.r[0] = param_r3;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
            wr32(r30 + 0x89cu, 0u);
        }
        wr8(r27 + 0x29u, 0xfeu);
        wr8(r27 + 0x28u, rd8(r30 + 0x8c1u));
        wr8(r30 + 0x8c0u, 0u);
        wr8(r30 + 0x8c8u, (u8)((ppc_cntlzw((u32)rd8(r30 + 0x8c8u)) >> 5u) & 0xffu));
        a.r[0] = r29;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
