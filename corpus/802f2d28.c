#include "tc_rt.h"

void fn_802f2d28(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    if (rd32(param_1) != 0u) {
        r0 = rd32(param_1 + 0x14u);
        c0lt = (s32)r0 < 2;
        if (r0 == 2u) {
            a.r[0] = 0x817fdfc8u;
            a.r[1] = 0u;
            a.r[2] = 0x20u;
            (void)tc_call(0x8000443cu, &a);
            wr16(0x817fdfe8u, 0x100u);
            wr16(0x817fdfeau, 0u);
            wr16(0x817fdfecu, 0u);
            wr16(0x817fdfeeu, 0u);
        } else if (!c0lt) {
            if ((s32)r0 < 4) {
                a.r[0] = 0x817fdfc8u;
                a.r[1] = (u32)param_2;
                a.r[2] = 0x20u;
                (void)tc_call(0x80004338u, &a);
                r4 = (u32)rd16((u32)param_2 + 0x22u);
                r3 = (u32)rd16((u32)param_2 + 0x24u);
                r0 = (u32)rd16((u32)param_2 + 0x26u);
                wr16(0x817fdfe8u, rd16((u32)param_2 + 0x20u));
                wr16(0x817fdfeau, (u16)r4);
                wr16(0x817fdfecu, (u16)r3);
                wr16(0x817fdfeeu, (u16)r0);
            }
        } else if ((s32)r0 >= 1) {
            a.r[0] = 0x817fdfc8u;
            a.r[1] = 0u;
            a.r[2] = 0x20u;
            (void)tc_call(0x8000443cu, &a);
            wr16(0x817fdfe8u, 0x800u);
            wr16(0x817fdfeau, 0u);
            wr16(0x817fdfecu, 0u);
            wr16(0x817fdfeeu, 0u);
        }
        r3 = tc_call(0x8022c2b0u, &a);
        r4 = rd32(param_1);
        r30 = r3;
        if (r4 != 0u) {
            a.r[0] = r4 + 0xa6u;
            a.r[1] = 0x817fdfc8u;
            a.r[2] = 0x28u;
            (void)tc_call(0x80004338u, &a);
            wr32(param_1 + 4u, rd32(param_1 + 4u) | 0x8000u);
            a.r[0] = r30;
            (void)tc_call(0x8022c2d8u, &a);
        } else {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
        }
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
