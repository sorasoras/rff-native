#include "tc_rt.h"

void fn_800ef88c(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if ((u32)param_2 == 0x1eu || (u32)param_2 == 0x1fu) {
        r6 = (u32)rd8(((((u32)param_1 - 0x287u) << 4u) & 0xfffffff0u) - 0x7fb60e4au);
        r5 = ((u32)param_2 * 0x38u) - 0x7fb65020u;
        r3 = rd32(r5 + ((r6 << 2u) & 0xfffffffcu) + 0x24u);
        if (r3 != 0x2e8u) {
            wr8(0x817fdfebu, 1u);
            wr16(0x817fdfe8u, (u16)r3);
            wr8(0x817fdfeau, 1u);
            if ((u32)param_2 == 0x1eu || (u32)param_2 == 0x1fu) {
                r0 = (u32)rd8(r6 - 0x7fb66de8u);
            } else {
                r0 = (u32)rd8(r5 + 0x54u);
            }
            wr8(0x817fdfebu, (u8)r0);
            r31 = 0u;
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x1eu;
            r3 = tc_call(0x800a3168u, &a);
            if (r3 == 0u) {
                r31 = 1u;
            } else {
                a.r[0] = 0x817fdfe8u;
                r3 = tc_call(0x800824c0u, &a);
                if (r3 == 0u) {
                    r31 = 1u;
                }
            }
            if ((u32)param_3 != 0u && r31 != 0u) {
                a.r[0] = 0xbu;
                a.r[1] = 0x17u;
                a.r[2] = 0u;
                r3 = tc_call(0x801412f8u, &a);
                a.r[0] = r3;
                a.r[1] = 2u;
                a.r[2] = 0xffffffffu;
                a.r[3] = 0u;
                a.r[4] = 0x80u;
                a.r[5] = 0u;
                a.r[6] = 3u;
                (void)tc_call(0x80052ea0u, &a);
            }
        }
    }
    return;
}
