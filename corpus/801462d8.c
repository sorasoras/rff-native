#include "tc_rt.h"

void fn_801462d8(u32 param_1)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32(param_1 + 0xa3cu) != 0u) {
        f0 = (f64)rdf32(0x805745d8u);
        wrf32d(0x817fdfecu, f0);
        wrf32d(0x817fdfe8u, f0);
        wrf32d(0x817fdfe4u, f0);
        a.r[0] = param_1;
        a.r[1] = 0x817fdfe4u;
        (void)tc_call(0x8019fbdcu, &a);
        r3 = rd32(0x817fdfe8u);
        r0 = rd32(0x817fdfecu);
        wr32(0x817fdfd8u, rd32(0x817fdfe4u));
        wr32(0x817fdfdcu, r3);
        wr32(0x817fdfe0u, r0);
        a.r[0] = rd32(param_1 + 0xa3cu);
        a.r[1] = 0x817fdfd8u;
        (void)tc_call(0x8015811cu, &a);
    }
    r0 = rd32(param_1 + 0xa24u);
    c0lt = (s32)r0 < 3;
    if (r0 == 3u) {
        if (rd32(param_1 + 0x110u) != 0u) {
            (void)tc_call(0x801428b4u, &a);
        }
    } else if (!c0lt) {
        c0lt = (s32)r0 < 8;
        if (r0 == 8u && rd32(param_1 + 0x110u) != 0u) {
            a.r[0] = 7u;
            (void)tc_call(0x801428a4u, &a);
            r3 = rd32(param_1 + 0xa2cu);
            if (r3 != 0u) {
                a.r[0] = r3;
                f1 = tc_callf(0x800d6150u, &a);
                r4 = tc_lastr4();
                c0eq = rd32(param_1 + 0xa48u) == 0u;
                if (c0eq) {
                    r0 = rd32(param_1 + 0xa2cu);
                    if (c0eq) {
                        wr32(param_1 + 0xa48u, r0);
                    }
                    a.r[0] = rd32(param_1 + 0xa2cu);
                    a.r[1] = param_1;
                    a.r[2] = 0x15u;
                    (void)tc_call(0x800d612cu, &a);
                    wr32(param_1 + 0xa2cu, 0u);
                } else {
                    r3 = rd32(param_1 + 0xa2cu);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r3) + 0x18u), &a);
                    wr32(param_1 + 0xa2cu, 0u);
                }
            }
            r3 = rd32(param_1 + 0xa3cu);
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x80157e6cu, &a);
                wr32(param_1 + 0xa3cu, 0u);
            }
            wr32(param_1 + 0x9cu, rd32(param_1 + 0x9cu) & 0xfbffffffu);
        }
    } else if ((s32)r0 >= 2) {
        r3 = tc_call(0x801428f0u, &a);
        if (r3 != 0u && rd32(param_1 + 0x100u) == 0x32u) {
            a.r[0] = param_1;
            a.r[1] = 0x33u;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x805745d0u);
            (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
        }
    }
    return;
}
