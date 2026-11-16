#include "tc_rt.h"

void fn_8026d724(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r4 = 0, r27 = 0, r28 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = param_r3;
    r31 = param_r4;
    if ((rd32(0x80571a54u) + 0x5a010000u) == 0x5au) {
        if (rd32(0x80571a48u) == 0u) {
            r3 = tc_call(0x8026d5e0u, &a);
            if (r3 == 0u) {
                return;
            }
        }
        if (rd32(0x80571a48u) != 0u) {
            a.r[0] = 0u;
            a.r[1] = 1u;
            a.r[2] = 0u;
            r3 = tc_call(0x802641b0u, &a);
            if (r3 != 0u) {
                r4 = param_r3;
                while ((r4 - param_r3) < param_r4) {
                    if ((u32)rd8(r4) == 0xau) {
                        wr8(r4, 0xdu);
                    }
                    r4 = r4 + 1u;
                }
                r28 = rd32(0x805772b0u);
                wr32(0x817fdfe4u, 0xb0000100u);
                while (r31 != 0u) {
                    a.r[0] = 0u;
                    a.r[1] = 1u;
                    a.r[2] = r28;
                    r3 = tc_call(0x80263a1cu, &a);
                    if (r3 != 0u) {
                        wr32(0x817fdfd8u, 0x30000100u);
                        a.r[0] = 0u;
                        a.r[1] = 0x817fdfd8u;
                        a.r[2] = 4u;
                        a.r[3] = 1u;
                        a.r[4] = 0u;
                        (void)tc_call(0x80262fb4u, &a);
                        a.r[0] = 0u;
                        (void)tc_call(0x802633ccu, &a);
                        a.r[0] = 0u;
                        a.r[1] = 0x817fdfdcu;
                        a.r[2] = 4u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        (void)tc_call(0x80262fb4u, &a);
                        a.r[0] = 0u;
                        (void)tc_call(0x802633ccu, &a);
                        a.r[0] = 0u;
                        (void)tc_call(0x80263b4cu, &a);
                        r27 = 0x20u - ((rd32(0x817fdfdcu) >> 0x18u) & 0x3fu);
                    } else {
                        r27 = 0xffffffffu;
                    }
                    if ((s32)r27 < 0) break;
                    if (r27 == 0x20u) {
                        a.r[0] = 0u;
                        a.r[1] = 1u;
                        a.r[2] = r28;
                        r3 = tc_call(0x80263a1cu, &a);
                        if (r3 == 0u) break;
                        a.r[0] = 0u;
                        a.r[1] = 0x817fdfe4u;
                        a.r[2] = 4u;
                        a.r[3] = 1u;
                        a.r[4] = 0u;
                        (void)tc_call(0x80262fb4u, &a);
                        a.r[0] = 0u;
                        (void)tc_call(0x802633ccu, &a);
                        while ((s32)r27 > 0 && r31 != 0u) {
                            wr32(0x817fdfe0u, ((u32)rd8(r30) << 0x18u) & 0xff000000u);
                            a.r[0] = 0u;
                            a.r[1] = 0x817fdfe0u;
                            a.r[2] = 4u;
                            a.r[3] = 1u;
                            a.r[4] = 0u;
                            (void)tc_call(0x80262fb4u, &a);
                            a.r[0] = 0u;
                            (void)tc_call(0x802633ccu, &a);
                            r30 = r30 + 1u;
                            r27 = r27 - 1u;
                            r31 = r31 - 1u;
                        }
                        a.r[0] = 0u;
                        (void)tc_call(0x80263b4cu, &a);
                    }
                }
                a.r[0] = 0u;
                (void)tc_call(0x802642acu, &a);
            }
        } else {
            wr32(0x80571a4cu, 1u);
        }
    }
    return;
}
