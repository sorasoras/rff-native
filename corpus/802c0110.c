#include "tc_rt.h"

u32 fn_802c0110(f64 param_1, f64 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    r0 = rd32((u32)param_3 + 0x28u);
    if (r0 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r0;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.f[0] = param_1;
        a.f[1] = param_2;
        r3 = tc_call(rd32(rd32(r0) + 0x50u), &a);
        r31 = r3;
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            a.r[0] = rd32((u32)param_3 + 0x2cu) + 0x84u;
            a.r[1] = 0x817fdfa8u;
            (void)tc_call(0x8023386cu, &a);
            wrf32d(0x817fdf78u, param_1);
            f0 = (f64)rdf32(0x80348628u);
            wrf32d(0x817fdf7cu, param_2);
            wrf32d(0x817fdf80u, f0);
            a.r[0] = 0x817fdfa8u;
            a.r[1] = 0x817fdf78u;
            a.r[2] = 0x817fdf98u;
            (void)tc_call(0x8023411cu, &a);
            a.r[0] = 0x817fdf88u;
            a.r[1] = rd32((u32)param_3 + 0x2cu);
            a.r[2] = r31;
            (void)tc_call(0x802d0c84u, &a);
            f0 = (f64)rdf32(0x817fdf88u);
            f1 = (f64)rdf32(0x817fdf98u);
            if ((f0 < f1) || (f0 == f1)) {
                f0 = (f64)rdf32(0x817fdf90u);
                if ((f1 < f0) || (f1 == f0)) {
                    f0 = (f64)rdf32(0x817fdf94u);
                    f1 = (f64)rdf32(0x817fdf9cu);
                    if ((f0 < f1) || (f0 == f1)) {
                        f0 = (f64)rdf32(0x817fdf8cu);
                        if ((f1 < f0) || (f1 == f0)) {
                            r3 = 1u;
                            return r3;
                        }
                    }
                }
            }
            r3 = 0u;
        }
    }
    return r3;
}
