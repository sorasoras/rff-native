#include "tc_rt.h"

void fn_8029db78(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1;
    if ((u32)param_1 != 0u && (u32)rd16(0x8053d49cu) != 0u) {
        a.r[0] = 0x8053d494u;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x8028a77cu, &a);
        r31 = 0u;
    }
    if ((u32)rd16(0x8053d4b0u) == 0u && (u32)rd8(0x8053dfa6u) == 0u) {
        wr16(0x8053d4b0u, (u16)((u32)rd16(0x8053d49cu) + 1u));
    }
    while ((u32)rd16(0x8053d4b0u) != 0u) {
        if (r31 == 0u) {
            a.r[0] = 0x8053d494u;
            r3 = tc_call(0x8028a9f8u, &a);
            r31 = r3;
        }
        if (r31 == 0u) break;
        r3 = r31 + (u32)rd16(r31 + 4u);
        r0 = (u32)rd8(r3 + 9u);
        r3 = (u32)rd8(r3 + 8u);
        r0 = (r0 << 8u) & 0xffffff00u;
        r0 = r3 + r0;
        r0 = r0 & 0xffffu;
        if (r0 != 0xc03u && r0 != 0xc35u) {
            a.r[0] = 2u;
            r3 = tc_call(0x8028a274u, &a);
            r29 = r3;
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = r31;
                a.r[2] = 8u;
                (void)tc_call(0x80004338u, &a);
                a.r[0] = r29 + (u32)rd16(r29 + 4u) + 8u;
                a.r[1] = r31 + (u32)rd16(r31 + 4u) + 8u;
                a.r[2] = (u32)rd16(r31 + 2u);
                (void)tc_call(0x80004338u, &a);
                a.r[0] = 0x8053d4a0u;
                a.r[1] = r29;
                (void)tc_call(0x8028a77cu, &a);
                a.r[0] = 0x8053d47cu;
                a.r[1] = 0x3cu;
                a.r[2] = 8u;
                (void)tc_call(0x8028d220u, &a);
            }
        }
        wr16(0x8053d4b0u, (u16)((u32)rd16(0x8053d4b0u) - 1u));
        a.r[0] = r31;
        a.r[1] = 0x2000u;
        (void)tc_call(0x8028cab4u, &a);
        r31 = 0u;
    }
    if (r31 != 0u) {
        a.r[0] = 0x8053d494u;
        a.r[1] = r31;
        (void)tc_call(0x8028a77cu, &a);
    }
    return;
}
