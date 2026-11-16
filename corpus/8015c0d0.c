#include "tc_rt.h"

void fn_8015c0d0(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8015c5dcu, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800d3228u, &a);
        a.f[0] = (f64)(f32)((f64)rdf32((u32)param_1 + 0x43cu) + (f64)rdf32((u32)param_1 + 0x440u));
        a.f[1] = (f64)rdf32(0x805749a8u);
        a.f[2] = (f64)rdf32(0x805749acu);
        f1 = tc_callf(0x800acaf8u, &a);
        wrf32d((u32)param_1 + 0x43cu, f1);
        r0 = rd32(0x803541bcu);
        if (r0 != 0u) {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 != 1u) {
                if (r3 != 2u) {
                    r4 = 0u;
                } else {
                    r4 = rd32(0x80354174u);
                }
            } else {
                r4 = rd32(0x80354140u);
            }
        } else {
            r4 = 0u;
        }
        if (r0 != 0u) {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 != 1u) {
                if (r3 != 2u) {
                    r4 = 0u;
                } else {
                    r4 = r4 & rd32(rd32(0x803541a8u));
                }
            } else {
                r4 = r4 & rd32(rd32(0x80354198u));
            }
        } else {
            r4 = 0u;
        }
        r30 = (((0u - r4) | r4) >> 0x1fu) & 1u;
        if (r30 == 0u) {
            if (r0 != 0u) {
                r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r4 = 0u;
                    } else {
                        r4 = rd32(0x80354178u);
                    }
                } else {
                    r4 = rd32(0x80354144u);
                }
            } else {
                r4 = 0u;
            }
            if (r0 != 0u) {
                r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r4 = 0u;
                    } else {
                        r4 = r4 & rd32(rd32(0x803541a8u));
                    }
                } else {
                    r4 = r4 & rd32(rd32(0x80354198u));
                }
            } else {
                r4 = 0u;
            }
            r30 = (((0u - r4) | r4) >> 0x1fu) & 1u;
        }
        if (r30 == 0u) {
            if (r0 != 0u) {
                r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r4 = 0u;
                    } else {
                        r4 = rd32(0x80354190u);
                    }
                } else {
                    r4 = rd32(0x8035415cu);
                }
            } else {
                r4 = 0u;
            }
            if (r0 != 0u) {
                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r0 != 1u) {
                    if (r0 != 2u) {
                        r3 = 0u;
                    } else {
                        r3 = r4 & rd32(rd32(0x803541a8u));
                    }
                } else {
                    r3 = r4 & rd32(rd32(0x80354198u));
                }
            } else {
                r3 = 0u;
            }
            r30 = (((0u - r3) | r3) >> 0x1fu) & 1u;
        }
        r3 = rd32((u32)param_1 + 0x450u);
        if (r3 != 0u) {
            r30 = 0u;
        }
        r0 = rd32((u32)param_1 + 0x444u);
        c0lt = (s32)r0 < 2;
        if (r0 == 2u) {
            if (r3 == 0u) {
                if (r30 != 0u) {
                    f1 = (f64)rdf32((u32)param_1 + 0x440u);
                    f0 = (f64)rdf32(0x805749d0u);
                    wr32((u32)param_1 + 0x444u, 3u);
                    f0 = (f64)(f32)(f1 * f0);
                    wrf32d((u32)param_1 + 0x440u, f0);
                }
            } else {
                r0 = rd32((u32)param_1 + 0x448u) - 1u;
                wr32((u32)param_1 + 0x448u, r0);
                if ((s32)r0 <= 0) {
                    f1 = (f64)rdf32((u32)param_1 + 0x440u);
                    f0 = (f64)rdf32(0x805749d0u);
                    wr32((u32)param_1 + 0x444u, 3u);
                    f0 = (f64)(f32)(f1 * f0);
                    wrf32d((u32)param_1 + 0x440u, f0);
                }
            }
        } else if (!c0lt) {
            if ((s32)r0 < 4) {
                f1 = (f64)rdf32(0x805749a8u);
                if (f1 == (f64)rdf32((u32)param_1 + 0x440u)) {
                    wrf32d((u32)param_1 + 0x43cu, f1);
                }
                f1 = (f64)rdf32((u32)param_1 + 0x43cu);
                f0 = (f64)rdf32(0x805749a8u);
                if (!((f1 < f0) || (f1 == f0))) {
                    if (r30 != 0u) {
                        wrf32d((u32)param_1 + 0x43cu, f0);
                    }
                } else {
                    wr32((u32)param_1 + 0x444u, 4u);
                }
            }
        } else if ((s32)r0 >= 1) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800d3184u, &a);
            if (r3 != 0u) {
                f1 = (f64)rdf32((u32)param_1 + 0x43cu);
                f0 = (f64)rdf32(0x805749acu);
                if ((f1 > f0) || (f1 == f0)) {
                    wr32((u32)param_1 + 0x444u, 2u);
                    return;
                }
            }
            if (r30 != 0u) {
                a.r[0] = (u32)param_1;
                (void)tc_call(0x800d3338u, &a);
                wrf32d((u32)param_1 + 0x43cu, (f64)rdf32(0x805749acu));
            }
        }
    }
    return;
}
