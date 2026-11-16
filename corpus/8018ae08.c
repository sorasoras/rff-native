#include "tc_rt.h"

s32 fn_8018ae08(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0x28u;
    r30 = 0xau;
    do {
        r3 = rd32(r31 + 0x3fcu);
        if ((u32)((s32)rd32(r3 + 0x80u) >> 31) != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x8020b948u, &a);
            if (r3 != 0u) {
                r3 = r30 - 0xau;
                return (s32)r3;
            }
        }
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r30 < 23);
    r3 = 0xffffffffu;
    return (s32)r3;
}
