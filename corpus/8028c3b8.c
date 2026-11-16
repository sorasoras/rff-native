#include "tc_rt.h"

void fn_8028c3b8(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r29 = 0;
    TcArgs a = {0};
    (void)param_1;
    if ((u32)param_2 != 0u) {
        a.r[0] = (u32)param_2;
        (void)tc_call(0x8028a35cu, &a);
        (void)tc_call(0x8028b7a8u, &a);
        wr8(0x80539bf8u, (u8)((u32)rd8(0x80539bf8u) - 1u));
        (void)tc_call(0x8028b784u, &a);
    }
    if ((u32)rd8(0x80539bf8u) < 5u && (u32)rd16(0x80539bf4u) != 0u) {
        a.r[0] = 0x80539becu;
        r3 = tc_call(0x8028a9f8u, &a);
        r29 = r3;
        a.r[0] = rd32(0x80539bc0u);
        a.r[1] = (u32)rd8(0x80539bd0u);
        a.r[2] = (u32)rd16(r29 + 2u);
        a.r[3] = r29 + (u32)rd16(r3 + 4u) + 8u;
        a.r[4] = 0x8028c3b8u;
        a.r[5] = r29;
        r3 = tc_call(0x802b7c1cu, &a);
        if ((s32)r3 < 0) {
            a.r[0] = 0x80539becu;
            a.r[1] = r29;
            (void)tc_call(0x8028a8b8u, &a);
        } else {
            (void)tc_call(0x8028b7a8u, &a);
            wr8(0x80539bf8u, (u8)((u32)rd8(0x80539bf8u) + 1u));
            (void)tc_call(0x8028b784u, &a);
        }
    }
    return;
}
