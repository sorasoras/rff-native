#include "tc_rt.h"

void fn_800cd238(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    f0 = (f64)rdf32(0x80572f78u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wrf32d(0x817fdfdcu, (f64)rdf32((u32)param_1 + 0x30u));
    wrf32d(0x817fdfd8u, f0);
    a.r[0] = param_2;
    r3 = tc_call(0x8025e7a4u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = r3;
    a.r[3] = 0x817fdfd8u;
    a.r[4] = 0x817fdfdcu;
    (void)tc_call(0x800cd060u, &a);
    r0 = (u32)(s8)rd8((u32)param_1 + 0x50u);
    wrf32d((u32)param_1 + 0x44u, (f64)rdf32(0x817fdfdcu));
    if (r0 != 0u) {
        f0 = (f64)rdf32(0x80572f8cu);
        if (f0 != (f64)rdf32((u32)param_1 + 0x34u)) {
            if (r0 == 1u) {
                f31 = (f64)rdf32((u32)param_1 + 0xcu);
                a.r[0] = (u32)param_1;
                f1 = tc_callf(0x800cd534u, &a);
                f3 = (f64)rdf32((u32)param_1 + 0x68u);
                f1 = (f64)(f32)(f1 - f3);
                f2 = (f64)rdf32(0x80572fa8u);
                f1 = ppc_fmadds(f1, f2, f31);
                f0 = ppc_fmadds((f64)(f32)(f3 - (f64)rdf32(0x817fdfd8u)), f2, f1);
            } else {
                if (r0 == 2u) {
                    f31 = (f64)rdf32((u32)param_1 + 0xcu);
                    a.r[0] = (u32)param_1;
                    f1 = tc_callf(0x800cd534u, &a);
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x817fdfd8u));
                    f0 = (f64)(f32)(f31 + (f64)(f32)(f1 - (f64)rdf32(0x80573008u)));
                }
            }
            wrf32d((u32)param_1 + 0x18u, f0);
        }
    }
    return;
}
