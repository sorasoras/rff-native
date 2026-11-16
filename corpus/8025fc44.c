#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_8025fc44(f64 param_1, f64 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f1 = param_1;
    r5 = (u32)(px_f2b(param_2) >> 0x20ull);
    r11 = (u32)px_f2b(param_2);
    r7 = r5 & 0x7fffffffu;
    r9 = (u32)(px_f2b(param_1) >> 0x20ull);
    r10 = (u32)px_f2b(param_1);
    r6 = r9 & 0x7fffffffu;
    if ((r7 | r11) != 0u) {
        if ((s32)r6 > 2146435072 || ((r6 - 0x7ff00000u) == 0u && r10 != 0u) || (s32)r7 > 2146435072 || ((r7 - 0x7ff00000u) == 0u && r11 != 0u)) {
            f1 = param_1 + param_2;
        } else {
            r4 = 0u;
            if ((s32)r9 < 0) {
                if ((s32)r7 < 1128267776) {
                    if ((s32)r7 >= 1072693248) {
                        r0 = (u32)((s32)r7 >> 20) - 0x3ffu;
                        if ((s32)r0 <= 20) {
                            if (r11 == 0u) {
                                r0 = 0x14u - r0;
                                r8 = ((r0 & 0x20u) != 0u) ? (u32)((s32)r7 >> 31) : (u32)((s32)r7 >> (s32)(r0 & 0x1fu));
                                r0 = ((r0 & 0x20u) != 0u) ? 0u : (r8 << (r0 & 0x1fu));
                                if (r7 == r0) {
                                    r4 = 2u - (r8 & 1u);
                                }
                            }
                        } else {
                            r0 = 0x34u - r0;
                            r8 = ((r0 & 0x20u) != 0u) ? 0u : (r11 >> (r0 & 0x1fu));
                            r0 = ((r0 & 0x20u) != 0u) ? 0u : (r8 << (r0 & 0x1fu));
                            if (r11 == r0) {
                                r4 = 2u - (r8 & 1u);
                            }
                        }
                    }
                } else {
                    r4 = 2u;
                }
            }
            if (r11 == 0u) {
                if ((r7 - 0x7ff00000u) == 0u) {
                    if (((r6 - 0x3ff00000u) | r10) != 0u) {
                        if ((s32)r6 < 1072693248) {
                            if ((s32)r5 >= 0) {
                                f1 = rdf64(0x80576fc0u);
                                return f1;
                            }
                            f1 = -param_2;
                            return f1;
                        }
                        if ((s32)r5 < 0) {
                            f1 = rdf64(0x80576fc0u);
                            return f1;
                        }
                        f1 = param_2;
                        return f1;
                    }
                    f1 = param_2 - param_2;
                    return f1;
                }
                if ((r7 - 0x3ff00000u) == 0u) {
                    if ((s32)r5 >= 0) {
                        return f1;
                    }
                    f1 = px_fdiv(rdf64(0x80576fb8u), param_1);
                    return f1;
                }
                if ((r5 - 0x40000000u) == 0u) {
                    f1 = param_1 * param_1;
                    return f1;
                }
                if ((r5 - 0x3fe00000u) == 0u && (s32)r9 >= 0) {
                    a.f[0] = param_1;
                    f1 = tc_callf(0x80262ec0u, &a);
                    return f1;
                }
            }
            f0 = ppc_fabs(param_1);
            wrf64(0x817fdf88u, f0);
            if (r10 != 0u || ((r6 - 0x7ff00000u) != 0u && r6 != 0u && (r6 - 0x3ff00000u) != 0u)) {
                r0 = (u32)((s32)r9 >> 31) + 1u;
                if ((r0 | r4) != 0u) {
                    if ((s32)r7 <= 1105199104) {
                        r11 = 0u;
                        if ((s32)r6 < 1048576) {
                            r11 = 0xffffffcbu;
                            f0 = f0 * rdf64(0x80577000u);
                            wrf64(0x817fdf88u, f0);
                            r6 = (u32)(px_f2b(f0) >> 0x20ull);
                        }
                        r8 = r6 & 0xfffffu;
                        r6 = (u32)((s32)r6 >> 20);
                        r7 = r8 | 0x3ff00000u;
                        r11 = r11 + r6 - 0x3ffu;
                        if ((s32)r8 > 235662) {
                            if ((s32)r8 >= 767610) {
                                r7 = r7 - 0x100000u;
                                r6 = 0u;
                                r11 = r11 + 1u;
                            } else {
                                r6 = 1u;
                            }
                        } else {
                            r6 = 0u;
                        }
                        wr32(0x817fdf88u, r7);
                        r10 = (r6 << 3u) & 0xfffffff8u;
                        f7 = rdf64(r10 - 0x7fcc2880u);
                        f10 = rdf64(0x817fdf88u);
                        f1 = rdf64(0x80576fb8u);
                        f26 = f10 - f7;
                        wrf64(0x817fdf58u, rdf64(0x80576fc0u));
                        f1 = px_fdiv(f1, f10 + f7);
                        wr32(0x817fdf58u, ((u32)((s32)r7 >> 1) | 0x20000000u) + (((r6 << 0x12u) & 0xfffc0000u) + 0x80000u));
                        f0 = rdf64(0x80577030u);
                        f4 = f26 * f1;
                        f9 = rdf64(0x817fdf58u);
                        f3 = rdf64(0x80577028u);
                        f6 = rdf64(0x80577020u);
                        f5 = f4 * f4;
                        wrf64(0x817fdf60u, f4);
                        f30 = rdf64(0x80577018u);
                        f11 = f10 - (f9 - f7);
                        f31 = rdf64(0x80577010u);
                        f7 = f0 * f5;
                        wr32(0x817fdf64u, 0u);
                        f13 = rdf64(0x80577008u);
                        f0 = rdf64(0x817fdf60u);
                        f12 = rdf64(0x80577038u);
                        f7 = f3 + f7;
                        f27 = f0 * f9;
                        f10 = rdf64(0x80577048u);
                        f9 = rdf64(0x80577050u);
                        f28 = f0 * f11;
                        f11 = rdf64(0x80577040u);
                        f29 = f6 + (f5 * f7);
                        f27 = f26 - f27;
                        f8 = rdf64(r10 - 0x7fcc2860u);
                        f6 = px_b2f((u64)(r11 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805770c0u);
                        f29 = f5 * f29;
                        f28 = f27 - f28;
                        wrf64(0x817fdf68u, f6);
                        f3 = f0 * f0;
                        f26 = f1 * f28;
                        f7 = f5 * (f30 + f29);
                        f29 = f5 * f5;
                        f31 = f31 + f7;
                        f5 = f5 * f31;
                        f5 = f13 + f5;
                        f13 = (f29 * f5) + (f26 * (f0 + f4));
                        wrf64(0x817fdf58u, f12 + f3 + f13);
                        wr32(0x817fdf5cu, 0u);
                        f7 = rdf64(0x817fdf58u);
                        f3 = f7 - f12 - f3;
                        f5 = f0 * f7;
                        f4 = (f26 * f7) + ((f13 - f3) * f4);
                        wrf64(0x817fdf80u, f5 + f4);
                        wr32(0x817fdf84u, 0u);
                        f3 = rdf64(0x817fdf80u);
                        f1 = f10 * f3;
                        f0 = f4 - (f3 - f5);
                        f3 = f11 * f3;
                        f0 = f9 * f0;
                        f0 = f1 + f0;
                        f4 = f8 + f0;
                        f1 = rdf64(r10 - 0x7fcc2870u);
                        wrf64(0x817fdf70u, f6 + (f3 + f4 + f1));
                        wr32(0x817fdf74u, 0u);
                        f0 = f4 - (rdf64(0x817fdf70u) - f6 - f1 - f3);
                    } else {
                        if ((s32)r7 > 1139802112) {
                            if ((s32)r6 <= 1072693247) {
                                if ((s32)r5 >= 0) {
                                    f1 = rdf64(0x80576fc0u);
                                    return f1;
                                }
                                f1 = rdf64(0x80576fc8u);
                                return f1;
                            }
                            if ((s32)r6 >= 1072693248) {
                                if ((s32)r5 <= 0) {
                                    f1 = rdf64(0x80576fc0u);
                                    return f1;
                                }
                                f1 = rdf64(0x80576fc8u);
                                return f1;
                            }
                        }
                        if ((s32)r6 < 1072693247) {
                            if ((s32)r5 >= 0) {
                                f1 = rdf64(0x80576fc0u);
                                return f1;
                            }
                            f1 = rdf64(0x80576fc8u);
                            return f1;
                        }
                        if ((s32)r6 > 1072693248) {
                            if ((s32)r5 <= 0) {
                                f1 = rdf64(0x80576fc0u);
                                return f1;
                            }
                            f1 = rdf64(0x80576fc8u);
                            return f1;
                        }
                        f8 = param_1 - rdf64(0x80576fb8u);
                        f1 = rdf64(0x80576ff0u);
                        f5 = rdf64(0x80576fd8u);
                        f3 = rdf64(0x80576fe8u);
                        f6 = rdf64(0x80576fe0u) * f8;
                        f4 = rdf64(0x80576fd0u);
                        f0 = rdf64(0x80576ff8u);
                        wrf64(0x817fdf68u, f8);
                        f5 = f5 - f6;
                        f6 = f3 * f8;
                        f5 = f8 * f5;
                        f1 = f1 * f8;
                        f0 = f0 * (f8 * f8 * (f4 - f5));
                        f1 = f1 - f0;
                        wrf64(0x817fdf70u, f6 + f1);
                        wr32(0x817fdf74u, 0u);
                        f0 = f1 - (rdf64(0x817fdf70u) - f6);
                    }
                    f31 = rdf64(0x80576fb8u);
                    r0 = r0 | (r4 - 1u);
                    if (r0 == 0u) {
                        f31 = rdf64(0x80577058u);
                    }
                    wrf64(0x817fdf78u, param_2);
                    f0 = param_2 * f0;
                    f1 = rdf64(0x817fdf70u);
                    wr32(0x817fdf7cu, 0u);
                    f3 = rdf64(0x817fdf78u);
                    f2 = param_2 - f3;
                    f3 = f3 * f1;
                    f1 = f1 * f2;
                    wrf64(0x817fdf80u, f3);
                    f11 = f1 + f0;
                    f0 = f11 + f3;
                    wrf64(0x817fdf90u, f0);
                    r6 = (u32)(px_f2b(f0) >> 0x20ull);
                    r5 = (u32)px_f2b(f0);
                    if ((s32)r6 < 1083179008) {
                        if ((s32)(r6 & 0x7fffffffu) >= 1083231232) {
                            if (((r6 + 0x3f6f3400u) | r5) != 0u) {
                                f1 = rdf64(0x80577070u);
                                f1 = f1 * (f1 * f31);
                                return f1;
                            }
                            f0 = f0 - f3;
                            if ((f11 < f0) || (f11 == f0)) {
                                f1 = rdf64(0x80577070u);
                                f1 = f1 * (f1 * f31);
                                return f1;
                            }
                        }
                    } else {
                        if (((r6 - 0x40900000u) | r5) != 0u) {
                            f1 = rdf64(0x80577060u);
                            f1 = f1 * (f1 * f31);
                            return f1;
                        }
                        f0 = f0 - f3;
                        if ((rdf64(0x80577068u) + f11) > f0) {
                            f1 = rdf64(0x80577060u);
                            f1 = f1 * (f1 * f31);
                            return f1;
                        }
                    }
                    r4 = (r6 >> 0x14u) & 0x7ffu;
                    r3 = 0u;
                    if ((s32)(r6 & 0x7fffffffu) > 1071644672) {
                        r0 = r4 - 0x3feu;
                        r0 = ((r0 & 0x20u) != 0u) ? 0u : (u32)(1048576 >> (s32)(r0 & 0x1fu));
                        r7 = r6 + r0;
                        wrf64(0x817fdf68u, rdf64(0x80576fc0u));
                        r5 = (u32)((s32)(r7 & 0x7fffffffu) >> 20) - 0x3ffu;
                        r3 = (r7 & 0xfffffu) | 0x100000u;
                        r0 = 0x14u - r5;
                        wr32(0x817fdf68u, r7 & ~(((r5 & 0x20u) != 0u) ? 0u : (u32)(1048575 >> (s32)(r5 & 0x1fu))));
                        r3 = ((r0 & 0x20u) != 0u) ? (u32)((s32)r3 >> 31) : (u32)((s32)r3 >> (s32)(r0 & 0x1fu));
                        if ((s32)r6 < 0) {
                            r3 = 0u - r3;
                        }
                        f3 = f3 - rdf64(0x817fdf68u);
                        wrf64(0x817fdf80u, f3);
                    }
                    f0 = rdf64(0x80577088u);
                    r4 = (r3 << 0x14u) & 0xfff00000u;
                    f8 = rdf64(0x80577080u);
                    wrf64(0x817fdf68u, f11 + f3);
                    f10 = rdf64(0x80577078u);
                    wr32(0x817fdf6cu, 0u);
                    f9 = rdf64(0x817fdf68u);
                    f1 = rdf64(0x805770a8u);
                    f2 = f9 - f3;
                    f5 = rdf64(0x805770a0u);
                    f7 = f0 * f9;
                    f4 = rdf64(0x80577098u);
                    f3 = rdf64(0x80577090u);
                    f0 = f11 - f2;
                    f10 = f10 * f9;
                    f2 = rdf64(0x805770b8u);
                    f8 = f8 * f0;
                    f0 = rdf64(0x80576fb8u);
                    f11 = f8 + f7;
                    f9 = f10 + f11;
                    f7 = f9 * f9;
                    f6 = rdf64(0x805770b0u) * f7;
                    wrf64(0x817fdf68u, f7);
                    f8 = f11 - (f9 - f10);
                    f6 = f1 + f6;
                    f6 = f7 * f6;
                    f5 = f5 + f6;
                    f5 = f7 * f5;
                    f4 = f4 + f5;
                    f4 = f7 * f4;
                    f3 = f3 + f4;
                    f3 = f7 * f3;
                    f4 = f9 - f3;
                    wrf64(0x817fdf70u, f4);
                    f2 = f4 - f2;
                    f2 = px_fdiv(f9 * f4, f2);
                    f1 = f0 - (f2 - (f8 + (f9 * f8)) - f9);
                    wrf64(0x817fdf90u, f1);
                    if (((s32)((u32)(px_f2b(f1) >> 0x20ull) + r4) >> 20) > 0) {
                        wr32(0x817fdf90u, (u32)(px_f2b(f1) >> 0x20ull) + r4);
                    } else {
                        a.f[0] = f1;
                        a.r[0] = r3;
                        f1 = tc_callf(0x8025ec98u, &a);
                        wrf64(0x817fdf90u, f1);
                    }
                    f1 = f31 * rdf64(0x817fdf90u);
                } else {
                    wr32(0x805719c0u, 0x21u);
                    f1 = (f64)rdf32(0x80570c00u);
                }
            } else {
                wrf64(0x817fdf90u, f0);
                if ((s32)r5 < 0) {
                    f0 = px_fdiv(rdf64(0x80576fb8u), f0);
                    wrf64(0x817fdf90u, f0);
                }
                if ((s32)r9 < 0) {
                    if (((r6 - 0x3ff00000u) | r4) != 0u) {
                        if (r4 == 1u) {
                            f0 = -f0;
                            wrf64(0x817fdf90u, f0);
                        }
                    } else {
                        f0 = f0 - f0;
                        f0 = px_fdiv(f0, f0);
                        wrf64(0x817fdf90u, f0);
                    }
                }
                f1 = f0;
            }
        }
    } else {
        f1 = rdf64(0x80576fb8u);
    }
    return f1;
}
