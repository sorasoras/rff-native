#include "tc_rt.h"

void fn_800fb074(s32 param_1)
{
    u32 c0eq = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x30u) != 0u) {
        r3 = (u32)param_1 + 0x70u;
        a.r[0] = r3;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(r3) + 0x18u), &a);
        wr32((u32)param_1 + 0x30u, 0u);
        a.r[0] = (u32)param_1 + 0x34u;
        f1 = tc_callf(0x800f8388u, &a);
        r3 = rd32((u32)param_1 + 0x28u);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3 + 0x28u) + 8u), &a);
            }
            wr32((u32)param_1 + 0x28u, 0u);
        }
        r3 = rd32((u32)param_1 + 0x24u);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3 + 0x28u) + 8u), &a);
            }
            wr32((u32)param_1 + 0x24u, 0u);
        }
        r3 = rd32((u32)param_1 + 0x2cu);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3 + 0x28u) + 8u), &a);
            }
            wr32((u32)param_1 + 0x2cu, 0u);
        }
    }
    return;
}
