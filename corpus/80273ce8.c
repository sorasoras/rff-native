#include "tc_rt.h"

void fn_80273ce8(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    u32 r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r27 = 0x8038f7f8u;
    if (param_r4 >= 0xcu && param_r4 <= 0x4000u) {
        wr32(0x80571abcu, 0x24u);
        r31 = param_r3 + param_r4 - 4u;
        a.r[0] = param_r3;
        a.r[1] = 0x80570d78u;
        a.r[2] = 4u;
        r3 = tc_call(0x802592d8u, &a);
        if (r3 == 0u) {
            a.r[0] = r31;
            a.r[1] = 0x80570d80u;
            a.r[2] = 4u;
            r3 = tc_call(0x802592d8u, &a);
            if (r3 == 0u) {
                if (param_r4 < 0x4000u) {
                    r22 = 0x4000u - param_r4;
                    a.r[0] = r31;
                    a.r[1] = 0u;
                    a.r[2] = r22;
                    (void)tc_call(0x8000443cu, &a);
                    r31 = r31 + r22;
                    a.r[0] = r31;
                    a.r[1] = 0x80570d80u;
                    a.r[2] = 4u;
                    (void)tc_call(0x80004338u, &a);
                }
                if ((param_r3 + 6u) <= r31) {
                    r0 = 1u;
                    r30 = ((u32)rd8(param_r3 + 5u) & 0xffff00ffu) | (((u32)rd8(param_r3 + 4u) << 8u) & 0xff00u);
                } else {
                    r0 = 0u;
                }
                if (r0 != 0u) {
                    r29 = param_r3 + 6u;
                    r23 = 0u;
                    r24 = r29;
                    r28 = r29 + ((r30 << 1u) & 0xfffffffeu) + 2u - param_r3;
                    while (r23 < r30) {
                        if (r28 > param_r4 || (r24 - param_r3) > param_r4 || r28 != (u32)rd16(r24)) {
                            return;
                        }
                        a.r[0] = param_r3 + r28;
                        a.r[1] = 0x817fdfa8u;
                        r3 = tc_call(0x80273f34u, &a);
                        if (r3 == 0u) {
                            return;
                        }
                        r24 = r24 + 2u;
                        r23 = r23 + 1u;
                        r28 = r28 + rd32(0x817fdfc4u);
                    }
                    if (r28 <= param_r4 && r28 == (u32)rd16(r29 + ((r23 << 1u) & 0xfffffffeu))) {
                        r3 = r31 - 0x46u;
                        r0 = param_r3 + r28;
                        if (r0 <= r3) {
                            r28 = r3 - r0;
                            a.r[0] = r3;
                            a.r[1] = 0u;
                            a.r[2] = r31 - r3;
                            (void)tc_call(0x8000443cu, &a);
                            r31 = r31 - 2u;
                            r26 = ((rd32(0x80571abcu) << 3u) & 0xfffffff8u) - 0x7fc70808u;
                            while (r27 < r26) {
                                r22 = rd32(r27);
                                if (r22 == 0u) break;
                                a.r[0] = r22;
                                r3 = tc_call(0x802550d4u, &a);
                                r21 = r3;
                                r24 = r29;
                                r23 = 0u;
                                while (r23 < r30) {
                                    r0 = (u32)rd16(r24);
                                    r4 = param_r3 + r0;
                                    r0 = (u32)rd8(param_r3 + r0);
                                    r0 = (r0 & 0x1fu) + 1u;
                                    if (r21 == r0) {
                                        r4 = r4 + 1u;
                                        a.r[0] = r22;
                                        a.r[1] = r4;
                                        a.r[2] = r21;
                                        r3 = tc_call(0x802592d8u, &a);
                                        if (r3 == 0u) {
                                            wr16(r31 + (((0u - rd32(r27 + 4u)) << 1u) & 0xfffffffeu), (u16)(r29 + ((r23 << 1u) & 0xfffffffeu) - param_r3));
                                            break;
                                        }
                                    }
                                    r24 = r24 + 2u;
                                    r23 = r23 + 1u;
                                }
                                r27 = r27 + 8u;
                            }
                            wr32(0x80571ab8u, r30);
                            wr32(0x80571ac0u, r31 - param_r3);
                            wr32(0x80571ab4u, r28);
                        }
                    }
                }
            }
        }
    }
    return;
}
