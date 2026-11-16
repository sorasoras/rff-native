#include "tc_rt.h"

u32 fn_8024cd54(u32 param_1)
{
    u32 r3 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r5 = rd32(0x8057194cu);
    r31 = r3;
    if (r5 == param_1) {
        wr32(0x8057193cu, param_1);
        wr32(0x80571938u, 1u);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = param_1;
    } else {
        if (rd32(param_1 + 4u) < rd32(r5 + 4u)) {
            wr32(0x8057193cu, param_1);
            wr32(0x80571938u, 1u);
            if (rd32(r5) == 1u) {
                r3 = tc_call(0x8022c2b0u, &a);
                wr16(0xcc00500au, (u16)(((u32)rd16(0xcc00500au) & 0xffffff57u) | 2u));
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
            }
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = param_1;
        } else {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = 0u;
        }
    }
    return r3;
}
