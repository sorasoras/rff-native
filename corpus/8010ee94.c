#include "tc_rt.h"

u32 fn_8010ee94(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8010ee30u, &a);
    r0 = rd32(r3 + 0xcu);
    r3 = rd32(r3 + 8u);
    ctr = r0;
    if ((s32)r0 > 0) {
        do {
            if ((u32)(s8)rd8(r3) == (u32)param_1) {
                return r3;
            }
            r3 = r3 + 7u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    r3 = 0u;
    return r3;
}
