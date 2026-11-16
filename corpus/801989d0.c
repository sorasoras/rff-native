#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801989d0(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    c0lt = param_2 < 2;
    if ((u32)param_2 != 2u) {
        if (!c0lt) {
            if (param_2 >= 4) {
                return;
            }
            r0 = rd32((u32)param_1 + 0xb4u);
            c0lt = (s32)r0 < 2;
            if (r0 == 2u) {
                return;
            }
            if (!c0lt) {
                if ((s32)r0 >= 4) {
                    return;
                }
                f1 = (f64)rdf32((u32)param_1 + 0xb0u);
                if (!(f1 < (f64)rdf32(0x8057566cu))) {
                    f0 = (f64)rdf32(0x80575670u);
                    if (!((f1 < f0) || (f1 == f0))) {
                        if (!(f1 < (f64)rdf32(0x80575648u))) {
                            f0 = (f64)rdf32(0x8057564cu);
                            if (!((f1 < f0) || (f1 == f0))) {
                                wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x8057563cu));
                                return;
                            }
                            f1 = (f64)(f32)(f0 - f1);
                            f2 = (f64)rdf32(0x80575650u);
                            f1 = (f64)(f32)(f2 - f1);
                            f1 = (f64)(f32)px_fdiv(f1, f2);
                            wrf32d((u32)param_1 + 0xacu, (f64)(f32)((f64)rdf32(0x80575638u) - f1));
                            return;
                        }
                        wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x80575638u));
                        return;
                    }
                    f0 = (f64)(f32)(f0 - f1);
                    f1 = (f64)rdf32(0x80575650u);
                    f0 = (f64)(f32)(f1 - f0);
                    f0 = (f64)(f32)px_fdiv(f0, f1);
                    wrf32d((u32)param_1 + 0xacu, f0);
                    return;
                }
                wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x8057563cu));
                return;
            }
            if ((s32)r0 >= 1) {
                f1 = (f64)rdf32((u32)param_1 + 0xb0u);
                if (!(f1 < (f64)rdf32(0x80575648u))) {
                    f0 = (f64)rdf32(0x8057564cu);
                    if (!((f1 < f0) || (f1 == f0))) {
                        if (!(f1 < (f64)rdf32(0x8057565cu))) {
                            f3 = (f64)rdf32(0x8057563cu);
                            f0 = (f64)(f32)((f64)rdf32(0x80575638u) - (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x80575650u) - (f64)(f32)((f64)rdf32(0x80575644u) - f1)), (f64)rdf32(0x80575660u)));
                            if (!(f3 > f0)) {
                                f3 = f0;
                            }
                            wrf32d((u32)param_1 + 0xacu, f3);
                            return;
                        }
                        wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x80575638u));
                        return;
                    }
                    f0 = (f64)(f32)(f0 - f1);
                    f1 = (f64)rdf32(0x80575650u);
                    f0 = (f64)(f32)(f1 - f0);
                    f0 = (f64)(f32)px_fdiv(f0, f1);
                    wrf32d((u32)param_1 + 0xacu, f0);
                    return;
                }
                wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x8057563cu));
                return;
            }
            return;
        }
        c0lt = param_2 < 0;
        if ((u32)param_2 != 0u) {
            if (!c0lt) {
                r0 = rd32((u32)param_1 + 0xb4u);
                c0lt = (s32)r0 < 2;
                if (r0 == 2u) {
                    return;
                }
                if (!c0lt) {
                    if ((s32)r0 >= 4) {
                        return;
                    }
                    f1 = (f64)rdf32((u32)param_1 + 0xb0u);
                    if (!(f1 < (f64)rdf32(0x80575654u))) {
                        f0 = (f64)rdf32(0x80575658u);
                        if (!((f1 < f0) || (f1 == f0))) {
                            if (!(f1 < (f64)rdf32(0x80575664u))) {
                                f0 = (f64)rdf32(0x80575668u);
                                if (!((f1 < f0) || (f1 == f0))) {
                                    wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x8057563cu));
                                    return;
                                }
                                f1 = (f64)(f32)(f0 - f1);
                                f2 = (f64)rdf32(0x80575650u);
                                f1 = (f64)(f32)(f2 - f1);
                                f1 = (f64)(f32)px_fdiv(f1, f2);
                                wrf32d((u32)param_1 + 0xacu, (f64)(f32)((f64)rdf32(0x80575638u) - f1));
                                return;
                            }
                            wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x80575638u));
                            return;
                        }
                        f0 = (f64)(f32)(f0 - f1);
                        f1 = (f64)rdf32(0x80575650u);
                        f0 = (f64)(f32)(f1 - f0);
                        f0 = (f64)(f32)px_fdiv(f0, f1);
                        wrf32d((u32)param_1 + 0xacu, f0);
                        return;
                    }
                    wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x8057563cu));
                    return;
                }
                if ((s32)r0 >= 1) {
                    f1 = (f64)rdf32((u32)param_1 + 0xb0u);
                    if (!(f1 < (f64)rdf32(0x80575664u))) {
                        f0 = (f64)rdf32(0x80575668u);
                        if (!((f1 < f0) || (f1 == f0))) {
                            if (!(f1 < (f64)rdf32(0x8057565cu))) {
                                f3 = (f64)rdf32(0x8057563cu);
                                f0 = (f64)(f32)((f64)rdf32(0x80575638u) - (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x80575650u) - (f64)(f32)((f64)rdf32(0x80575644u) - f1)), (f64)rdf32(0x80575660u)));
                                if (!(f3 > f0)) {
                                    f3 = f0;
                                }
                                wrf32d((u32)param_1 + 0xacu, f3);
                                return;
                            }
                            wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x80575638u));
                            return;
                        }
                        f0 = (f64)(f32)(f0 - f1);
                        f1 = (f64)rdf32(0x80575650u);
                        f0 = (f64)(f32)(f1 - f0);
                        f0 = (f64)(f32)px_fdiv(f0, f1);
                        wrf32d((u32)param_1 + 0xacu, f0);
                        return;
                    }
                    wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x8057563cu));
                    return;
                }
                return;
            }
            return;
        }
    }
    r0 = rd32((u32)param_1 + 0xb4u);
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        return;
    }
    if (!c0lt) {
        if ((s32)r0 >= 4) {
            return;
        }
        f1 = (f64)rdf32((u32)param_1 + 0xb0u);
        if (!(f1 < (f64)rdf32(0x80575648u))) {
            f0 = (f64)rdf32(0x8057564cu);
            if (!((f1 < f0) || (f1 == f0))) {
                if (!(f1 < (f64)rdf32(0x80575654u))) {
                    f0 = (f64)rdf32(0x80575658u);
                    if (!((f1 < f0) || (f1 == f0))) {
                        wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x8057563cu));
                        return;
                    }
                    f1 = (f64)(f32)(f0 - f1);
                    f2 = (f64)rdf32(0x80575650u);
                    f1 = (f64)(f32)(f2 - f1);
                    f1 = (f64)(f32)px_fdiv(f1, f2);
                    wrf32d((u32)param_1 + 0xacu, (f64)(f32)((f64)rdf32(0x80575638u) - f1));
                    return;
                }
                wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x80575638u));
                return;
            }
            f0 = (f64)(f32)(f0 - f1);
            f1 = (f64)rdf32(0x80575650u);
            f0 = (f64)(f32)(f1 - f0);
            f0 = (f64)(f32)px_fdiv(f0, f1);
            wrf32d((u32)param_1 + 0xacu, f0);
            return;
        }
        wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x8057563cu));
        return;
    }
    if ((s32)r0 >= 1) {
        f1 = (f64)rdf32((u32)param_1 + 0xb0u);
        if (!(f1 < (f64)rdf32(0x80575654u))) {
            f0 = (f64)rdf32(0x80575658u);
            if (!((f1 < f0) || (f1 == f0))) {
                if (!(f1 < (f64)rdf32(0x8057565cu))) {
                    f3 = (f64)rdf32(0x8057563cu);
                    f0 = (f64)(f32)((f64)rdf32(0x80575638u) - (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x80575650u) - (f64)(f32)((f64)rdf32(0x80575644u) - f1)), (f64)rdf32(0x80575660u)));
                    if (!(f3 > f0)) {
                        f3 = f0;
                    }
                    wrf32d((u32)param_1 + 0xacu, f3);
                    return;
                }
                wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x80575638u));
                return;
            }
            f0 = (f64)(f32)(f0 - f1);
            f1 = (f64)rdf32(0x80575650u);
            f0 = (f64)(f32)(f1 - f0);
            f0 = (f64)(f32)px_fdiv(f0, f1);
            wrf32d((u32)param_1 + 0xacu, f0);
            return;
        }
        wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x8057563cu));
        return;
    }
    return;
}
