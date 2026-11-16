#include "tc_rt.h"

void fn_8028bf50(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = (u32)rd8(0x80539be9u);
    wr8(0x80539bebu, 0u);
    if (r0 != 2u) {
        a.r[0] = param_2;
        (void)tc_call(0x8028a35cu, &a);
        a.r[0] = (u32)rd8(0x80539bdcu);
        (void)tc_call(0x8028aed8u, &a);
        wr8(0x80539bdcu, 0xffu);
    } else {
        if (param_2 != 0u) {
            if ((s32)param_1 <= 0) {
                a.r[0] = param_2;
                (void)tc_call(0x8028a35cu, &a);
            } else {
                a.r[0] = 2u;
                r3 = tc_call(0x8028a274u, &a);
                if (r3 == 0u) {
                    a.r[0] = param_2;
                    (void)tc_call(0x8028a35cu, &a);
                } else {
                    r0 = (u32)rd16(param_2 + 4u);
                    wr16(param_2 + 2u, (u16)param_1);
                    r0 = (param_1 & 0xffffu) + r0 + 8u;
                    wr16(param_2, 0x1000u);
                    a.r[0] = r3;
                    a.r[1] = param_2;
                    a.r[2] = (r0 & 0xfffffffcu) + 4u;
                    (void)tc_call(0x80004338u, &a);
                    a.r[4] = 0x8028cb5cu;
                    a.r[5] = 0x8053ac20u;
                    (void)tc_call(0x80228118u, &a);
                    a.r[0] = param_2;
                    (void)tc_call(0x8028a35cu, &a);
                }
            }
        }
        (void)tc_call(0x8028c200u, &a);
    }
    return;
}
