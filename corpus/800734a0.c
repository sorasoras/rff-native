#include "tc_rt.h"

void fn_800734a0(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0xb7u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8007dad4u, &a);
        a.r[0] = 0x80469958u;
        a.r[1] = rd32(r3 + 8u);
        a.r[2] = 0u;
        (void)tc_call(0x80057c10u, &a);
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8007dad4u, &a);
        a.r[0] = 0x8046a200u;
        a.r[1] = rd32(r3 + 0xcu);
        a.r[2] = 0u;
        (void)tc_call(0x80058f78u, &a);
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8007dad4u, &a);
        r3 = rd32(r3 + 0xcu);
        r3 = r3 * 0x14u;
        r3 = r3 - 0x7fb95e00u;
        if (rd32(r3 + 0xcu) == 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8007dad4u, &a);
            r3 = rd32(r3 + 4u);
            a.r[0] = r3;
            (void)tc_call(0x80073544u, &a);
        }
    }
    return;
}
