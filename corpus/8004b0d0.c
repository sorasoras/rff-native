#include "tc_rt.h"

void fn_8004b0d0(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r6 = (u32)rd8(0x803c6241u);
    r5 = (u32)rd8(0x803c6242u);
    r4 = (u32)rd8(0x803c6243u);
    r3 = (u32)rd8(0x803c6244u);
    r0 = (u32)rd8(0x803c6245u);
    wr8(0x803c6246u, rd8(0x803c6240u));
    wr8(0x803c6247u, (u8)r6);
    wr8(0x803c6248u, (u8)r5);
    wr8(0x803c6249u, (u8)r4);
    wr8(0x803c624au, (u8)r3);
    wr8(0x803c624bu, (u8)r0);
    r3 = tc_call(0x800450f4u, &a);
    if (r3 != 0u) {
        r0 = rd32(r3 + 0x194u);
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            a.r[0] = r3;
            (void)tc_call(0x8004a9f4u, &a);
        } else if (!c0lt) {
            if ((s32)r0 < 3) {
                a.r[0] = r3;
                (void)tc_call(0x8004abd8u, &a);
            }
        } else if ((s32)r0 >= 0) {
            a.r[0] = r3;
            (void)tc_call(0x8004a914u, &a);
        }
    }
    r3 = tc_call(0x800c6774u, &a);
    r30 = r3;
    if (r3 != 0u) {
        r3 = rd32(r3 + 0x164u);
        a.r[0] = r3;
        r3 = tc_call(0x80049874u, &a);
        r29 = r3;
        a.r[0] = r30 + 0x134u;
        r3 = tc_call(0x8004ae8cu, &a);
        a.r[0] = r3;
        a.r[1] = r29;
        a.r[2] = rd32(r30 + 0x168u);
        a.r[3] = 4u;
        (void)tc_call(0x8004aed8u, &a);
    }
    r3 = tc_call(0x80049ff8u, &a);
    if (r3 != 0u) {
        wr8(0x803c6248u, (u8)((u32)rd8(0x803c6248u) + 1u));
    }
    (void)tc_call(0x8004a74cu, &a);
    (void)tc_call(0x8004a3dcu, &a);
    a.r[0] = (u32)rd8(0x803c6242u);
    (void)tc_call(0x8025016cu, &a);
    a.r[0] = (u32)rd8(0x803c6244u);
    (void)tc_call(0x802539bcu, &a);
    a.r[0] = (u32)rd8(0x803c6245u);
    (void)tc_call(0x8025324cu, &a);
    wr8(0x803c6240u, 0u);
    wr8(0x803c6241u, 0u);
    wr8(0x803c6242u, 0u);
    wr8(0x803c6243u, 0u);
    wr8(0x803c6244u, 0u);
    wr8(0x803c6245u, 0u);
    return;
}
