#include "tc_rt.h"

void fn_8018621c(u32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x94u), &a);
    if (r3 == 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x800d9ffcu, &a);
        if ((u32)((s32)rd32(param_1 + 0x74u) >> 31) != 0u) {
            r0 = rd32(param_1 + 0x120u);
            if (r0 == 0u) {
                r30 = rd32(param_1 + 0x78u);
                a.r[0] = 0x8046ae40u;
                a.r[1] = rd32(param_1 + 0xf8u);
                a.r[2] = 0u;
                r3 = tc_call(0x8013ec7cu, &a);
                a.f[0] = (f64)rdf32(0x80575178u);
                a.r[0] = r30;
                a.r[1] = r3;
                a.r[2] = 0u;
                (void)tc_call(0x80035740u, &a);
                a.r[0] = r30;
                a.r[1] = 0u;
                (void)tc_call(0x800355acu, &a);
                wrf32d(r30 + 0x58u, (f64)rdf32(0x8057517cu));
                wr32(param_1 + 0x120u, 1u);
                a.r[0] = param_1 + 0x208u;
                (void)tc_call(0x80147160u, &a);
                wr32(param_1 + 0x828u, 0x96u);
            } else {
                if (r0 == 1u) {
                    a.f[0] = (f64)rdf32(0x80575180u);
                    a.r[0] = param_1;
                    (void)tc_call(0x800da490u, &a);
                    r3 = rd32(param_1 + 0x74u);
                    wr32(param_1 + 0x120u, 2u);
                    r3 = r3 & 0xf7ffffffu;
                    wr32(param_1 + 0x74u, r3);
                } else {
                    if (r0 == 2u) {
                        r0 = rd32(param_1 + 0x828u) - 1u;
                        wr32(param_1 + 0x828u, r0);
                        if ((s32)r0 > 0) {
                            return;
                        }
                        r3 = rd32(param_1 + 0x838u);
                        r0 = rd32(param_1 + 0x83cu);
                        wr32(param_1 + 0x120u, 6u);
                        wr32(param_1 + 0x828u, r3);
                        wr32(param_1 + 0x840u, r0);
                    } else {
                        if (r0 == 6u) {
                            r30 = rd32(param_1 + 0x78u);
                            a.r[0] = r30;
                            a.r[1] = 0u;
                            r3 = tc_call(0x800355acu, &a);
                            if (r3 != 0u) {
                                r4 = rd32(param_1 + 0x830u);
                                if (r4 != 0xffffffffu) {
                                    a.r[0] = 0x804b9e80u;
                                    a.r[1] = r4;
                                    (void)tc_call(0x801206f4u, &a);
                                    wr32(param_1 + 0x830u, 0xffffffffu);
                                }
                                a.r[0] = 0x804b9da0u;
                                a.r[1] = 0x108eu;
                                (void)tc_call(0x8010a74cu, &a);
                                a.r[0] = r30;
                                a.r[1] = param_1 + 0x208u;
                                a.r[2] = param_1 + 0x7fcu;
                                (void)tc_call(0x80147414u, &a);
                                f1 = (f64)rdf32(0x80575180u);
                                wr32(param_1 + 0x120u, 8u);
                                a.f[0] = f1;
                                a.r[0] = param_1;
                                (void)tc_call(0x800da490u, &a);
                                a.f[0] = (f64)rdf32(param_1 + 0x820u);
                                a.r[0] = param_1;
                                (void)tc_call(0x800da4b8u, &a);
                                return;
                            }
                            f0 = (f64)rdf32(0x80575178u);
                            wrf32d(0x817fdfecu, f0);
                            wrf32d(0x817fdfe8u, f0);
                            wrf32d(0x817fdfe4u, f0);
                            wrf32d(0x817fdfe0u, f0);
                            wrf32d(0x817fdfdcu, f0);
                            wrf32d(0x817fdfd8u, f0);
                            a.r[0] = rd32(param_1 + 0x78u);
                            a.r[1] = 1u;
                            r3 = tc_call(0x80031cf8u, &a);
                            if (r3 != 0u) {
                                a.r[0] = 0x817fdfe4u;
                                a.r[1] = rd32(r3 + 0x50u);
                                a.r[2] = 0x817fdfd8u;
                                f1 = tc_callf(0x80042474u, &a);
                                wrf32d(param_1 + 0x12cu, (f64)rdf32(0x817fdfe4u));
                                wrf32d(param_1 + 0x130u, (f64)rdf32(0x817fdfe8u));
                                wrf32d(param_1 + 0x134u, (f64)rdf32(0x817fdfecu));
                                a.r[0] = param_1 + 0x124u;
                                a.r[1] = tc_lastr4();
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                (void)tc_call(rd32(rd32(param_1 + 0x124u) + 0x14u), &a);
                            }
                            r3 = rd32(param_1 + 0x840u);
                            if ((s32)r3 > 0) {
                                r0 = r3 - 1u;
                                wr32(param_1 + 0x840u, r0);
                                if ((s32)r0 <= 0) {
                                    a.r[0] = 0x804b9da0u;
                                    a.r[1] = 0x1088u;
                                    (void)tc_call(0x8010a74cu, &a);
                                    wr32(param_1 + 0x840u, 0u);
                                    a.f[0] = (f64)rdf32(0x80575188u);
                                    a.f[1] = (f64)rdf32(0x80575184u);
                                    a.f[2] = (f64)rdf32(0x80575180u);
                                    a.f[3] = (f64)rdf32(0x8057518cu);
                                    a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                                    (void)tc_call(0x80056b18u, &a);
                                }
                            }
                            r4 = rd32(param_1 + 0x830u);
                            c0eq = r4 == 0xffffffffu;
                            if (!c0eq) {
                                a.r[0] = 0x804b9e80u;
                                a.r[1] = r4;
                                a.r[2] = 0x817fdfe4u;
                                (void)tc_call(0x80120914u, &a);
                                return;
                            }
                            if (!c0eq) {
                                return;
                            }
                            r4 = rd32(param_1 + 0x82cu);
                            if (r4 == 0xffffffffu) {
                                return;
                            }
                            f1 = (f64)rdf32(r30 + 0x54u);
                            f0 = (f64)rdf32(0x80575190u);
                            if (!((f1 > f0) || (f1 == f0))) {
                                return;
                            }
                            a.r[0] = 0x804b9da0u;
                            a.r[1] = r4;
                            a.r[2] = 0x817fdfe4u;
                            r3 = tc_call(0x8010a85cu, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            r0 = rd32(param_1 + 0x834u);
                            wr32(param_1 + 0x830u, r3);
                            if (r0 == 0u) {
                                a.f[0] = (f64)rdf32(0x805708a0u);
                                r3 = tc_call(0x802558e4u, &a);
                                f1 = tc_lastf();
                                r4 = tc_lastr4();
                                wr32(param_1 + 0x834u, r3);
                            }
                            a.r[0] = param_1;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                            r4 = rd32(param_1 + 0x834u);
                            wr32(0x817fdff0u, 0x43300000u);
                            f2 = rdf64(0x80575198u);
                            wr32(0x817fdff4u, r4);
                            f2 = (f64)(f32)(rdf64(0x817fdff0u) - f2);
                            a.f[0] = (f64)rdf32(param_1 + 0x824u);
                            a.f[1] = f2;
                            a.r[0] = param_1 + 0x124u;
                            a.r[1] = 0u;
                            a.r[2] = r3;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0x8fu;
                            (void)tc_call(0x8006e674u, &a);
                        } else {
                            if (r0 == 8u) {
                                a.r[0] = param_1 + 0x208u;
                                r3 = tc_call(0x801471c8u, &a);
                                if (r3 != 0u) {
                                    return;
                                }
                                wr32(param_1 + 0x120u, 5u);
                            } else {
                                if (r0 == 3u) {
                                    a.r[0] = param_1;
                                    (void)tc_call(0x800da354u, &a);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
