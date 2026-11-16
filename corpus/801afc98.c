#include "tc_rt.h"

u32 fn_801afc98(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    if (rd32(param_2 + 0x110u) == 0u) {
        r0 = rd32((u32)param_1 + 8u);
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            a.r[0] = param_2;
            a.r[1] = rd32((u32)param_1 + 0xcu);
            a.r[2] = 0x80371f58u;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(((rd32((u32)param_1 + 0x10u) << 2u) & 0xfffffffcu) - 0x7fc8e0a8u), &a);
            if (r3 == 0u) {
                wr32((u32)param_1 + 8u, rd32((u32)param_1 + 8u) + 1u);
            }
            wr32((u32)param_1 + 0xcu, rd32((u32)param_1 + 0xcu) + 1u);
        } else if (c0lt && (s32)r0 >= 0) {
            r3 = rd32(0x804863d8u);
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            r0 = rd32(r3 + 4u);
            wr32(0x817fdfd8u, rd32(r3));
            wr32(0x817fdfdcu, r0);
            wr32(0x817fdfe0u, rd32(r3 + 8u));
            a.r[0] = param_2;
            a.r[1] = 0x817fdfd8u;
            a.r[2] = 0x804dc8b0u;
            f1 = tc_callf(0x801c3248u, &a);
            f31 = (f64)(f32)(f1 * (f64)rdf32(0x80575b60u));
            a.r[0] = param_2;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(param_2) + 0x2cu), &a);
            f31 = (f64)(f32)(f31 + f1);
            a.r[0] = param_2;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f31;
            (void)tc_call(rd32(rd32(param_2) + 0x24u), &a);
            r0 = rd32((u32)param_1 + 0x10u);
            if (r0 == 0u || r0 == 2u) {
                f0 = (f64)rdf32(0x80575b64u);
                f1 = (f64)rdf32(rd32(param_2 + 0x70u) + 0x54u);
                if ((f1 > f0) || (f1 == f0)) {
                    a.r[0] = param_2;
                    a.r[1] = 0x24c6u;
                    (void)tc_call(0x801c35dcu, &a);
                    wr32((u32)param_1 + 8u, rd32((u32)param_1 + 8u) + 1u);
                }
            } else {
                f0 = (f64)rdf32(0x80575b54u);
                f1 = (f64)rdf32(rd32(param_2 + 0x70u) + 0x54u);
                if ((f1 > f0) || (f1 == f0)) {
                    a.r[0] = param_2;
                    a.r[1] = 0x24c6u;
                    (void)tc_call(0x801c35dcu, &a);
                    wr32((u32)param_1 + 8u, rd32((u32)param_1 + 8u) + 1u);
                }
            }
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
