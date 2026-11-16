#include "tc_rt.h"

u32 fn_801eb774(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = 0x40u;
    r3 = tc_call(0x8010057cu, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x801005ecu, &a);
        wr32(r31 + 0x34u, 0x80378e98u);
    }
    wr32(r31, param_2);
    return r31;
}
