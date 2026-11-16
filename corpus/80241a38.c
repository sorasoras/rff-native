#include "tc_rt.h"

void fn_80241a38(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = ((u32)param_1 * 0xcu) - 0x7fb19d30u;
    r4 = rd32(0x80570b4cu) & 0x700u;
    r0 = (((u32)param_1 & 0x20u) != 0u) ? 0u : (0x80000000u >> ((u32)param_1 & 0x1fu));
    c0lt = (s32)r4 < 1024;
    do {
        if (r4 != 0x400u) {
            if (!c0lt) {
                c0lt = (s32)r4 < 1536;
                if (r4 != 0x600u) {
                    if (!c0lt) {
                        if (r4 != 0x700u) break;
                    } else if (r4 != 0x500u) {
                        break;
                    }
                }
            } else {
                c0lt = (s32)r4 < 512;
                if (r4 == 0x200u) {
                    wr8(r31 + 4u, (u8)((u32)rd8(r31 + 4u) & 0xfffffff0u));
                    wr8(r31 + 5u, (u8)((u32)rd8(r31 + 5u) & 0xfffffff0u));
                    wr8(r31 + 6u, (u8)((u32)rd8(r31 + 6u) & 0xf0u));
                    wr8(r31 + 7u, (u8)((u32)rd8(r31 + 7u) & 0xf0u));
                    break;
                }
                if (!c0lt) {
                    if (r4 == 0x300u) break;
                    break;
                }
                c0lt = (s32)r4 < 256;
                if (r4 == 0x100u) {
                    wr8(r31 + 4u, (u8)((u32)rd8(r31 + 4u) & 0xfffffff0u));
                    wr8(r31 + 5u, (u8)((u32)rd8(r31 + 5u) & 0xfffffff0u));
                    wr8(r31 + 8u, (u8)((u32)rd8(r31 + 8u) & 0xf0u));
                    wr8(r31 + 9u, (u8)((u32)rd8(r31 + 9u) & 0xf0u));
                    break;
                }
                if (!c0lt) break;
                if (r4 != 0u) break;
            }
            wr8(r31 + 6u, (u8)((u32)rd8(r31 + 6u) & 0xf0u));
            wr8(r31 + 7u, (u8)((u32)rd8(r31 + 7u) & 0xf0u));
            wr8(r31 + 8u, (u8)((u32)rd8(r31 + 8u) & 0xf0u));
            wr8(r31 + 9u, (u8)((u32)rd8(r31 + 9u) & 0xf0u));
        }
    } while (0);
    r4 = rd32(0x80570b48u);
    wr8(r31 + 2u, (u8)((u32)rd8(r31 + 2u) - 0x80u));
    r0 = r4 & r0;
    wr8(r31 + 3u, (u8)((u32)rd8(r31 + 3u) - 0x80u));
    wr8(r31 + 4u, (u8)((u32)rd8(r31 + 4u) - 0x80u));
    wr8(r31 + 5u, (u8)((u32)rd8(r31 + 5u) - 0x80u));
    if (r0 != 0u && (s32)(s8)rd8(r31 + 2u) > 64) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80265e14u, &a);
        r3 = r3 & 0xffff0000u;
        if ((r3 - 0x9000000u) == 0u) {
            wr8(r31 + 2u, 0u);
        }
    }
    return;
}
