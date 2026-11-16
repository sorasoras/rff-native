#include "tc_rt.h"

u32 fn_8004f63c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r27 = 0, r28 = 0;
    TcArgs a = {0};
    r27 = ((u32)param_2 + 0x1fu) & 0xffffffe0u;
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8004f61cu, &a);
    if (r3 != 0u) {
        r28 = ((u32)param_1 << 2u) & 0xfffffffcu;
        r4 = rd32(r28 - 0x7fc395d0u);
        if (r4 != 0u) {
            if (rd32(0x8057108cu) != (r4 + rd32(r28 - 0x7fc395b0u))) {
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8004f73cu, &a);
            } else {
                wr32(0x8057108cu, r4);
                a.r[0] = ((u32)param_1 * 0x2cu) - 0x7fc39730u;
                a.r[1] = r4;
                a.r[2] = r27;
                (void)tc_call(0x80305824u, &a);
                r3 = rd32(0x8057108cu);
                wr32(r28 - 0x7fc395b0u, r27);
                wr32(r28 - 0x7fc395d0u, r3);
                wr32(0x8057108cu, r3 + r27);
            }
        } else {
            r3 = tc_call(0x8004f93cu, &a);
            if ((s32)r3 >= (s32)rd32(0x80571088u)) {
                r3 = 0u;
                return r3;
            }
            a.r[0] = ((u32)param_1 * 0x2cu) - 0x7fc39730u;
            a.r[1] = rd32(0x8057108cu);
            a.r[2] = r27;
            (void)tc_call(0x80305824u, &a);
            r4 = rd32(0x8057108cu);
            wr32(r28 - 0x7fc395b0u, r27);
            wr32(r28 - 0x7fc395d0u, r4);
            wr32(0x8057108cu, r4 + r27);
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
