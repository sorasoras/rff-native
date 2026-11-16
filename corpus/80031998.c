#include "tc_rt.h"

void fn_80031998(u32 param_r3, u32 param_r4)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r7 = 0, r25 = 0, r31 = 0, t14 = 0, t28 = 0, t52 = 0, t66 = 0, t90 = 0;
    f64 t2 = 0.0, t4 = 0.0, t10 = 0.0, t12 = 0.0, t17 = 0.0, t18 = 0.0, t20 = 0.0, t23 = 0.0, t24 = 0.0, t26 = 0.0, t29 = 0.0, t30 = 0.0;
    f64 t32 = 0.0, t55 = 0.0, t56 = 0.0, t58 = 0.0, t61 = 0.0, t62 = 0.0, t64 = 0.0, t67 = 0.0, t68 = 0.0, t70 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r25 = 0u;
    r31 = 0u;
    while (r31 < rd32(param_r3 + 0x34u)) {
        r3 = rd32(param_r3 + 0x38u) + (rd32(param_r3 + 0x3cu) * r31);
        if (((u32)rd16(r3 + 0x34u) & 0x100u) == 0u) {
            r4 = rd32(r3 + 0x40u);
            if (r4 != 0u) {
                r4 = rd32(r4 + 0x20u);
                r7 = r4 + 0x40u;
            } else {
                r7 = rd32(r3 + 0x54u);
            }
            wrf32d(0x817fdf78u, (f64)rdf32(r7));
            wrf32d(0x817fdf7cu, (f64)rdf32(r7 + 4u));
            wrf32d(0x817fdf80u, (f64)rdf32(r7 + 8u));
            wrf32d(0x817fdf84u, (f64)rdf32(r7 + 0xcu));
            wrf32d(0x817fdf88u, (f64)rdf32(r7 + 4u));
            wrf32d(0x817fdf8cu, (f64)rdf32(r7 + 8u));
            wrf32d(0x817fdf90u, (f64)rdf32(r7));
            wrf32d(0x817fdf94u, (f64)rdf32(r7 + 0x10u));
            wrf32d(0x817fdf98u, (f64)rdf32(r7 + 8u));
            wrf32d(0x817fdf9cu, (f64)rdf32(r7 + 0xcu));
            wrf32d(0x817fdfa0u, (f64)rdf32(r7 + 0x10u));
            wrf32d(0x817fdfa4u, (f64)rdf32(r7 + 8u));
            wrf32d(0x817fdfa8u, (f64)rdf32(r7));
            wrf32d(0x817fdfacu, (f64)rdf32(r7 + 4u));
            wrf32d(0x817fdfb0u, (f64)rdf32(r7 + 0x14u));
            wrf32d(0x817fdfb4u, (f64)rdf32(r7 + 0xcu));
            wrf32d(0x817fdfb8u, (f64)rdf32(r7 + 4u));
            wrf32d(0x817fdfbcu, (f64)rdf32(r7 + 0x14u));
            wrf32d(0x817fdfc0u, (f64)rdf32(r7));
            wrf32d(0x817fdfc4u, (f64)rdf32(r7 + 0x10u));
            wrf32d(0x817fdfc8u, (f64)rdf32(r7 + 0x14u));
            wrf32d(0x817fdfccu, (f64)rdf32(r7 + 0xcu));
            wrf32d(0x817fdfd0u, (f64)rdf32(r7 + 0x10u));
            wrf32d(0x817fdfd4u, (f64)rdf32(r7 + 0x14u));
            a.r[0] = r3;
            a.r[1] = 0x817fdf78u;
            a.r[2] = 0x817fdf78u;
            a.r[3] = 8u;
            (void)tc_call(0x80234170u, &a);
            if (r25 == 0u) {
                t2 = (f64)rdf32(0x817fdf78u);
                t4 = (f64)rdf32(0x817fdf80u);
                wrf32d(param_r4, (f64)rdf32(0x817fdf78u));
                wrf32d(param_r4, t2);
                wrf32d(param_r4 + 8u, t4);
                t10 = (f64)rdf32(0x817fdf84u);
                t12 = (f64)rdf32(0x817fdf8cu);
                t14 = param_r4 + 0xcu;
                wrf32d(t14, (f64)rdf32(0x817fdf84u));
                wrf32d(t14, t10);
                wrf32d(param_r4 + 0x14u, t12);
                r3 = 0x817fdf84u;
                ctr = 7u;
                do {
                    t17 = (f64)rdf32(r3);
                    t18 = (f64)rdf32(r3);
                    t20 = (f64)rdf32(r3 + 8u);
                    t23 = (f64)rdf32(param_r4);
                    t24 = (f64)rdf32(param_r4);
                    t26 = (f64)rdf32(param_r4 + 8u);
                    t28 = param_r4 + 0xcu;
                    t29 = (f64)rdf32(t28);
                    t30 = (f64)rdf32(t28);
                    t32 = (f64)rdf32(param_r4 + 0x14u);
                    wrf32d(param_r4, ppc_fsel((f64)(f32)(t17 - t23), t23, t17));
                    wrf32d(param_r4, ppc_fsel((f64)(f32)(t18 - t24), t24, t18));
                    wrf32d(param_r4 + 8u, ppc_fsel((f64)(f32)(t20 - t26), t26, t20));
                    t52 = param_r4 + 0xcu;
                    wrf32d(t52, ppc_fsel((f64)(f32)(t17 - t29), t17, t29));
                    wrf32d(t52, ppc_fsel((f64)(f32)(t18 - t30), t18, t30));
                    wrf32d(param_r4 + 0x14u, ppc_fsel((f64)(f32)(t20 - t32), t20, t32));
                    r3 = r3 + 0xcu;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                r25 = 1u;
            } else {
                r3 = 0x817fdf78u;
                ctr = 8u;
                do {
                    t55 = (f64)rdf32(r3);
                    t56 = (f64)rdf32(r3);
                    t58 = (f64)rdf32(r3 + 8u);
                    t61 = (f64)rdf32(param_r4);
                    t62 = (f64)rdf32(param_r4);
                    t64 = (f64)rdf32(param_r4 + 8u);
                    t66 = param_r4 + 0xcu;
                    t67 = (f64)rdf32(t66);
                    t68 = (f64)rdf32(t66);
                    t70 = (f64)rdf32(param_r4 + 0x14u);
                    wrf32d(param_r4, ppc_fsel((f64)(f32)(t55 - t61), t61, t55));
                    wrf32d(param_r4, ppc_fsel((f64)(f32)(t56 - t62), t62, t56));
                    wrf32d(param_r4 + 8u, ppc_fsel((f64)(f32)(t58 - t64), t64, t58));
                    t90 = param_r4 + 0xcu;
                    wrf32d(t90, ppc_fsel((f64)(f32)(t55 - t67), t55, t67));
                    wrf32d(t90, ppc_fsel((f64)(f32)(t56 - t68), t56, t68));
                    wrf32d(param_r4 + 0x14u, ppc_fsel((f64)(f32)(t58 - t70), t58, t70));
                    r3 = r3 + 0xcu;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        r31 = r31 + 1u;
    }
    return;
}
