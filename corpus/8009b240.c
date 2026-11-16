#include "tc_rt.h"

u32 fn_8009b240(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((rd32((u32)param_1 + 0x50u) & 1u) != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x54u);
        a.r[1] = rd32((u32)param_1 + 0x48u);
        a.f[0] = 0.0;
        r3 = tc_call(rd32((u32)param_1 + 0x18u), &a);
        f1 = tc_lastf();
        if ((u32)(s8)r3 != 0u) {
            a.r[0] = rd32((u32)param_1 + 0x54u);
            a.r[1] = rd32((u32)param_1 + 0x48u);
            a.f[0] = f1;
            (void)tc_call(rd32((u32)param_1 + 0x1cu), &a);
            r0 = rd32((u32)param_1 + 0x50u);
            wr32((u32)param_1 + 0x54u, 0u);
            r0 = r0 & 0xfffffffeu;
            r4 = rd32((u32)param_1 + 0x5cu);
            wr32((u32)param_1 + 0x50u, r0);
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            r3 = tc_call(0x8009ad30u, &a);
            if ((u32)(s8)r3 != 0u) {
                a.r[0] = (u32)param_1;
                a.r[1] = rd32((u32)param_1 + 0x5cu);
                (void)tc_call(0x8009c068u, &a);
                r0 = rd32((u32)param_1 + 0x50u);
                wr32((u32)param_1 + 0x58u, 0u);
                r0 = r0 & 0xfffffffbu;
                wr32((u32)param_1 + 0x50u, r0);
                wr32((u32)param_1 + 0x5cu, 0u);
            }
        }
    }
    return 1u;
}
