#include "tc_rt.h"

s32 fn_802689ec(s32 param_1)
{
    u32 c0eq = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = 0x817fdfecu;
    a.r[1] = 0x817fdfe8u;
    r3 = tc_call(0x80266d88u, &a);
    r31 = r3;
    c0eq = r3 == 0u;
    if (c0eq) {
        if (c0eq) {
            if ((u32)param_1 == 0x90u) {
                a.r[0] = rd32(0x817fdfe8u);
                (void)tc_call(0x80269330u, &a);
            } else {
                a.r[0] = rd32(0x817fdfe8u);
                (void)tc_call(0x802692acu, &a);
            }
        }
        a.r[0] = rd32(0x817fdfe8u);
        a.r[1] = 0x817fdff0u;
        a.r[2] = 2u;
        a.r[3] = 3u;
        a.r[4] = 1u;
        r3 = tc_call(0x80268634u, &a);
        r31 = r3;
        if (r3 == 0u) {
            a.r[0] = rd32(0x817fdff0u);
            (void)tc_call(0x80266cf8u, &a);
        }
        a.r[0] = rd32(0x817fdfecu);
        (void)tc_call(0x80266cf8u, &a);
    }
    return (s32)r31;
}
