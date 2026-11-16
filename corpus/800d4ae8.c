#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_800d4ae8(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0, f30 = 0.0;
    TcArgs a = {0};
    if ((u32)((s32)((rd32((u32)param_1 + 0x72cu) << 3u) & 0xc0000000u) >> 31) != 0u) {
        a.r[0] = (u32)param_1 + 0x4bcu;
        (void)tc_call(0x800d3228u, &a);
        if ((u32)((s32)((rd32((u32)param_1 + 0x72cu) << 4u) & 0xc0000000u) >> 31) != 0u) {
            r5 = rd32((u32)param_1 + 0x728u);
            r0 = rd32(0x803541bcu);
            if (r0 != 0u) {
                r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r4 = 0u;
                    } else {
                        r4 = rd32(((r5 << 2u) & 0xfffffffcu) - 0x7fcabe9cu);
                    }
                } else {
                    r4 = rd32(((r5 << 2u) & 0xfffffffcu) - 0x7fcabed0u);
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
            r31 = (((0u - r4) | r4) >> 0x1fu) & 1u;
            if (r31 == 0u) {
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
                r31 = (((0u - r4) | r4) >> 0x1fu) & 1u;
            }
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
                        r29 = 0u;
                    } else {
                        r29 = r4 & rd32(rd32(0x803541a8u));
                    }
                } else {
                    r29 = r4 & rd32(rd32(0x80354198u));
                }
            } else {
                r29 = 0u;
            }
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
                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r0 != 1u) {
                    if (r0 != 2u) {
                        r28 = 0u;
                    } else {
                        r28 = r4 & rd32(rd32(0x803541acu));
                    }
                } else {
                    r28 = r4 & rd32(rd32(0x8035419cu));
                }
            } else {
                r28 = 0u;
            }
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800d5790u, &a);
            if (r3 == 0u) {
                if (r31 != 0u || r29 != 0u) {
                    a.r[0] = (u32)param_1 + 0x4bcu;
                    (void)tc_call(0x800d3338u, &a);
                }
                if (r28 != 0u) {
                    a.r[0] = (u32)param_1 + 0x4bcu;
                    r3 = tc_call(0x800d3184u, &a);
                    if (r3 == 0u) {
                        a.r[0] = (u32)param_1 + 0x4bcu;
                        (void)tc_call(0x800d3338u, &a);
                    }
                }
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x800d51c0u, &a);
                if (r3 != 0u) {
                    a.r[0] = 0x80338926u;
                    r3 = tc_call(0x8011df4cu, &a);
                    a.r[0] = r3;
                    f1 = tc_callf(0x8011c8fcu, &a);
                    f30 = (f64)rdf32((u32)param_1 + 0x4ecu);
                    r3 = tc_call(0x8003c9c8u, &a);
                    r3 = r3 ^ 0x80000000u;
                    f30 = (f64)(f32)(f30 + (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x80573158u)));
                    a.f[0] = f30;
                    a.f[1] = f1;
                    f1 = tc_callf(0x80262c6cu, &a);
                    wrf32d((u32)param_1 + 0x4ecu, (f64)(f32)f1);
                }
            } else {
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x800d48dcu, &a);
                if (r3 != 0u) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = r3;
                    (void)tc_call(0x800d5520u, &a);
                    a.r[0] = (u32)param_1;
                    a.r[1] = 1u;
                    (void)tc_call(0x800d5bc8u, &a);
                }
                r28 = 0x7fffffffu;
                if (r31 == 0u) {
                    if (r29 != 0u) {
                        a.r[0] = (u32)param_1;
                        r3 = tc_call(0x800d5950u, &a);
                        if (r3 == 0u) {
                            a.r[0] = (u32)param_1;
                            a.r[1] = 4u;
                            (void)tc_call(0x800d5bc8u, &a);
                        } else {
                            a.r[0] = (u32)param_1;
                            a.r[1] = 3u;
                            (void)tc_call(0x800d5bc8u, &a);
                            r28 = 0xffffffffu;
                        }
                    }
                } else {
                    a.r[0] = (u32)param_1;
                    r3 = tc_call(0x800d569cu, &a);
                    r29 = r3;
                    a.r[0] = (u32)param_1;
                    a.r[1] = r3;
                    r3 = tc_call(0x800d58e4u, &a);
                    if (r3 == 0u) {
                        a.r[0] = (u32)param_1;
                        a.r[1] = 4u;
                        (void)tc_call(0x800d5bc8u, &a);
                    } else {
                        a.r[0] = (u32)param_1;
                        a.r[1] = 2u;
                        (void)tc_call(0x800d5bc8u, &a);
                        r28 = r29;
                    }
                }
                if ((r28 - 0x7fff0000u) != 0xffffu) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = r28;
                    (void)tc_call(0x800d57f8u, &a);
                    a.r[0] = (u32)param_1 + 0x4bcu;
                    (void)tc_call(0x800d3338u, &a);
                }
            }
        }
    }
    return;
}
