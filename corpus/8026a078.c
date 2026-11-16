#include "tc_rt.h"

u32 fn_8026a078(s32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 r3 = 0, r4 = 0, r7 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    TcArgs a = {0};
    if (param_2 > 0x24u) {
        r3 = 0x701u;
    } else {
        r9 = rd32(0x8038f460u);
        r12 = param_2 - (u32)param_1 + 1u;
        r11 = rd32(0x8038f454u);
        r10 = rd32(0x8038f458u);
        r7 = rd32(0x8038f45cu);
        wr8(0x8038f461u, 0u);
        r4 = (((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fafd848u;
        wr32(param_4, (r12 << 2u) & 0xfffffffcu);
        if ((u32)param_5 != 0u) {
            a.r[0] = param_3;
            a.r[1] = r4;
            a.r[2] = r12;
            r3 = tc_call(0x802668f8u, &a);
        } else {
            a.r[0] = param_3;
            a.r[1] = r4;
            a.r[2] = r12;
            r3 = tc_call(0x80266688u, &a);
        }
        if ((u32)rd8(0x8038f461u) != 0u) {
            r3 = 0x702u;
            wr32(param_4, 0u);
        }
        wr32(0x8038f454u, r11);
        wr32(0x8038f458u, r10);
        wr32(0x8038f45cu, r7);
        wr32(0x8038f460u, r9);
    }
    return r3;
}
