#include "tc_rt.h"

void fn_800f4724(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    if ((rd32(0x8057118cu) & 0x200u) != 0u) {
        r0 = rd32(param_1 + 0x48u);
        c0lt = (s32)r0 < 8;
        if (r0 != 8u) {
            if (!c0lt) {
                if ((s32)r0 >= 10) {
                    return;
                }
            } else if ((s32)r0 < 3) {
                return;
            }
            a.r[0] = param_1;
            a.r[1] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x18u), &a);
            r4 = rd32(r3);
            f0 = (f64)rdf32(0x80573b8cu);
            wr32(0x817fdfecu, rd32(r3 + 4u));
            f1 = (f64)rdf32(0x817fdfecu);
            wr32(0x817fdfe8u, r4);
            f0 = (f64)(f32)(f1 + f0);
            wr32(0x817fdff0u, rd32(r3 + 8u));
            wrf32d(0x817fdfecu, f0);
            a.r[0] = 0x817fdfe8u;
            (void)tc_call(0x80077890u, &a);
        }
    }
    return;
}
