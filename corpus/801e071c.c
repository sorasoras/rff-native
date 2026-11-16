#include "tc_rt.h"

void fn_801e071c(u32 param_1)
{
    u32 c0lt = 0, r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    if (!((f64)rdf32(param_1 + 0x10u) < (f64)rdf32(param_1 + 0x18u))) {
        a.r[0] = param_1;
        r3 = tc_call(0x801dda54u, &a);
        a.r[0] = param_1 + 4u;
        a.r[1] = r3;
        f1 = tc_callf(0x801dc338u, &a);
        if (f1 < (f64)rdf32(0x8057623cu)) {
            f1 = tc_callf(0x80040a00u, &a);
            f0 = (f64)rdf32(0x8057623cu);
            f1 = (f64)(f32)((f64)rdf32(0x80576298u) * f1);
            c0lt = f1 < f0;
            if (((((c0lt << 0x1fu) | ((f1 > f0) << 0x1eu) | ((c0lt || (f1 == f0)) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                a.r[0] = param_1;
                a.r[1] = 6u;
                (void)tc_call(0x801dd9ecu, &a);
                return;
            }
        }
        a.r[0] = rd32(param_1);
        f1 = tc_callf(0x801dff78u, &a);
        f31 = f1;
        if (f1 < (f64)rdf32(0x80576220u)) {
            a.r[0] = param_1;
            a.r[1] = 6u;
            (void)tc_call(0x801dd9ecu, &a);
        } else {
            if (f1 < (f64)rdf32(0x805762a0u)) {
                a.r[0] = rd32(param_1);
                r3 = tc_call(0x801e0558u, &a);
                r31 = r3;
                f1 = tc_callf(0x80040a00u, &a);
                f0 = (f64)rdf32(0x80576228u);
                f1 = (f64)(f32)((f64)rdf32(0x80576298u) * f1);
                c0lt = f1 < f0;
                if (((((c0lt << 0x1fu) | ((f1 > f0) << 0x1eu) | ((c0lt || (f1 == f0)) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                    if ((s32)r31 >= 10) {
                        return;
                    }
                    a.r[0] = param_1;
                    a.r[1] = 4u;
                    (void)tc_call(0x801dd9ecu, &a);
                    return;
                }
                a.r[0] = param_1;
                a.r[1] = 3u;
                (void)tc_call(0x801dd9ecu, &a);
            } else {
                f1 = tc_callf(0x80040a00u, &a);
                f0 = (f64)rdf32(0x8057623cu);
                f1 = (f64)(f32)((f64)rdf32(0x80576298u) * f1);
                c0lt = f1 < f0;
                if (((((c0lt << 0x1fu) | ((f1 > f0) << 0x1eu) | ((c0lt || (f1 == f0)) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                    a.r[0] = param_1;
                    a.r[1] = 0xcu;
                    (void)tc_call(0x801dd9ecu, &a);
                } else {
                    if (f31 < (f64)rdf32(0x805762a4u)) {
                        f1 = tc_callf(0x80040a00u, &a);
                        f0 = (f64)rdf32(0x805762a8u);
                        f1 = (f64)(f32)((f64)rdf32(0x80576298u) * f1);
                        c0lt = f1 < f0;
                        if (((((c0lt << 0x1fu) | ((f1 > f0) << 0x1eu) | ((c0lt || (f1 == f0)) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                            a.r[0] = param_1;
                            a.r[1] = 0xbu;
                            (void)tc_call(0x801dd9ecu, &a);
                            return;
                        }
                        a.r[0] = param_1;
                        a.r[1] = 2u;
                        (void)tc_call(0x801dd9ecu, &a);
                    } else {
                        f1 = tc_callf(0x80040a00u, &a);
                        f0 = (f64)rdf32(0x805762a8u);
                        f1 = (f64)(f32)((f64)rdf32(0x80576298u) * f1);
                        c0lt = f1 < f0;
                        if (((((c0lt << 0x1fu) | ((f1 > f0) << 0x1eu) | ((c0lt || (f1 == f0)) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                            a.r[0] = param_1;
                            a.r[1] = 0xbu;
                            (void)tc_call(0x801dd9ecu, &a);
                        } else {
                            a.r[0] = param_1;
                            a.r[1] = 1u;
                            (void)tc_call(0x801dd9ecu, &a);
                        }
                    }
                }
            }
        }
    }
    return;
}
