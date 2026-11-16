#include "tc_rt.h"

u32 fn_8025bc84(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (param_1 < 1 || param_1 > 7) {
        r3 = 0xffffffffu;
    } else {
        r5 = (((u32)param_1 - 1u) << 2u) & 0xfffffffcu;
        r4 = 0x80500a10u;
        r31 = rd32(r5 - 0x7faff5f0u);
        if (r31 != 1u) {
            wr32(r5 - 0x7faff5f0u, 0u);
        }
        if (r31 == 1u || (r31 == 0u && (u32)param_1 == 1u)) {
            r3 = 0u;
        } else {
            if (r31 == 0u) {
                f1 = tc_callf(0x802336f4u, &a);
                r4 = tc_lastr4();
                r5 = 0u;
            }
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            a.r[2] = r5;
            a.f[0] = f1;
            (void)tc_call(r31, &a);
            r3 = 0u;
        }
    }
    return r3;
}
