#include "tc_rt.h"

u32 fn_80272fbc(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdfe4u, 0xffffffffu);
    wr32(0x817fdfe0u, 0xffffffffu);
    wr32(0x817fdfdcu, 0xffffffffu);
    wr32(0x817fdfd8u, 0xffffffffu);
    r3 = tc_call(0x802721a4u, &a);
    if (r3 == 0u) {
        r3 = 0xffffff80u;
    } else {
        r3 = tc_call(0x80272d60u, &a);
        a.r[0] = r3;
        a.r[1] = 0x817fdfe4u;
        a.r[2] = 0x817fdfe0u;
        r3 = tc_call(0x8026e4b0u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x802721bcu, &a);
        } else {
            a.r[0] = 0x817fdfdcu;
            a.r[1] = 0x817fdfd8u;
            a.r[2] = 0x8038f6f0u;
            r3 = tc_call(0x80272f00u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r3;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x802721bcu, &a);
            } else {
                r5 = 0u;
                r4 = rd32(0x817fdfd8u);
                r3 = rd32(0x817fdfdcu);
                r0 = rd32(0x817fdfe0u);
                if ((rd32(0x817fdfe4u) + (u32)param_1) > 0x400u) {
                    r5 = 1u;
                }
                r0 = r0 + (u32)param_2;
                if (r0 > 0x21u) {
                    r5 = r5 | 2u;
                }
                if ((r3 + (u32)param_1) > 0x4400u) {
                    r5 = r5 | 4u;
                }
                if ((r4 + (u32)param_2) > 0xfa0u) {
                    r5 = r5 | 8u;
                }
                wr32(param_3, r5);
                r3 = 0u;
            }
        }
    }
    return r3;
}
