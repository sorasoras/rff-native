#include "tc_rt.h"

u32 fn_800cc2c4(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfc4u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdf90u;
    (void)tc_call(0x800cc61cu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = 0x817fdf8cu;
    a.r[3] = 0x817fdf88u;
    a.r[4] = 0x817fdf84u;
    r3 = tc_call(0x800ccb48u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = rd32(0x817fdf8cu);
        a.r[2] = rd32(0x817fdf88u);
        a.r[3] = 0x817fdf80u;
        a.r[4] = 0x817fdf7cu;
        a.r[5] = 0x817fdf78u;
        (void)tc_call(0x800cc134u, &a);
        a.f[0] = (f64)rdf32(0x817fdf7cu);
        a.f[1] = (f64)rdf32(0x817fdf78u);
        a.r[0] = (u32)param_1;
        a.r[1] = rd32(0x817fdf88u);
        a.r[2] = (u32)param_3;
        (void)tc_call(0x800cc7e0u, &a);
        wrf32d((u32)param_1 + 0x18u, (f64)(f32)((f64)rdf32(0x817fdf80u) + (f64)rdf32((u32)param_1 + 0x18u)));
        for (;;) {
            if (rd32(0x817fdf88u) == 0u) {
                a.r[0] = (u32)param_1;
                a.r[1] = 0x817fdf90u;
                (void)tc_call(0x800cc6a0u, &a);
                r3 = rd32(0x817fdf84u);
                return r3;
            }
            r3 = rd32(0x817fdf8cu);
            r4 = (u32)rd16(r3);
            if (r4 != 0xau) {
                a.r[0] = (u32)param_1;
                a.r[1] = r4;
                f1 = tc_callf(0x800cca68u, &a);
                f31 = f1;
                f30 = (f64)rdf32((u32)param_1 + 0x64u);
                a.r[0] = (u32)param_1;
                f1 = tc_callf(0x800cd52cu, &a);
                if ((f64)(f32)(f31 + f30) > f1) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0x817fdf90u;
                    (void)tc_call(0x800cc6a0u, &a);
                    r3 = 0u;
                    return r3;
                }
                f30 = (f64)rdf32((u32)param_1 + 0xcu);
                f29 = (f64)rdf32((u32)param_1 + 0x18u);
                a.r[0] = (u32)param_1;
                f1 = tc_callf(0x800cd534u, &a);
                f1 = (f64)(f32)(f30 + f1);
                if ((f64)(f32)(f31 + f29) > f1) {
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x800cc9a4u, &a);
                    a.r[0] = (u32)param_1;
                    a.r[1] = rd32(0x817fdf8cu);
                    (void)tc_call(0x800cd238u, &a);
                    if ((f64)(f32)((f64)rdf32((u32)param_1 + 0x1cu) + (f64)rdf32((u32)param_1 + 0x44u)) > (f64)(f32)((f64)rdf32((u32)param_1 + 0x38u) + (f64)rdf32((u32)param_1 + 0x10u))) break;
                }
                if ((u32)param_3 == 0u) {
                    wrf32d((u32)param_1 + 0x18u, (f64)(f32)(f31 + (f64)rdf32((u32)param_1 + 0x18u)));
                } else {
                    a.r[0] = (u32)param_1;
                    a.r[1] = (u32)rd16(rd32(0x817fdf8cu));
                    (void)tc_call(0x800cc9ccu, &a);
                    wrf32d((u32)param_1 + 0x18u, (f64)(f32)(f31 + (f64)rdf32((u32)param_1 + 0x18u)));
                }
                a.f[0] = (f64)(f32)(f31 + (f64)rdf32(0x817fdf80u));
                a.r[0] = (u32)param_1;
                (void)tc_call(0x800cc588u, &a);
                r0 = rd32(0x817fdf88u) - 1u;
                wr32(0x817fdf8cu, rd32(0x817fdf8cu) + 2u);
                wr32(0x817fdf88u, r0);
            } else {
                wr32(0x817fdf8cu, r3 + 2u);
                a.r[0] = (u32)param_1;
                (void)tc_call(0x800cc9a4u, &a);
                a.r[0] = (u32)param_1;
                a.r[1] = rd32(0x817fdf8cu);
                (void)tc_call(0x800cd238u, &a);
                if ((f64)(f32)((f64)rdf32((u32)param_1 + 0x1cu) + (f64)rdf32((u32)param_1 + 0x44u)) > (f64)(f32)((f64)rdf32((u32)param_1 + 0x38u) + (f64)rdf32((u32)param_1 + 0x10u))) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0x817fdf90u;
                    (void)tc_call(0x800cc6a0u, &a);
                    r3 = 0u;
                    return r3;
                }
            }
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdf90u;
        (void)tc_call(0x800cc6a0u, &a);
        r3 = 0u;
        return r3;
    }
    r3 = 1u;
    return r3;
}
