#include "tc_rt.h"

void fn_8024520c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    r3 = (u32)param_1;
    r4 = rd32(0x80571860u) - 0x24u;
    if ((s32)r4 < 0) {
        r4 = r4 + rd32(0x80571864u);
    }
    r4 = r4 - rd32(0x8057185cu);
    if ((s32)r4 < 0) {
        r4 = r4 + rd32(0x80571864u);
    }
    if (param_1 > (s32)r4) {
        r3 = r4;
    }
    r4 = rd32(0x80571864u);
    r0 = rd32(0x8057185cu) + r3;
    wr32(0x8057185cu, r0);
    if ((s32)r0 >= (s32)r4) {
        r0 = r0 - r4;
        wr32(0x8057185cu, r0);
        return;
    }
    return;
}
