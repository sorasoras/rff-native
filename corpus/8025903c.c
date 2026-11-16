#include "tc_rt.h"

u32 fn_8025903c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r6 = 0, r26 = 0, r27 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r27 = param_2;
    r26 = param_1;
    a.r[0] = param_2;
    r3 = tc_call(0x802550d4u, &a);
    f1 = tc_lastf();
    r29 = r3;
    if (param_1 == 0u) {
        r30 = 0u;
    } else {
        r30 = 0u;
        while (r30 < param_3) {
            if ((u32)(s8)rd8(r27) == 0u) {
                wr16(r26, 0u);
                break;
            }
            r6 = rd32(0x8038ed00u);
            r3 = r26;
            r26 = r26 + 2u;
            a.r[0] = r3;
            a.r[1] = r27;
            a.r[2] = r29;
            a.r[3] = r6;
            a.f[0] = f1;
            r3 = tc_call(rd32(r6 + 0x20u), &a);
            f1 = tc_lastf();
            if ((s32)r3 <= 0) {
                r3 = 0xffffffffu;
                return r3;
            }
            r27 = r27 + r3;
            r29 = r29 - r3;
            r30 = r30 + 1u;
        }
    }
    r3 = r30;
    return r3;
}
