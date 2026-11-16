#include "tc_rt.h"

u32 fn_800a8f70(u32 param_1)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800a8c20u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x800a8e24u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x800a8aa8u, &a);
    a.r[0] = param_1;
    r3 = tc_call(0x800a8c40u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r31 = r3;
    if (r3 == 0u) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x140u), &a);
        if (r3 != 0u) {
            wr32(param_1 + 0x2bcu, 1u);
            r3 = 0u;
            wr32(param_1 + 0x1a4u, 0u);
            return r3;
        }
        wr32(param_1 + 0x2bcu, 0u);
        wr32(param_1 + 0x1a4u, rd32(0x804863d8u));
    } else {
        wr32(param_1 + 0x2bcu, 2u);
    }
    if (rd32(param_1 + 0x2b0u) != 0u) {
        c0eq = r31 == 0u;
        r31 = 0u;
        if (!c0eq) {
            r3 = rd32(param_1 + 0x2f8u);
            f1 = (f64)rdf32(param_1 + 0x2e0u);
            if (!(f1 < (f64)rdf32(r3))) {
                if (!(f1 > (f64)rdf32(r3 + 4u))) {
                    wr32(param_1 + 0x304u, 2u);
                } else {
                    wr32(param_1 + 0x304u, 1u);
                }
            } else {
                wr32(param_1 + 0x304u, 0u);
            }
        } else {
            r31 = 2u;
        }
        if (r31 == 0u) {
            a.r[0] = param_1;
            (void)tc_call(0x800a8aecu, &a);
            r0 = rd32(param_1 + 0x304u);
            r31 = 7u;
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                f31 = (f64)rdf32(rd32(param_1 + 0x300u) + 8u);
                f1 = tc_callf(0x80040a00u, &a);
                f0 = (f64)(f32)((f64)rdf32(0x80572b94u) * f1);
                c0lt = f0 < f31;
                if (((((c0lt << 0x1fu) | ((f0 > f31) << 0x1eu) | ((c0lt || (f0 == f31)) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u) == 0u) {
                    if (rd32(param_1 + 0x2d4u) != 0u) {
                        f31 = (f64)rdf32(rd32(param_1 + 0x300u) + 4u);
                        f1 = tc_callf(0x80040a00u, &a);
                        f0 = (f64)(f32)((f64)rdf32(0x80572b94u) * f1);
                        c0lt = f0 < f31;
                        if (((((c0lt << 0x1fu) | ((f0 > f31) << 0x1eu) | ((c0lt || (f0 == f31)) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                            r31 = 3u;
                        }
                    }
                } else {
                    r31 = 5u;
                }
            } else if (!c0lt) {
                if ((s32)r0 < 3) {
                    if (rd32(param_1 + 0x2d0u) != 0u) {
                        f31 = (f64)rdf32(rd32(param_1 + 0x300u));
                        f1 = tc_callf(0x80040a00u, &a);
                        f0 = (f64)(f32)((f64)rdf32(0x80572b94u) * f1);
                        c0lt = f0 < f31;
                        if (((((c0lt << 0x1fu) | ((f0 > f31) << 0x1eu) | ((c0lt || (f0 == f31)) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                            r31 = 4u;
                            wr32(param_1 + 0x2b8u, r31);
                            r3 = 1u;
                            return r3;
                        }
                    }
                    if (rd32(param_1 + 0x2d4u) != 0u) {
                        f31 = (f64)rdf32(rd32(param_1 + 0x300u) + 4u);
                        f1 = tc_callf(0x80040a00u, &a);
                        f0 = (f64)(f32)((f64)rdf32(0x80572b94u) * f1);
                        c0lt = f0 < f31;
                        if (((((c0lt << 0x1fu) | ((f0 > f31) << 0x1eu) | ((c0lt || (f0 == f31)) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                            r31 = 3u;
                            wr32(param_1 + 0x2b8u, r31);
                            r3 = 1u;
                            return r3;
                        }
                    }
                    f31 = (f64)rdf32(rd32(param_1 + 0x300u) + 8u);
                    f1 = tc_callf(0x80040a00u, &a);
                    f0 = (f64)(f32)((f64)rdf32(0x80572b94u) * f1);
                    c0lt = f0 < f31;
                    if (((((c0lt << 0x1fu) | ((f0 > f31) << 0x1eu) | ((c0lt || (f0 == f31)) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u) == 0u) {
                        f31 = (f64)rdf32(rd32(param_1 + 0x300u) + 0xcu);
                        f1 = tc_callf(0x80040a00u, &a);
                        f0 = (f64)(f32)((f64)rdf32(0x80572b94u) * f1);
                        c0lt = f0 < f31;
                        if (((((c0lt << 0x1fu) | ((f0 > f31) << 0x1eu) | ((c0lt || (f0 == f31)) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                            r31 = 6u;
                        }
                    } else {
                        r31 = 5u;
                    }
                }
            } else if ((s32)r0 >= 0) {
                if (rd32(param_1 + 0x2d0u) != 0u) {
                    f31 = (f64)rdf32(rd32(param_1 + 0x300u));
                    f1 = tc_callf(0x80040a00u, &a);
                    f0 = (f64)(f32)((f64)rdf32(0x80572b94u) * f1);
                    c0lt = f0 < f31;
                    if (((((c0lt << 0x1fu) | ((f0 > f31) << 0x1eu) | ((c0lt || (f0 == f31)) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                        r31 = 4u;
                        wr32(param_1 + 0x2b8u, r31);
                        r3 = 1u;
                        return r3;
                    }
                }
                f31 = (f64)rdf32(rd32(param_1 + 0x300u) + 0xcu);
                f1 = tc_callf(0x80040a00u, &a);
                f0 = (f64)(f32)((f64)rdf32(0x80572b94u) * f1);
                c0lt = f0 < f31;
                if (((((c0lt << 0x1fu) | ((f0 > f31) << 0x1eu) | ((c0lt || (f0 == f31)) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                    r31 = 6u;
                }
            }
        }
        wr32(param_1 + 0x2b8u, r31);
        r3 = 1u;
        return r3;
    }
    r3 = 1u;
    return r3;
}
