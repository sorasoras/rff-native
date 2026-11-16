#include "tc_rt.h"

void fn_800ae040(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x4cu);
    a.r[0] = r3;
    r3 = tc_call(0x800ac4acu, &a);
    if (r3 == 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800ae01cu, &a);
        if (r3 != 0u) {
            r3 = tc_call(0x80097da4u, &a);
            f1 = tc_lastf();
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x80097c5cu, &a);
            if (r3 == 0u) {
                r3 = tc_call(0x80097da4u, &a);
                r3 = rd32(r3 + 0x4cu);
                a.r[0] = r3;
                a.r[1] = 2u;
                r3 = tc_call(0x800ac714u, &a);
                if (r3 == 0u) {
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x800add14u, &a);
                }
            }
        }
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800ae008u, &a);
    if (r3 == 0u) {
        a.r[0] = 0x817fdfe8u;
        a.r[1] = (u32)param_1 + 0xcu;
        a.r[2] = (u32)param_1 + 0x2cu;
        (void)tc_call(0x800ada1cu, &a);
        r3 = rd32((u32)param_1 + 0x3cu);
        wrf32d((u32)param_1 + 0xcu, (f64)rdf32(0x817fdfe8u));
        r0 = r3 - 1u;
        wrf32d((u32)param_1 + 0x10u, (f64)rdf32(0x817fdfecu));
        wrf32d((u32)param_1 + 0x14u, (f64)rdf32(0x817fdff0u));
        wrf32d((u32)param_1 + 0x18u, (f64)rdf32(0x817fdff4u));
        wr32((u32)param_1 + 0x3cu, r0);
        if ((s32)r0 <= 0) {
            f2 = (f64)rdf32((u32)param_1 + 0x20u);
            f1 = (f64)rdf32((u32)param_1 + 0x24u);
            f0 = (f64)rdf32((u32)param_1 + 0x28u);
            wrf32d((u32)param_1 + 0xcu, (f64)rdf32((u32)param_1 + 0x1cu));
            wrf32d((u32)param_1 + 0x10u, f2);
            wrf32d((u32)param_1 + 0x14u, f1);
            wrf32d((u32)param_1 + 0x18u, f0);
            wr32((u32)param_1 + 0x44u, 0u);
        }
    }
    return;
}
