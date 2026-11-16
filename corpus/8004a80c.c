#include "tc_rt.h"

u32 fn_8004a80c(void)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    r5 = (u32)(s16)rd16(0x803c62acu);
    r4 = r5 + 1u;
    r3 = (u32)rd8(r5 - 0x7fcb0760u);
    wr16(0x803c62acu, (u16)r4);
    if ((u32)(s16)r4 >= 0x3fu) {
        wr16(0x803c62acu, 0u);
        return r3;
    }
    return r3;
}
