#include "tc_rt.h"

void fn_8028c2cc(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r29 = 0;
    TcArgs a = {0};
    (void)param_1;
    if ((u32)param_2 != 0u) {
        a.r[0] = (u32)param_2;
        (void)tc_call(0x8028a35cu, &a);
        (void)tc_call(0x8028b7a8u, &a);
        wr8(0x80539c08u, (u8)((u32)rd8(0x80539c08u) - 1u));
        (void)tc_call(0x8028b784u, &a);
    }
    if ((u32)rd8(0x80539c08u) < 5u && (u32)rd16(0x80539c04u) != 0u) {
        a.r[0] = 0x80539bfcu;
        r3 = tc_call(0x8028a9f8u, &a);
        wr32(0x817fdfe8u, r3);
        r29 = r3;
        a.r[0] = rd32(0x80539bc0u);
        a.r[1] = 0x20u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = (u32)rd16(r29 + 2u);
        a.r[6] = r29 + (u32)rd16(r3 + 4u) + 8u;
        a.r[7] = 0x8028c2ccu;
        a.s[0] = rd32(0x817fdfe8u);
        r3 = tc_call(0x802b8234u, &a);
        if ((s32)r3 < 0) {
            a.r[0] = 0x80539bfcu;
            a.r[1] = r29;
            (void)tc_call(0x8028a8b8u, &a);
        } else {
            (void)tc_call(0x8028b7a8u, &a);
            wr8(0x80539c08u, (u8)((u32)rd8(0x80539c08u) + 1u));
            (void)tc_call(0x8028b784u, &a);
        }
    }
    return;
}
