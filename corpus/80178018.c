#include "tc_rt.h"

u32 fn_80178018(f64 param_1, f64 param_2, s32 param_3, u32 param_4, u32 param_5)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfd4u, 0u);
    if ((s32)rd32((u32)param_3 + 0x19cu) < (s32)rd32((u32)param_3 + 0x170u)) {
        r3 = 0u;
    } else {
        r0 = rd32((u32)param_3 + 0xf0u);
        c0lt = (s32)r0 < 2;
        if (r0 == 2u) {
            r0 = rd32((u32)param_3 + 0x104u);
            wr32(0x817fdfb8u, rd32((u32)param_3 + 0x100u));
            wr32(0x817fdfbcu, r0);
            wr32(0x817fdfc0u, rd32((u32)param_3 + 0x108u));
            a.r[0] = 0x817fdfb8u;
            a.r[1] = (u32)param_3 + 0xf4u;
            a.r[2] = 0x817fdfb8u;
            (void)tc_call(0x80234380u, &a);
            a.f[0] = param_1;
            a.f[1] = param_2;
            a.r[0] = param_4;
            a.r[1] = (u32)param_3 + 0x100u;
            a.r[2] = 0x817fdfb8u;
            a.r[3] = param_5;
            r3 = tc_call(0x800968c0u, &a);
        } else {
            if (!c0lt) {
                if ((s32)r0 >= 5) {
                    r3 = 0u;
                    return r3;
                }
            } else if ((s32)r0 < 0) {
                r3 = 0u;
                return r3;
            }
            if (!((f64)(f32)ppc_fabs((f64)(f32)(param_2 - param_1)) < (f64)rdf32(0x80574facu))) {
                a.f[0] = param_1;
                a.f[1] = param_2;
                a.f[2] = (f64)rdf32((u32)param_3 + 0x20u);
                a.r[0] = param_4;
                a.r[1] = param_5;
                a.r[2] = (u32)param_3 + 0x14u;
                a.r[3] = (u32)param_3 + 8u;
                r3 = tc_call(0x80078964u, &a);
            } else {
                a.f[0] = param_1;
                a.f[1] = (f64)rdf32((u32)param_3 + 0x20u);
                a.r[0] = param_4;
                a.r[1] = param_5;
                a.r[2] = (u32)param_3 + 0x14u;
                a.r[3] = (u32)param_3 + 8u;
                r3 = tc_call(0x80078ba4u, &a);
            }
        }
    }
    return r3;
}
