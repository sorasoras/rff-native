#include "tc_rt.h"

void fn_802dde6c(u32 param_r3, u32 param_r4)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r26 = 0, r27 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    c0lt = (s32)param_r4 < 3;
    if (param_r4 != 3u) {
        if (!c0lt) {
            wr32(param_r3 + 4u, param_r4);
            return;
        }
        c0lt = (s32)param_r4 < 0;
        if (param_r4 != 0u) {
            if (c0lt) {
                wr32(param_r3 + 4u, param_r4);
                return;
            }
            if (rd32(param_r3 + 4u) == 0u) {
                r3 = tc_call(0x8022c2b0u, &a);
                r7 = param_r3 + 0x241cu;
                r9 = 0u;
                for (;;) {
                    r4 = (u32)rd16(param_r3 + 8u);
                    if ((s32)r9 >= (s32)r4) break;
                    r5 = rd32(r7 + 4u);
                    wr32(r7 + 0xcu, r5);
                    wr32(r7 + 0x1cu, rd32(r7 + 0x18u));
                    r8 = (u32)rd8(r5);
                    r6 = r8 & 0x7fu;
                    while ((r8 & 0x80u) != 0u) {
                        r4 = rd32(r7 + 0xcu) + 1u;
                        wr32(r7 + 0xcu, r4);
                        r8 = (u32)rd8(r4);
                        r6 = ((r6 << 7u) & 0xffffff80u) + (r8 & 0x7fu);
                    }
                    r9 = r9 + 1u;
                    wr32(r7 + 0xcu, rd32(r7 + 0xcu) + 1u);
                    wr32(r7 + 0x20u, (r6 << 0x10u) & 0xffff0000u);
                    wr32(r7 + 0x24u, 1u);
                    r7 = r7 + 0x28u;
                }
                wr32(param_r3 + 0xcu, r4);
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
            }
            wr32(param_r3 + 0x10u, 0u);
            wr32(param_r3 + 4u, param_r4);
            return;
        }
    }
    r27 = 0u;
    do {
        r3 = tc_call(0x8022c2b0u, &a);
        r26 = r3;
        wr8(0x817fdfd8u, (u8)(r27 | 0xb0u));
        wr8(0x817fdfd9u, 0x7bu);
        wr8(0x817fdfdau, 0u);
        a.r[0] = param_r3 + 0x14u;
        a.r[1] = 0x817fdfd8u;
        (void)tc_call(0x802dc484u, &a);
        a.r[0] = r26;
        (void)tc_call(0x8022c2d8u, &a);
        r27 = r27 + 1u;
    } while ((s32)r27 < 16);
    wr32(param_r3 + 4u, param_r4);
    return;
}
