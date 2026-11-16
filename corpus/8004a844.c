#include "tc_rt.h"

u32 fn_8004a844(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    r5 = (u32)(s16)rd16(0x803c62acu);
    r0 = r5 + (u32)param_1;
    r3 = (u32)rd8(r5 - 0x7fcb0760u);
    r4 = (u32)(s16)r0;
    wr16(0x803c62acu, (u16)r0);
    if (r4 >= 0x3fu) {
        wr16(0x803c62acu, (u16)(r4 - 0x3fu));
        return r3;
    }
    return r3;
}
