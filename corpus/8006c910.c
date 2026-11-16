#include "tc_rt.h"

void fn_8006c910(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if (param_2 <= 5u) {
        f0 = (f64)rdf32(0x805725d8u);
        wrf32d(0x817fdfecu, f0);
        wrf32d(0x817fdfe8u, f0);
        wrf32d(0x817fdfe4u, f0);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdfe4u;
        (void)tc_call(0x8019fbdcu, &a);
        r31 = (u32)param_1 + ((param_2 << 2u) & 0xfffffffcu);
        if (rd32(r31 + 0x15ccu) == 0u) {
            c0lt = (s32)param_2 < 3;
            r3 = 0xffffffffu;
            if (param_2 == 3u) {
                r3 = 0xf3u;
            } else if (!c0lt) {
                c0lt = (s32)param_2 < 5;
                if (param_2 == 5u) {
                    r3 = 0x31u;
                } else if (c0lt) {
                    r3 = 0x30u;
                }
            } else {
                c0lt = (s32)param_2 < 1;
                if (param_2 == 1u) {
                    r3 = 0x25u;
                } else if (c0lt && (s32)param_2 >= 0) {
                    r3 = 0x2fu;
                }
            }
            if (r3 != 0xffffffffu) {
                a.f[0] = (f64)rdf32(0x805725e0u);
                a.r[0] = r3;
                a.r[1] = 0x817fdfe4u;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                r3 = tc_call(0x800d7768u, &a);
                wr32(r31 + 0x15ccu, r3);
            }
        } else {
            r3 = rd32(0x817fdfe8u);
            r0 = rd32(0x817fdfecu);
            wr32(0x817fdfd8u, rd32(0x817fdfe4u));
            wr32(0x817fdfdcu, r3);
            wr32(0x817fdfe0u, r0);
            a.r[0] = rd32(r31 + 0x15ccu);
            a.r[1] = 0x817fdfd8u;
            (void)tc_call(0x8015811cu, &a);
        }
    }
    return;
}
