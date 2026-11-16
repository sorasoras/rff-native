#include "tc_rt.h"

void fn_8021a544(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    if ((u32)rd8(param_1 + 1u) == 0u && rd32(param_1 + 0x6cu) == 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x8021a2f8u, &a);
        r4 = tc_lastr4();
        wr32(0x817fdfe8u, r3);
        if (r3 == 0xffffffffu) {
            wr8(param_1 + 1u, 1u);
            wr32(param_1 + 0x6cu, 4u);
        } else {
            if (param_2 >= (s32)r3 && rd32(param_1 + 0x6cu) == 0u) {
                r3 = param_1 + ((r4 << 2u) & 0xfffffffcu);
                r5 = rd32(r3 + 0x58u);
                r3 = rd32(r3 + 0x14u);
                if (r5 != 0u) {
                    r0 = rd32(r5);
                } else {
                    r0 = 0u;
                }
                if ((s32)r3 < (s32)r0) {
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = rd32(0x817fdfe8u);
                    a.r[3] = param_3;
                    (void)tc_call(0x8021acc8u, &a);
                } else {
                    wr8(param_1 + r4 + 2u, 1u);
                }
            }
        }
    }
    if ((u32)rd8(param_1) != 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x802558bcu, &a);
    }
    return;
}
