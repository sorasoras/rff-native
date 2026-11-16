#include "tc_rt.h"

u32 fn_8023f7dc(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1;
    r31 = rd32(0x80571740u);
    if ((u32)param_1 == 1u) {
        r3 = tc_call(0x8027518cu, &a);
        if ((r3 & 0xffu) == 0u) {
            r30 = 0u;
        }
    }
    wr32(0x80571740u, r30);
    return r31;
}
