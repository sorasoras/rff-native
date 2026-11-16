#include "tc_rt.h"

u32 fn_8015afc4(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)param_1 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdfe8u;
        r3 = tc_call(0x8015af34u, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            r31 = rd32(rd32(0x817fdfe8u) + 4u);
            if (r31 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80360724u;
                a.r[1] = 0x23du;
                a.r[2] = 0x80360700u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802e41c0u, &a);
            }
            r3 = rd32(r31 + 8u);
            if (r3 == 0u) {
                r3 = 0u;
            } else {
                a.r[0] = r3;
                r3 = tc_call(0x8015aef0u, &a);
            }
        }
    }
    return r3;
}
