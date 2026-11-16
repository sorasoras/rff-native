#include "tc_rt.h"

u32 fn_80105014(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    c0lt = param_1 < 1;
    r0 = 0u;
    if ((u32)param_1 != 1u) {
        if (!c0lt) {
            return r0;
        }
        if (param_1 < 0) {
            return r0;
        }
        a.r[0] = 0x40u;
        r3 = tc_call(0x8010057cu, &a);
        r31 = r3;
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x801005ecu, &a);
            wr32(r31 + 0x34u, 0x803611a0u);
        }
        wr32(r31, param_2);
        r0 = r31;
    } else {
        a.r[0] = 0x40u;
        r3 = tc_call(0x8010057cu, &a);
        r31 = r3;
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x801005ecu, &a);
            wr32(r31 + 0x34u, 0x80360d68u);
        }
        r0 = r31;
        wr32(r31, param_2);
    }
    return r0;
}
