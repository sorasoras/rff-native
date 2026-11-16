#include "tc_rt.h"

void fn_802f7338(s32 param_1, u32 param_2)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = rd32(param_2 + 8u);
    a.r[0] = r3;
    a.r[1] = rd32(param_2 + 0x10u);
    a.r[2] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = rd32(param_2 + 0xcu);
        a.r[2] = rd32(param_2 + 0x10u);
        f1 = tc_callf(0x80004338u, &a);
        r0 = rd32(param_2);
        wr32((u32)param_1 + 0x28u, rd32(param_2 + 0xcu));
        r3 = rd32(param_2);
        c0eq = r0 == 0u;
        r5 = rd32(param_2 + 4u);
        r4 = rd32(param_2 + 8u);
        r0 = rd32(param_2 + 0x10u);
        wr32((u32)param_1 + 0x1cu, r3);
        wr32((u32)param_1 + 0x20u, r5);
        wr32((u32)param_1 + 0x24u, r4);
        wr32((u32)param_1 + 0x2cu, r0);
        wr32((u32)param_1 + 0x28u, r31);
        if (!c0eq) {
            a.r[0] = r3;
            a.r[1] = r31;
            a.r[2] = rd32((u32)param_1 + 0x90u);
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x14u), &a);
            if ((s32)r3 > 4) {
                r3 = 4u;
            }
            wr8((u32)param_1 + 0x8du, (u8)r3);
        }
    }
    return;
}
