#include "tc_rt.h"

void fn_801d0178(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x801cfdc0u, &a);
    if (r3 != 0xbu) {
        return;
    }
    a.r[0] = param_1;
    r3 = tc_call(0x801cff2cu, &a);
    if (r3 != 0xbu) {
        return;
    }
    a.r[0] = param_1;
    r3 = tc_call(0x801cff90u, &a);
    if (r3 != 0xbu) {
        return;
    }
    a.r[0] = param_1;
    r3 = tc_call(0x801cfedcu, &a);
    if (r3 != 0xbu) {
        return;
    }
    a.r[0] = param_1;
    r3 = tc_call(0x801cfe0cu, &a);
    if (r3 != 0xbu) {
        return;
    }
    a.r[0] = param_1;
    (void)tc_call(0x801cfe5cu, &a);
    return;
}
