#include "tc_rt.h"

void fn_800f00b0(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdee0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80573ad8u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r0 = rd32(param_2 + 0x1cu);
    wrf32d(0x817fdfecu, f0);
    r0 = r0 & 0x40u;
    wrf32d(0x817fdfe8u, f0);
    wrf32d(0x817fdfe4u, f0);
    if (r0 == 0x40u) {
        a.r[0] = param_2;
        (void)tc_call(0x800f1804u, &a);
    }
    r4 = rd32(param_2 + 0x1cu);
    if ((r4 & 0x80u) == 0x80u) {
        a.r[0] = 0x817fdfd8u;
        (void)tc_call(0x800f197cu, &a);
        f1 = (f64)rdf32(0x817fdfdcu);
        f0 = (f64)rdf32(0x817fdfe0u);
        wrf32d(0x817fdfe4u, (f64)rdf32(0x817fdfd8u));
        wrf32d(0x817fdfe8u, f1);
        r4 = rd32(0x817fdfe4u);
        wrf32d(0x817fdfecu, f0);
        r3 = rd32(0x817fdfe8u);
        r0 = rd32(0x817fdfecu);
        wr32(param_1, r4);
        wr32(param_1 + 4u, r3);
        wr32(param_1 + 8u, r0);
    } else {
        if ((r4 & 0x100u) == 0x100u) {
            a.r[0] = 0x817fdfccu;
            a.r[1] = param_2;
            (void)tc_call(0x800f1874u, &a);
            f1 = (f64)rdf32(0x817fdfd0u);
            f0 = (f64)rdf32(0x817fdfd4u);
            wrf32d(0x817fdfe4u, (f64)rdf32(0x817fdfccu));
            wrf32d(0x817fdfe8u, f1);
            r4 = rd32(0x817fdfe4u);
            wrf32d(0x817fdfecu, f0);
            r3 = rd32(0x817fdfe8u);
            r0 = rd32(0x817fdfecu);
            wr32(param_1, r4);
            wr32(param_1 + 4u, r3);
            wr32(param_1 + 8u, r0);
        } else {
            if (((r4 & 0x40000u) - 0x40000u) == 0u) {
                a.r[0] = 0x817fdfc0u;
                a.r[1] = param_2;
                (void)tc_call(0x800f0860u, &a);
                f1 = (f64)rdf32(0x817fdfc4u);
                f0 = (f64)rdf32(0x817fdfc8u);
                wrf32d(0x817fdfe4u, (f64)rdf32(0x817fdfc0u));
                wrf32d(0x817fdfe8u, f1);
                r4 = rd32(0x817fdfe4u);
                wrf32d(0x817fdfecu, f0);
                r3 = rd32(0x817fdfe8u);
                r0 = rd32(0x817fdfecu);
                wr32(param_1, r4);
                wr32(param_1 + 4u, r3);
                wr32(param_1 + 8u, r0);
            } else {
                if ((r4 & 0x4000u) == 0x4000u) {
                    a.r[0] = 0x817fdfb4u;
                    a.r[1] = param_2;
                    (void)tc_call(0x800f09e0u, &a);
                    f1 = (f64)rdf32(0x817fdfb8u);
                    f0 = (f64)rdf32(0x817fdfbcu);
                    wrf32d(0x817fdfe4u, (f64)rdf32(0x817fdfb4u));
                    wrf32d(0x817fdfe8u, f1);
                    r7 = rd32(0x817fdfe4u);
                    wrf32d(0x817fdfecu, f0);
                    r6 = rd32(0x817fdfe8u);
                    r0 = rd32(0x817fdfecu);
                    wr32(0x817fdfa8u, r7);
                    wr32(0x817fdfacu, r6);
                    wr32(0x817fdfb0u, r0);
                    a.r[0] = param_2;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdfa8u;
                    r3 = tc_call(0x800f06b4u, &a);
                    if (r3 == 0u) {
                        r0 = rd32(param_2 + 4u);
                        wr32(param_1, rd32(param_2));
                        wr32(param_1 + 4u, r0);
                        wr32(param_1 + 8u, rd32(param_2 + 8u));
                        return;
                    }
                }
                if ((rd32(param_2 + 0x1cu) & 0x1000u) == 0x1000u) {
                    a.r[0] = 0x817fdf9cu;
                    a.r[1] = param_2;
                    (void)tc_call(0x800f1990u, &a);
                    f1 = (f64)rdf32(0x817fdfa0u);
                    f0 = (f64)rdf32(0x817fdfa4u);
                    wrf32d(0x817fdfe4u, (f64)rdf32(0x817fdf9cu));
                    wrf32d(0x817fdfe8u, f1);
                    r7 = rd32(0x817fdfe4u);
                    wrf32d(0x817fdfecu, f0);
                    r6 = rd32(0x817fdfe8u);
                    r0 = rd32(0x817fdfecu);
                    wr32(0x817fdf90u, r7);
                    wr32(0x817fdf94u, r6);
                    wr32(0x817fdf98u, r0);
                    a.r[0] = param_2;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdf90u;
                    r3 = tc_call(0x800f06b4u, &a);
                    if (r3 == 0u) {
                        r0 = rd32(param_2 + 4u);
                        wr32(param_1, rd32(param_2));
                        wr32(param_1 + 4u, r0);
                        wr32(param_1 + 8u, rd32(param_2 + 8u));
                        return;
                    }
                }
                if ((rd32(param_2 + 0x1cu) & 2u) == 2u) {
                    a.r[0] = rd32(param_2 + 0x18u);
                    r3 = tc_call(0x800b3344u, &a);
                    a.r[0] = 0x817fdf84u;
                    a.r[1] = param_2;
                    a.r[2] = r3;
                    (void)tc_call(0x800f0bfcu, &a);
                    f1 = (f64)rdf32(0x817fdf88u);
                    f0 = (f64)rdf32(0x817fdf8cu);
                    wrf32d(0x817fdfe4u, (f64)rdf32(0x817fdf84u));
                    wrf32d(0x817fdfe8u, f1);
                    r7 = rd32(0x817fdfe4u);
                    wrf32d(0x817fdfecu, f0);
                    r6 = rd32(0x817fdfe8u);
                    r0 = rd32(0x817fdfecu);
                    wr32(0x817fdf78u, r7);
                    wr32(0x817fdf7cu, r6);
                    wr32(0x817fdf80u, r0);
                    a.r[0] = param_2;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdf78u;
                    r3 = tc_call(0x800f06b4u, &a);
                    if (r3 == 0u) {
                        r0 = rd32(param_2 + 4u);
                        wr32(param_1, rd32(param_2));
                        wr32(param_1 + 4u, r0);
                        wr32(param_1 + 8u, rd32(param_2 + 8u));
                        return;
                    }
                }
                if ((rd32(param_2 + 0x1cu) & 1u) == 1u) {
                    a.r[0] = rd32(param_2 + 0x18u);
                    r3 = tc_call(0x800b3344u, &a);
                    a.r[0] = 0x817fdf6cu;
                    a.r[1] = param_2;
                    a.r[2] = r3;
                    (void)tc_call(0x800f0ac0u, &a);
                    f1 = (f64)rdf32(0x817fdf70u);
                    f0 = (f64)rdf32(0x817fdf74u);
                    wrf32d(0x817fdfe4u, (f64)rdf32(0x817fdf6cu));
                    wrf32d(0x817fdfe8u, f1);
                    r7 = rd32(0x817fdfe4u);
                    wrf32d(0x817fdfecu, f0);
                    r6 = rd32(0x817fdfe8u);
                    r0 = rd32(0x817fdfecu);
                    wr32(0x817fdf60u, r7);
                    wr32(0x817fdf64u, r6);
                    wr32(0x817fdf68u, r0);
                    a.r[0] = param_2;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdf60u;
                    r3 = tc_call(0x800f06b4u, &a);
                    if (r3 == 0u) {
                        r0 = rd32(param_2 + 4u);
                        wr32(param_1, rd32(param_2));
                        wr32(param_1 + 4u, r0);
                        wr32(param_1 + 8u, rd32(param_2 + 8u));
                        return;
                    }
                }
                if ((rd32(param_2 + 0x1cu) & 4u) == 4u) {
                    a.r[0] = rd32(param_2 + 0x18u);
                    r3 = tc_call(0x800b3344u, &a);
                    a.r[0] = 0x817fdf54u;
                    a.r[1] = param_2;
                    a.r[2] = r3;
                    (void)tc_call(0x800f0d38u, &a);
                    f1 = (f64)rdf32(0x817fdf58u);
                    f0 = (f64)rdf32(0x817fdf5cu);
                    wrf32d(0x817fdfe4u, (f64)rdf32(0x817fdf54u));
                    wrf32d(0x817fdfe8u, f1);
                    r7 = rd32(0x817fdfe4u);
                    wrf32d(0x817fdfecu, f0);
                    r6 = rd32(0x817fdfe8u);
                    r0 = rd32(0x817fdfecu);
                    wr32(0x817fdf48u, r7);
                    wr32(0x817fdf4cu, r6);
                    wr32(0x817fdf50u, r0);
                    a.r[0] = param_2;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdf48u;
                    r3 = tc_call(0x800f06b4u, &a);
                    if (r3 == 0u) {
                        r0 = rd32(param_2 + 4u);
                        wr32(param_1, rd32(param_2));
                        wr32(param_1 + 4u, r0);
                        wr32(param_1 + 8u, rd32(param_2 + 8u));
                        return;
                    }
                }
                if ((rd32(param_2 + 0x1cu) & 8u) == 8u) {
                    a.r[0] = 0x817fdf3cu;
                    a.r[1] = param_2;
                    (void)tc_call(0x800f0f20u, &a);
                    f1 = (f64)rdf32(0x817fdf40u);
                    f0 = (f64)rdf32(0x817fdf44u);
                    wrf32d(0x817fdfe4u, (f64)rdf32(0x817fdf3cu));
                    wrf32d(0x817fdfe8u, f1);
                    r7 = rd32(0x817fdfe4u);
                    wrf32d(0x817fdfecu, f0);
                    r6 = rd32(0x817fdfe8u);
                    r0 = rd32(0x817fdfecu);
                    wr32(0x817fdf30u, r7);
                    wr32(0x817fdf34u, r6);
                    wr32(0x817fdf38u, r0);
                    a.r[0] = param_2;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdf30u;
                    r3 = tc_call(0x800f06b4u, &a);
                    if (r3 == 0u) {
                        r0 = rd32(param_2 + 4u);
                        wr32(param_1, rd32(param_2));
                        wr32(param_1 + 4u, r0);
                        wr32(param_1 + 8u, rd32(param_2 + 8u));
                        return;
                    }
                }
                if ((rd32(param_2 + 0x1cu) & 0x10u) == 0x10u) {
                    a.r[0] = 0x817fdf24u;
                    a.r[1] = param_2;
                    (void)tc_call(0x800f11ecu, &a);
                    f1 = (f64)rdf32(0x817fdf28u);
                    f0 = (f64)rdf32(0x817fdf2cu);
                    wrf32d(0x817fdfe4u, (f64)rdf32(0x817fdf24u));
                    wrf32d(0x817fdfe8u, f1);
                    r7 = rd32(0x817fdfe4u);
                    wrf32d(0x817fdfecu, f0);
                    r6 = rd32(0x817fdfe8u);
                    r0 = rd32(0x817fdfecu);
                    wr32(0x817fdf18u, r7);
                    wr32(0x817fdf1cu, r6);
                    wr32(0x817fdf20u, r0);
                    a.r[0] = param_2;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdf18u;
                    r3 = tc_call(0x800f06b4u, &a);
                    if (r3 == 0u) {
                        r0 = rd32(param_2 + 4u);
                        wr32(param_1, rd32(param_2));
                        wr32(param_1 + 4u, r0);
                        wr32(param_1 + 8u, rd32(param_2 + 8u));
                        return;
                    }
                }
                if ((rd32(param_2 + 0x1cu) & 0x800u) == 0x800u) {
                    a.r[0] = rd32(param_2 + 0x18u);
                    r3 = tc_call(0x800b3344u, &a);
                    a.r[0] = 0x817fdf0cu;
                    a.r[1] = param_2;
                    a.r[2] = r3;
                    (void)tc_call(0x800f1b58u, &a);
                    f1 = (f64)rdf32(0x817fdf10u);
                    f0 = (f64)rdf32(0x817fdf14u);
                    wrf32d(0x817fdfe4u, (f64)rdf32(0x817fdf0cu));
                    wrf32d(0x817fdfe8u, f1);
                    r7 = rd32(0x817fdfe4u);
                    wrf32d(0x817fdfecu, f0);
                    r6 = rd32(0x817fdfe8u);
                    r0 = rd32(0x817fdfecu);
                    wr32(0x817fdf00u, r7);
                    wr32(0x817fdf04u, r6);
                    wr32(0x817fdf08u, r0);
                    a.r[0] = param_2;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdf00u;
                    r3 = tc_call(0x800f06b4u, &a);
                    if (r3 == 0u) {
                        r0 = rd32(param_2 + 4u);
                        wr32(param_1, rd32(param_2));
                        wr32(param_1 + 4u, r0);
                        wr32(param_1 + 8u, rd32(param_2 + 8u));
                        return;
                    }
                }
                if ((rd32(param_2 + 0x1cu) & 0x400u) == 0x400u) {
                    a.r[0] = 0x817fdef4u;
                    a.r[1] = param_2;
                    (void)tc_call(0x800f14a8u, &a);
                    f1 = (f64)rdf32(0x817fdef8u);
                    f0 = (f64)rdf32(0x817fdefcu);
                    wrf32d(0x817fdfe4u, (f64)rdf32(0x817fdef4u));
                    wrf32d(0x817fdfe8u, f1);
                    r7 = rd32(0x817fdfe4u);
                    wrf32d(0x817fdfecu, f0);
                    r6 = rd32(0x817fdfe8u);
                    r0 = rd32(0x817fdfecu);
                    wr32(0x817fdee8u, r7);
                    wr32(0x817fdeecu, r6);
                    wr32(0x817fdef0u, r0);
                    a.r[0] = param_2;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdee8u;
                    (void)tc_call(0x800f06b4u, &a);
                    r0 = rd32(param_2 + 4u);
                    wr32(param_1, rd32(param_2));
                    wr32(param_1 + 4u, r0);
                    wr32(param_1 + 8u, rd32(param_2 + 8u));
                } else {
                    r0 = rd32(param_2 + 4u);
                    wr32(param_1, rd32(param_2));
                    wr32(param_1 + 4u, r0);
                    wr32(param_1 + 8u, rd32(param_2 + 8u));
                }
            }
        }
    }
    return;
}
