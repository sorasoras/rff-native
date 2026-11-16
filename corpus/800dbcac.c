#include "tc_rt.h"

void fn_800dbcac(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0xcu;
    r30 = (u32)param_1;
    r29 = 0u;
    for (;;) {
        if (rd32(r30 + 0x14u) != 0u) {
            a.r[0] = r31;
            r3 = tc_call(0x8007b09cu, &a);
            f1 = tc_lastf();
            a.r[0] = r3;
            a.r[1] = 1u;
            r3 = tc_call(0x800dae3cu, &a);
            f1 = tc_lastf();
        } else {
            r29 = r29 + 1u;
            r30 = r30 + 0x1cu;
            r31 = r31 + 0x1cu;
            if (r29 >= 2u) break;
        }
    }
    return;
}
