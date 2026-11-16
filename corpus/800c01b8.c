#include "tc_rt.h"

void fn_800c01b8(s32 param_1)
{
    u32 c0lt = 0, r0 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x100u);
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        return;
    }
    if (!c0lt) {
        if ((s32)r0 >= 4) {
            return;
        }
    } else if ((s32)r0 < 1) {
        return;
    }
    f1 = (f64)rdf32(0x80572e78u);
    wr32((u32)param_1 + 0xa18u, 0x78u);
    a.f[0] = f1;
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    a.r[2] = 0u;
    (void)tc_call(0x800bf1d4u, &a);
    return;
}
