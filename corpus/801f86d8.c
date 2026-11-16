#include "tc_rt.h"

void fn_801f86d8(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x801f888cu, &a);
    a.r[0] = r3;
    (void)tc_call(0x800d3a7cu, &a);
    r3 = tc_call(0x801f888cu, &a);
    r30 = r3;
    a.r[0] = r3;
    r3 = tc_call(0x800d56bcu, &a);
    if (r3 == 0u) {
        r3 = tc_call(0x801f888cu, &a);
        a.r[0] = r3;
        r3 = tc_call(0x800d50c4u, &a);
        if (r3 == 0u) {
            return;
        }
        r3 = tc_call(0x801f888cu, &a);
        a.r[0] = r3;
        (void)tc_call(0x800d39e0u, &a);
        wr32((u32)param_1 + 0x744u, 1u);
    } else {
        a.r[0] = r30;
        r3 = tc_call(0x800d57b4u, &a);
        r31 = r3;
        a.r[0] = r30;
        r3 = tc_call(0x800d57a4u, &a);
        if (r3 != 0u) {
            if ((s32)r31 >= 0) {
                wr32((u32)param_1 + 0x73cu, r31);
            } else {
                wr32((u32)param_1 + 0x73cu, rd32((u32)param_1 + 0x740u));
            }
            r3 = tc_call(0x801f888cu, &a);
            a.r[0] = r3;
            (void)tc_call(0x800d39e0u, &a);
            wr32((u32)param_1 + 0x744u, 1u);
        }
    }
    return;
}
