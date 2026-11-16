#include "tc_rt.h"

s32 fn_8024511c(void)
{
    u32 r3 = 0;
    r3 = rd32(0x80571860u) - 0x24u;
    if ((s32)r3 < 0) {
        r3 = r3 + rd32(0x80571864u);
    }
    r3 = r3 - rd32(0x8057185cu);
    if ((s32)r3 < 0) {
        r3 = r3 + rd32(0x80571864u);
        return (s32)r3;
    }
    return (s32)r3;
}
