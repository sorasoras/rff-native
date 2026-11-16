#include "tc_rt.h"

void fn_8007fc80(u32 param_1, u32 param_2)
{
    u32 r4 = 0, r5 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_2) + 0x148u), &a);
    r5 = rd32(0x8046ad24u);
    while (r5 != 0u) {
        r4 = r5;
        r5 = rd32(r5);
        r4 = rd32(r4 + 8u);
        if (rd32(r4 + 0x2cu) == param_2) {
            wr32(r4 + 0x2cu, 0u);
            wr32(r4 + 0x30u, rd32(r4 + 0x30u) & 0xfffffff8u);
        }
    }
    a.r[0] = param_2 + 0x27cu;
    (void)tc_call(0x800a264cu, &a);
    return;
}
