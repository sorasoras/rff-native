#include "tc_rt.h"

void fn_80197674(u32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = rd32(param_1 + 0x10u);
    r31 = (r30 << 2u) & 0xfffffffcu;
    while ((s32)r30 < (s32)(rd32(param_1) + rd32(param_1 + 0x10u))) {
        a.r[0] = rd32(rd32(param_1 + 0x2cu) + r31);
        (void)tc_call(0x80161b8cu, &a);
        r31 = r31 + 4u;
        r30 = r30 + 1u;
    }
    return;
}
