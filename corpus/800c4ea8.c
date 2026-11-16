#include "tc_rt.h"

void fn_800c4ea8(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32(param_1 + 0x290u);
    if (r0 == 0x19u) {
        a.r[0] = param_1;
        a.r[1] = 0x24u;
        a.r[2] = 1u;
        a.r[3] = 1u;
        a.f[0] = (f64)rdf32(0x80572ea8u);
        (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
        r3 = rd32(0x80571140u);
        if (r3 == 0u) {
            return;
        }
        a.r[0] = r3;
        (void)tc_call(0x800b037cu, &a);
    } else {
        if (r0 == 0x1au) {
            a.r[0] = param_1;
            (void)tc_call(0x800c4f2cu, &a);
        } else {
            if (r0 == 0x18u) {
                a.r[0] = param_1;
                (void)tc_call(0x800c4f2cu, &a);
            }
        }
    }
    return;
}
