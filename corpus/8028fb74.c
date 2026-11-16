#include "tc_rt.h"

void fn_8028fb74(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r27 = 0, r28 = 0;
    TcArgs a = {0};
    if (param_1 == 0u) {
        r27 = 0u;
        while ((r27 & 0xffu) < (u32)rd8(0x8053d641u)) {
            r28 = (r27 & 0xffu) * 0xbu;
            a.r[0] = r28 - 0x7fac2a0cu;
            a.r[1] = param_4;
            r3 = tc_call(0x8028d2d8u, &a);
            if (r3 == 0u) {
                wr8(r28 - 0x7fac2a06u, 1u);
                r7 = 1u;
                r6 = rd32(0x80570de0u);
                r4 = (u32)rd8(r6 + 1u);
                while ((r7 & 0xffu) <= r4) {
                    r5 = ((r7 << 2u) & 0x3fcu) - (r7 & 0xffu);
                    r3 = r6 + r5;
                    r0 = (u32)rd8(r3 + 1u);
                    if (param_3 == r0 || r0 == 0xffu) {
                        if (param_2 == (u32)rd8(r3)) {
                            r4 = (u32)rd8(r6 + r5 + 2u);
                            r3 = r28 - 0x7fac2a0cu;
                            if (r4 <= (u32)rd8(r3 + 7u)) {
                                return;
                            }
                            wr8(r3 + 7u, (u8)r4);
                            return;
                        }
                    }
                    r7 = r7 + 1u;
                }
                return;
            }
            r27 = r27 + 1u;
        }
    }
    return;
}
