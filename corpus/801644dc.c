#include "tc_rt.h"

void fn_801644dc(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 8u);
    if (((u32)rd8(r5 + 0xbbu) & 1u) != 0u) {
        r3 = rd32((u32)param_1 + 0xcu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(r3 + 0x34u) + 0x14u), &a);
            f1 = tc_lastf();
            r5 = 0u;
            if (r3 == 1u) {
                return;
            }
        }
        r3 = rd32((u32)param_1 + 8u);
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = r5;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x18u), &a);
    }
    return;
}
