#include "tc_rt.h"

s32 fn_800a75a0(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r12 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    if (param_1 >= 33) {
        r3 = 0u;
    } else {
        r3 = tc_call(0x800a4048u, &a);
        r29 = r3 + (((u32)param_1 << 4u) & 0xfffffff0u);
        r7 = (u32)rd8(0x80572b2au);
        r4 = rd32(0x80337ba4u);
        r12 = 0x817fdfd8u;
        r8 = (u32)rd8(0x80572b28u);
        r30 = 0x817fdfc8u;
        r3 = rd32(0x80337ba8u);
        r28 = 0u;
        r0 = rd32(0x80337bacu);
        wr8(0x817fdfc9u, rd8(0x80572b29u));
        r6 = (u32)rd8(r29 + 0xcu);
        wr32(0x817fdfdcu, 0u);
        r10 = rd32(r29 + 4u);
        wr32(0x817fdfe0u, 0u);
        r9 = rd32(r29 + 8u);
        wr8(0x817fdfcau, (u8)r7);
        r5 = (u32)rd8(r29 + 0xdu);
        wr32(0x817fdfe4u, 0u);
        wr32(0x817fdfd8u, r29);
        wr32(0x817fdfdcu, r10);
        wr32(0x817fdfe0u, r9);
        wr8(0x817fdfc8u, (u8)r8);
        wr8(0x817fdfc9u, (u8)r6);
        wr8(0x817fdfcau, (u8)r5);
        wr32(0x817fdfccu, r4);
        wr32(0x817fdfd0u, r3);
        wr32(0x817fdfd4u, r0);
        for (;;) {
            r3 = rd32(r12);
            if (r3 == 0u) break;
            r4 = (u32)rd8(r30);
            r5 = 0u;
            while ((r5 & 0xffu) < r4) {
                if ((u32)rd16(r3) == param_2) {
                    r3 = rd32(((r28 << 2u) & 0xfffffffcu) - 0x7e802034u);
                    return (s32)r3;
                }
                r3 = r3 + 2u;
                r5 = r5 + 1u;
            }
            r12 = r12 + 4u;
            r30 = r30 + 1u;
            r28 = r28 + 1u;
        }
        r3 = tc_call(0x800a4048u, &a);
        r4 = (u32)rd8(r3 + 0xdu);
        r5 = 0u;
        r3 = rd32(r3 + 8u);
        while ((r5 & 0xffu) < r4) {
            if ((u32)rd16(r3) == param_2) {
                r3 = 0x186a3u;
                return (s32)r3;
            }
            r5 = r5 + 1u;
            r3 = r3 + 2u;
        }
        r3 = 0xffffffffu;
    }
    return (s32)r3;
}
