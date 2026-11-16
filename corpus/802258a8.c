#include "tc_rt.h"

void fn_802258a8(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022e1f4u, &a);
    if (((r3 >> 0x1fu) & 1u) != 0u) {
        r0 = rd32(0x804dfe4cu);
        if (r0 != 0u) {
            r0 = (r0 & 0x30000000u) - 0x10000000u;
            if (r0 == 0u) {
                r3 = tc_call(0x802271d0u, &a);
                if (r3 >= rd32(0x804dfe4cu)) {
                    return;
                }
                r3 = tc_call(0x802271b8u, &a);
                if (r3 > rd32(0x804dfe4cu)) {
                    r3 = tc_call(0x802271d0u, &a);
                    r31 = rd32(0x804dfe4cu) - r3;
                    r3 = tc_call(0x802271d0u, &a);
                    if (r31 <= 0x40000u) {
                        r30 = r3;
                    } else {
                        r30 = r3 + (r31 - 0x40000u);
                    }
                    a.r[0] = r3;
                    a.r[1] = r31;
                    (void)tc_call(0x802277c4u, &a);
                    a.r[0] = r30;
                    a.r[1] = 0x40000u;
                    (void)tc_call(0x80227738u, &a);
                    r31 = rd32(0x804dfe50u);
                    r3 = tc_call(0x802271b8u, &a);
                    if (r3 <= r31) {
                        return;
                    }
                    r3 = tc_call(0x802271b8u, &a);
                    r4 = r3 - r31;
                    if (r4 <= 0x40000u) {
                        r30 = r31;
                    } else {
                        r30 = r31 + (r4 - 0x40000u);
                    }
                    a.r[0] = r31;
                    a.r[1] = r4;
                    (void)tc_call(0x802277c4u, &a);
                    a.r[0] = r30;
                    a.r[1] = 0x40000u;
                    (void)tc_call(0x80227738u, &a);
                    return;
                }
                r3 = tc_call(0x802271b8u, &a);
                r31 = r3;
                r3 = tc_call(0x802271d0u, &a);
                r31 = r31 - r3;
                r3 = tc_call(0x802271d0u, &a);
                if (r31 <= 0x40000u) {
                    r30 = r3;
                } else {
                    r30 = r3 + (r31 - 0x40000u);
                }
                a.r[0] = r3;
                a.r[1] = r31;
                (void)tc_call(0x802277c4u, &a);
                a.r[0] = r30;
                a.r[1] = 0x40000u;
                (void)tc_call(0x80227738u, &a);
                return;
            }
        }
        r3 = tc_call(0x802271b8u, &a);
        r31 = r3;
        r3 = tc_call(0x802271d0u, &a);
        r31 = r31 - r3;
        r3 = tc_call(0x802271d0u, &a);
        if (r31 <= 0x40000u) {
            r30 = r3;
        } else {
            r30 = r3 + (r31 - 0x40000u);
        }
        a.r[0] = r3;
        a.r[1] = r31;
        (void)tc_call(0x802277c4u, &a);
        a.r[0] = r30;
        a.r[1] = 0x40000u;
        (void)tc_call(0x80227738u, &a);
    } else {
        r3 = tc_call(0x802271b8u, &a);
        r31 = r3;
        r3 = tc_call(0x802271d0u, &a);
        r31 = r31 - r3;
        r3 = tc_call(0x802271d0u, &a);
        if (r31 <= 0x40000u) {
            r30 = r3;
        } else {
            r30 = r3 + (r31 - 0x40000u);
        }
        a.r[0] = r3;
        a.r[1] = r31;
        (void)tc_call(0x802277c4u, &a);
        a.r[0] = r30;
        a.r[1] = 0x40000u;
        (void)tc_call(0x80227738u, &a);
    }
    return;
}
