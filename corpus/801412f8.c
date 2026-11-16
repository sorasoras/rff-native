#include "tc_rt.h"

u32 fn_801412f8(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801412bcu, &a);
    if (r3 == 0u) {
        r3 = 0x80364370u;
    } else {
        r31 = rd32(0x804beb34u) + (((u32)param_1 << 5u) & 0xffffffe0u);
        if (param_2 >= rd32(r31 + 4u)) {
            r3 = rd32(0x80570820u);
        } else {
            if (param_3 != 0u) {
                wr32(param_3, 0u);
                a.r[0] = rd32(rd32(r31 + 0x18u) + ((param_2 << 2u) & 0xfffffffcu));
                r3 = tc_call(0x8025e7a4u, &a);
                wr32(param_3, r3);
            }
            r3 = rd32(rd32(r31 + 0x18u) + ((param_2 << 2u) & 0xfffffffcu));
        }
    }
    return r3;
}
