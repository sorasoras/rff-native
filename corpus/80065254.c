#include "tc_rt.h"

void fn_80065254(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xb8u) != 2u) {
        a.r[0] = rd32((u32)param_1 + 0xacu);
        r3 = tc_call(0x8007dad4u, &a);
        if (rd32(r3 + 4u) != 0u) {
            a.r[0] = rd32((u32)param_1 + 0xacu);
            (void)tc_call(0x800734a0u, &a);
        } else {
            a.r[0] = rd32((u32)param_1 + 0xacu);
            r3 = tc_call(0x8007dad4u, &a);
            a.r[0] = 0x80469958u;
            a.r[1] = rd32(r3 + 8u);
            a.r[2] = 0u;
            (void)tc_call(0x80057c10u, &a);
            a.r[0] = rd32((u32)param_1 + 0xacu);
            r3 = tc_call(0x8007dad4u, &a);
            a.r[0] = 0x8046a200u;
            a.r[1] = rd32(r3 + 0xcu);
            a.r[2] = 0u;
            (void)tc_call(0x80058f78u, &a);
        }
    }
    return;
}
