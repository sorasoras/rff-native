#include "tc_rt.h"

s32 fn_80157a50(s32 param_1)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r4 = (u32)param_1;
    r5 = 0u;
    ctr = 8u;
    do {
        if ((s32)rd32(r4 + 0x1cu) <= 0) {
            r31 = (u32)param_1 + ((r5 << 7u) & 0xffffff80u) + 0x14u;
            a.r[0] = (u32)param_1 + 8u;
            a.r[1] = r31;
            (void)tc_call(0x802de7f4u, &a);
            r3 = r31;
            return (s32)r3;
        }
        r4 = r4 + 0x80u;
        r5 = r5 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r3 = 0u;
    return (s32)r3;
}
