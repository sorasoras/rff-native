#include "tc_rt.h"

u32 fn_802699fc(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r8 = 0, r9 = 0, r10 = 0;
    TcArgs a = {0};
    r3 = param_1;
    if (param_2 > 0x60u) {
        r3 = 0x701u;
    } else {
        r6 = rd32(0x8038f460u);
        r10 = rd32(0x8038f454u);
        r9 = rd32(0x8038f458u);
        r8 = rd32(0x8038f45cu);
        wr8(0x8038f461u, 0u);
        wr32(0x817fdff4u, r6);
        wr32(param_4, 0u);
        if (param_1 <= param_2) {
            r0 = param_2 - param_1 + 1u;
            r6 = (r0 << 2u) & 0xfffffffcu;
            wr32(param_4, rd32(param_4) + r6);
            r4 = ((param_1 << 2u) & 0xfffffffcu) - 0x7fafd6a0u;
            if ((u32)param_5 != 0u) {
                a.r[0] = param_3;
                a.r[1] = r4;
                a.r[2] = r0;
                r3 = tc_call(0x802668f8u, &a);
            } else {
                if (r4 <= 0x805029a4u) {
                    r6 = r6 - 4u;
                    r6 = r4 + r6;
                    if (r6 >= 0x805029a0u) {
                        wr8(0x8038f448u, 1u);
                    }
                }
                if (r4 <= 0x80502a30u && (r4 + (((r0 << 2u) & 0xfffffffcu) - 4u)) >= 0x80502a30u) {
                    wr8(0x8038f449u, 1u);
                }
                a.r[0] = param_3;
                a.r[1] = r4;
                a.r[2] = r0;
                r3 = tc_call(0x80266688u, &a);
            }
        }
        if ((u32)rd8(0x8038f461u) != 0u) {
            r3 = 0x702u;
            wr32(param_4, 0u);
        }
        r0 = rd32(0x817fdff4u);
        wr32(0x8038f454u, r10);
        wr32(0x8038f458u, r9);
        wr32(0x8038f45cu, r8);
        wr32(0x8038f460u, r0);
    }
    return r3;
}
