#include "tc_rt.h"

s32 fn_8026a1b8(u32 param_1, s32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r25 = 0, r30 = 0;
    TcArgs a = {0};
    (void)param_4;
    r4 = rd32(0x8038f460u);
    r8 = rd32(0x8038f454u);
    r6 = rd32(0x8038f458u);
    wr32(0x817fdfd0u, rd32(0x8038f45cu));
    wr32(0x817fdfd4u, r4);
    wr8(0x8038f461u, 0u);
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x8026ad5cu, &a);
    r25 = r3;
    a.r[0] = r3;
    a.r[1] = rd32(param_3);
    a.r[2] = (ppc_cntlzw((u32)param_5) >> 5u) & 0x7ffffffu;
    r3 = tc_call(0x8026a304u, &a);
    r30 = r3;
    if (r3 != 0u) {
        wr32(param_3, 0u);
    } else {
        r3 = tc_call(0x80268b90u, &a);
        r7 = r3 | (rd32(0x805029b0u) & 0x10u);
        if ((u32)param_5 != 0u) {
            a.r[0] = param_1;
            a.r[1] = r25;
            a.r[2] = rd32(param_3);
            a.r[3] = r3;
            a.r[4] = r7;
            (void)tc_call(0x80268ba0u, &a);
        } else {
            a.r[0] = r25;
            a.r[1] = param_1;
            a.r[2] = rd32(param_3);
            a.r[3] = r7;
            a.r[4] = r3;
            (void)tc_call(0x80268ba0u, &a);
            a.r[0] = r25;
            a.r[1] = rd32(param_3);
            (void)tc_call(0x80268a84u, &a);
            if ((u32)param_2 != r25) {
                a.r[0] = (u32)param_2;
                a.r[1] = rd32(param_3);
                (void)tc_call(0x80268a84u, &a);
            }
        }
    }
    if ((u32)rd8(0x8038f461u) != 0u) {
        r30 = 0x702u;
        wr32(param_3, 0u);
    }
    r4 = rd32(0x817fdfd0u);
    r0 = rd32(0x817fdfd4u);
    wr32(0x8038f454u, r8);
    wr32(0x8038f458u, r6);
    wr32(0x8038f45cu, r4);
    wr32(0x8038f460u, r0);
    return (s32)r30;
}
