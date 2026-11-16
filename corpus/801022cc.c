#include "tc_rt.h"

u32 fn_801022cc(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    c0lt = param_1 < 1;
    r0 = 0u;
    if ((u32)param_1 == 1u) {
        a.r[0] = 0x40u;
        r3 = tc_call(0x8010057cu, &a);
        r31 = r3;
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x801005ecu, &a);
            wr32(r31 + 0x34u, 0x803760b0u);
        }
        wr32(r31, param_2);
        r0 = r31;
    } else if (!c0lt) {
        if (param_1 < 3) {
            a.r[0] = 0x40u;
            r3 = tc_call(0x8010057cu, &a);
            r31 = r3;
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x801005ecu, &a);
                wr32(r31 + 0x34u, 0x80360970u);
            }
            r0 = r31;
            wr32(r31, param_2);
        }
    } else if (param_1 >= 0) {
        a.r[0] = 0x40u;
        r3 = tc_call(0x8010057cu, &a);
        r31 = r3;
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x801005ecu, &a);
            wr32(r31 + 0x34u, 0x80370220u);
        }
        wr32(r31, param_2);
        r0 = r31;
    }
    return r0;
}
