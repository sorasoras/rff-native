#include "tc_rt.h"

void fn_80046c04(void)
{
    u32 ca = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r30 = 0;
    u64 t1 = 0;
    TcArgs a = {0};
    r12 = rd32(0x80571050u);
    if (r12 != 0u) {
        a.r[0] = 0u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.f[0] = 0.0;
        (void)tc_call(r12, &a);
    }
    r30 = 0xffffffffu;
    if (rd32(0x803c1de0u) != 0u && (u32)rd8(0x803c1de4u) == 3u) {
        if (rd32(0x803c1de8u) != 0u || rd32(0x803c1decu) != 0u) {
            wr8(0x803c1de5u, 6u);
            wr8(0x803c1de4u, 6u);
        } else {
            r4 = rd32(0x803c1e0cu);
            ca = (r4 + 1u) < r4;
            r4 = r4 + 1u;
            t1 = (u64)rd32(0x803c1e08u) + (u64)ca;
            wr32(0x803c1e0cu, r4);
            wr32(0x803c1e08u, (u32)t1);
            if ((r4 | (u32)t1) != 0u) {
                if ((u32)rd8(0x803c1de7u) != 0u && ((r4 ^ 1u) | (u32)t1) == 0u && (u32)rd8(0x803c1de5u) != 3u) {
                    (void)tc_call(0x80047fe8u, &a);
                    wr8(0x803c1de5u, 3u);
                }
                r3 = tc_call(0x80046f0cu, &a);
                if (r3 != 0u) {
                    if ((u32)rd8(0x803c1de7u) == 0u) {
                        a.r[0] = 0u;
                        r3 = tc_call(0x800492f8u, &a);
                        r30 = r3;
                    } else if ((s32)(rd32(0x803c1e30u) - rd32(0x803c1e34u)) <= 1) {
                        a.r[0] = 0u;
                        r3 = tc_call(0x800492f8u, &a);
                        r30 = r3;
                        wr32(0x803c1e30u, rd32(0x803c1e30u) + 1u);
                    }
                }
            } else {
                r3 = tc_call(0x80046ea0u, &a);
                if (r3 == 0u) {
                    wr32(0x803c1e0cu, 0xffffffffu);
                    wr32(0x803c1e08u, 0xffffffffu);
                } else if ((u32)rd8(0x803c1de7u) == 0u) {
                    a.r[0] = 0u;
                    r3 = tc_call(0x800492f8u, &a);
                    r30 = r3;
                } else if ((s32)(rd32(0x803c1e30u) - rd32(0x803c1e34u)) > 1) {
                    (void)tc_call(0x80047fe8u, &a);
                    wr8(0x803c1de5u, 3u);
                } else {
                    a.r[0] = 0u;
                    r3 = tc_call(0x800492f8u, &a);
                    r30 = r3;
                    wr32(0x803c1e30u, rd32(0x803c1e30u) + 1u);
                }
            }
            if (r30 != 0u && (r30 + 0x10000u) != 0xffffu) {
                r3 = rd32(0x803c1e38u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    (void)tc_call(0x80047148u, &a);
                }
                wr32(0x803c1e38u, r30);
            }
            if (((u32)rd8(0x803c1de6u) & 1u) == 0u) {
                if ((u32)rd8(0x803c1de7u) == 0u) {
                    r3 = rd32(0x803c1e38u);
                    if (r3 == 0u) {
                        r5 = rd32(0x803c1e04u) - 1u;
                    } else {
                        r3 = rd32(r3 + 0xcu);
                        r5 = r3 + rd32(0x803c1e04u);
                    }
                    if (r5 == (rd32(0x803c1d90u) - 1u) && r30 == 0u) {
                        wr8(0x803c1de5u, 4u);
                        wr8(0x803c1de4u, 4u);
                    }
                } else if ((rd32(0x803c1e34u) + rd32(0x803c1e04u)) == rd32(0x803c1d90u) && rd32(0x803c1e3cu) == 0u) {
                    wr8(0x803c1de5u, 4u);
                    wr8(0x803c1de4u, 4u);
                }
            }
        }
    }
    return;
}
