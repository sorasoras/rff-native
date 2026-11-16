#include "tc_rt.h"

u32 fn_8022b704(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r30 = 0;
    TcArgs a = {0};
    r6 = param_4;
    c0lt = param_1 < 1;
    r7 = 0u;
    r30 = param_2;
    if ((u32)param_1 == 1u) {
        r7 = (u32)rd8(param_2);
        r6 = rd32(0x805714d0u);
        if (r7 != 0u) {
            r30 = param_2 + 1u;
            r0 = 0u;
            if ((r7 >= 0x81u && r7 <= 0x9fu) || (r7 >= 0xe0u && r7 <= 0xfcu)) {
                r0 = 1u;
            }
            if (r0 != 0u) {
                r4 = (u32)rd8(r30);
                r0 = 0u;
                if (r4 >= 0x40u && r4 <= 0xfcu && r4 != 0x7fu) {
                    r0 = 1u;
                }
                if (r0 != 0u) {
                    r0 = ((u32)rd8(r30) & 0xff0000ffu) | ((r7 << 8u) & 0xffff00u);
                    r30 = r30 + 1u;
                    r7 = r0 & 0xffffu;
                }
            }
        }
    } else if (c0lt && param_1 >= 0) {
        r7 = (u32)rd8(param_2);
        r6 = rd32(0x805714d4u);
        if (r7 != 0u) {
            r30 = param_2 + 1u;
        }
    }
    wr32(param_3, r6);
    a.r[0] = (u32)param_1;
    a.r[1] = r7;
    r3 = tc_call(0x8022af30u, &a);
    wr32(param_4, r3);
    return r30;
}
