#include "tc_rt.h"

void fn_802a2e70(u32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x80540618u;
    if ((u32)rd8(0x80540a18u) != 0u) {
        r29 = 0u;
        do {
            a.r[0] = param_1;
            a.r[1] = r31 + 1u;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            if (r3 == 0u) break;
            r29 = r29 + 1u;
            r31 = r31 + 0x34u;
        } while ((s32)r29 < 16);
        if (r29 == 0x10u) {
            r3 = 0x80540618u;
            r29 = 0u;
            ctr = 2u;
            while ((u32)rd8(r3) != 0u) {
                r29 = r29 + 1u;
                if ((u32)rd8(r3 + 0x34u) == 0u) break;
                r29 = r29 + 1u;
                if ((u32)rd8(r3 + 0x68u) == 0u) break;
                r29 = r29 + 1u;
                if ((u32)rd8(r3 + 0x9cu) == 0u) break;
                r29 = r29 + 1u;
                if ((u32)rd8(r3 + 0xd0u) == 0u) break;
                r29 = r29 + 1u;
                if ((u32)rd8(r3 + 0x104u) == 0u) break;
                r29 = r29 + 1u;
                if ((u32)rd8(r3 + 0x138u) == 0u) break;
                r29 = r29 + 1u;
                if ((u32)rd8(r3 + 0x16cu) == 0u) break;
                r3 = r3 + 0x1a0u;
                r29 = r29 + 1u;
                ctr = ctr - 1u;
                if (ctr == 0u) break;
            }
        }
        if (r29 != 0x10u) {
            r30 = r29 * 0x34u;
            if ((u32)rd8(r30 - 0x7fabf9e8u) == 0u) {
                wr8(r30 - 0x7fabf9e8u, 1u);
                a.r[0] = r30 - 0x7fabf9e7u;
                a.r[1] = param_1;
                a.r[2] = 6u;
                (void)tc_call(0x80004338u, &a);
                r3 = r30 - 0x7fabf9e8u;
                wr8(r3 + 0xau, 0u);
                wr8(r3 + 0xcu, 0u);
            }
            wr16(r30 - 0x7fabf9e0u, (u16)param_2);
            wr8(param_3, (u8)r29);
        }
    }
    return;
}
