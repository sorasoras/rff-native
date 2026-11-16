#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_8025f2dc(f64 param_1, f64 param_2)
{
    u32 c0lt = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = param_1;
    r8 = (u32)px_f2b(param_2);
    r4 = (u32)(px_f2b(param_2) >> 0x20ull);
    r6 = r4 & 0x7fffffffu;
    r5 = (u32)(px_f2b(param_1) >> 0x20ull);
    r9 = (u32)px_f2b(param_1);
    r7 = r5 & 0x7fffffffu;
    if ((r6 | (((r8 | (0u - r8)) >> 0x1fu) & 1u)) > 0x7ff00000u || (r7 | (((r9 | (0u - r9)) >> 0x1fu) & 1u)) > 0x7ff00000u) {
        f1 = param_2 + param_1;
    } else if (((r4 - 0x3ff00000u) | r8) != 0u) {
        r31 = ((r4 >> 0x1eu) & 2u) | ((r5 >> 0x1fu) & 1u);
        if ((r7 | r9) == 0u) {
            c0lt = (s32)r31 < 2;
            if (r31 == 2u) {
                f1 = rdf64(0x80576eb0u);
                return f1;
            }
            if (!c0lt) {
                if ((s32)r31 < 4) {
                    f1 = rdf64(0x80576eb8u);
                    return f1;
                }
            } else if ((s32)r31 >= 0) {
                return f1;
            }
        }
        if ((r6 | r8) != 0u) {
            if ((r6 - 0x7ff00000u) == 0u) {
                if ((r7 - 0x7ff00000u) != 0u) {
                    c0lt = (s32)r31 < 2;
                    if (r31 == 2u) {
                        f1 = rdf64(0x80576eb0u);
                        return f1;
                    }
                    if (!c0lt) {
                        if ((s32)r31 < 4) {
                            f1 = rdf64(0x80576eb8u);
                            return f1;
                        }
                    } else {
                        c0lt = (s32)r31 < 0;
                        if (r31 == 0u) {
                            f1 = rdf64(0x80576ef0u);
                            return f1;
                        }
                        if (!c0lt) {
                            f1 = rdf64(0x80576ef8u);
                            return f1;
                        }
                    }
                } else {
                    c0lt = (s32)r31 < 2;
                    if (r31 == 2u) {
                        f1 = rdf64(0x80576ee0u);
                        return f1;
                    }
                    if (!c0lt) {
                        if ((s32)r31 < 4) {
                            f1 = rdf64(0x80576ee8u);
                            return f1;
                        }
                    } else {
                        c0lt = (s32)r31 < 0;
                        if (r31 == 0u) {
                            f1 = rdf64(0x80576ed0u);
                            return f1;
                        }
                        if (!c0lt) {
                            f1 = rdf64(0x80576ed8u);
                            return f1;
                        }
                    }
                }
            }
            if ((r7 - 0x7ff00000u) != 0u) {
                r0 = (u32)((s32)(r7 - r6) >> 20);
                if ((s32)r0 <= 60) {
                    if ((s32)r4 >= 0 || (s32)r0 >= -60) {
                        a.f[0] = ppc_fabs(px_fdiv(param_1, param_2));
                        f1 = tc_callf(0x80262358u, &a);
                        wrf64(0x817fdfe8u, f1);
                    } else {
                        f1 = rdf64(0x80576ef0u);
                        wrf64(0x817fdfe8u, f1);
                    }
                } else {
                    f1 = rdf64(0x80576ec8u);
                    wrf64(0x817fdfe8u, f1);
                }
                c0lt = (s32)r31 < 1;
                if (r31 == 1u) {
                    wr32(0x817fdfe8u, (u32)(px_f2b(f1) >> 0x20ull) ^ 0x80000000u);
                    f1 = rdf64(0x817fdfe8u);
                } else {
                    if (!c0lt) {
                        if ((s32)r31 < 3) {
                            f1 = f1 - rdf64(0x80576f00u);
                            f1 = rdf64(0x80576eb0u) - f1;
                            return f1;
                        }
                    } else if ((s32)r31 >= 0) {
                        return f1;
                    }
                    f1 = f1 - rdf64(0x80576f00u);
                    f1 = f1 - rdf64(0x80576eb0u);
                }
            } else if ((s32)r5 >= 0) {
                f1 = rdf64(0x80576ec8u);
            } else {
                f1 = rdf64(0x80576ec0u);
            }
        } else if ((s32)r5 >= 0) {
            f1 = rdf64(0x80576ec8u);
        } else {
            f1 = rdf64(0x80576ec0u);
        }
    } else {
        a.f[0] = param_1;
        f1 = tc_callf(0x80262358u, &a);
    }
    return f1;
}
