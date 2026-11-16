#include "tc_rt.h"

s32 fn_8021a76c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x58u) != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        r3 = tc_call(0x8021a650u, &a);
        r31 = (u32)(s16)rd16(r3 + 4u);
        if (r31 != 0xffffffffu) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x80218678u, &a);
            r3 = rd32(r3 + 0x3e4u);
            r3 = r3 + ((r31 << 4u) & 0xfffffff0u);
            r3 = (u32)(s16)rd16(r3 + 0xcu);
            return (s32)r3;
        }
        r3 = 0xffffffffu;
    } else {
        r3 = 0xffffffffu;
    }
    return (s32)r3;
}
