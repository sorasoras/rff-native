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

f64 fn_8025f54c(f64 param_1, f64 param_2)
{
    u32 c0eq = 0, c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u32 r11 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    f1 = param_1;
    wrf64(0x817fdfe8u, param_1);
    r7 = (u32)(px_f2b(param_1) >> 0x20ull);
    r6 = (u32)px_f2b(param_2);
    r0 = (u32)(px_f2b(param_2) >> 0x20ull) & 0x7fffffffu;
    r4 = r7 & 0x80000000u;
    r5 = (u32)px_f2b(param_1);
    r8 = r7 ^ r4;
    if ((r0 | r6) == 0u || (s32)r8 >= 2146435072 || (r0 | (((r6 | (0u - r6)) >> 0x1fu) & 1u)) > 0x7ff00000u) {
        f0 = param_1 * param_2;
        f1 = px_fdiv(f0, f0);
    } else {
        c0lt = (s32)r8 < (s32)r0;
        if ((s32)r8 <= (s32)r0) {
            if (c0lt) {
                return f1;
            }
            c0eq = r5 == r6;
            if (r5 < r6) {
                return f1;
            }
            if (c0eq) {
                f1 = rdf64(((r4 >> 0x1cu) & 8u) - 0x7fcc2890u);
                return f1;
            }
        }
        if ((s32)r8 >= 1048576) {
            r11 = (u32)((s32)r8 >> 20) - 0x3ffu;
        } else if (r8 != 0u) {
            r3 = (r8 << 0xbu) & 0xfffff800u;
            r11 = 0xfffffc02u;
            while ((s32)r3 > 0) {
                r3 = (r3 << 1u) & 0xfffffffeu;
                r11 = r11 - 1u;
            }
        } else {
            r3 = r5;
            r11 = 0xfffffbedu;
            while ((s32)r3 > 0) {
                r3 = (r3 << 1u) & 0xfffffffeu;
                r11 = r11 - 1u;
            }
        }
        if ((s32)r0 >= 1048576) {
            r3 = (u32)((s32)r0 >> 20) - 0x3ffu;
        } else if (r0 != 0u) {
            r7 = (r0 << 0xbu) & 0xfffff800u;
            r3 = 0xfffffc02u;
            while ((s32)r7 > 0) {
                r7 = (r7 << 1u) & 0xfffffffeu;
                r3 = r3 - 1u;
            }
        } else {
            r7 = r6;
            r3 = 0xfffffbedu;
            while ((s32)r7 > 0) {
                r7 = (r7 << 1u) & 0xfffffffeu;
                r3 = r3 - 1u;
            }
        }
        if ((s32)r11 < -1022) {
            r9 = 0xfffffc02u - r11;
            if ((s32)r9 > 31) {
                r7 = r9 - 0x20u;
                r9 = ((r7 & 0x20u) != 0u) ? 0u : (r5 << (r7 & 0x1fu));
                r5 = 0u;
            } else {
                r7 = 0x20u - r9;
                r8 = ((r9 & 0x20u) != 0u) ? 0u : (r8 << (r9 & 0x1fu));
                r7 = ((r7 & 0x20u) != 0u) ? 0u : (r5 >> (r7 & 0x1fu));
                r5 = ((r9 & 0x20u) != 0u) ? 0u : (r5 << (r9 & 0x1fu));
                r9 = r8 | r7;
            }
        } else {
            r9 = (r8 & 0xfffffu) | 0x100000u;
        }
        if ((s32)r3 < -1022) {
            r10 = 0xfffffc02u - r3;
            if ((s32)r10 > 31) {
                r0 = r10 - 0x20u;
                r8 = ((r0 & 0x20u) != 0u) ? 0u : (r6 << (r0 & 0x1fu));
                r6 = 0u;
            } else {
                r7 = 0x20u - r10;
                r8 = ((r10 & 0x20u) != 0u) ? 0u : (r0 << (r10 & 0x1fu));
                r0 = ((r7 & 0x20u) != 0u) ? 0u : (r6 >> (r7 & 0x1fu));
                r6 = ((r10 & 0x20u) != 0u) ? 0u : (r6 << (r10 & 0x1fu));
                r8 = r8 | r0;
            }
        } else {
            r0 = r0 & 0xfffffu;
            r8 = r0 | 0x100000u;
        }
        r0 = r11 - r3;
        ctr = r0;
        if (r0 != 0u) {
            do {
                r7 = r9 - r8;
                r10 = r5 - r6;
                if (r5 < r6) {
                    r7 = r7 - 1u;
                }
                if ((s32)r7 >= 0) {
                    if ((r7 | r10) == 0u) {
                        f1 = rdf64(((r4 >> 0x1cu) & 8u) - 0x7fcc2890u);
                        return f1;
                    }
                    r9 = ((r10 >> 0x1fu) & 1u) + ((r7 << 1u) & 0xfffffffeu);
                    r5 = (r10 << 1u) & 0xfffffffeu;
                } else {
                    r9 = ((r5 >> 0x1fu) & 1u) + ((r9 << 1u) & 0xfffffffeu);
                    r5 = r5 + r5;
                }
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
        r7 = r9 - r8;
        r0 = r5 - r6;
        if (r5 < r6) {
            r7 = r7 - 1u;
        }
        if ((s32)r7 >= 0) {
            r9 = r7;
            r5 = r0;
        }
        if ((r9 | r5) != 0u) {
            while ((s32)r9 < 1048576) {
                r9 = ((r5 >> 0x1fu) & 1u) + ((r9 << 1u) & 0xfffffffeu);
                r5 = r5 + r5;
                r3 = r3 - 1u;
            }
            if ((s32)r3 < -1022) {
                r6 = 0xfffffc02u - r3;
                if ((s32)r6 > 20) {
                    if ((s32)r6 > 31) {
                        r0 = r6 - 0x20u;
                        r3 = ((r0 & 0x20u) != 0u) ? (u32)((s32)r9 >> 31) : (u32)((s32)r9 >> (s32)(r0 & 0x1fu));
                        r9 = r4;
                    } else {
                        r3 = 0x20u - r6;
                        r3 = ((r3 & 0x20u) != 0u) ? 0u : (r9 << (r3 & 0x1fu));
                        r9 = r4;
                        r3 = r3 | (((r6 & 0x20u) != 0u) ? 0u : (r5 >> (r6 & 0x1fu)));
                    }
                } else {
                    r0 = 0x20u - r6;
                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (r9 << (r0 & 0x1fu));
                    r9 = ((r6 & 0x20u) != 0u) ? (u32)((s32)r9 >> 31) : (u32)((s32)r9 >> (s32)(r6 & 0x1fu));
                    r3 = (((r6 & 0x20u) != 0u) ? 0u : (r5 >> (r6 & 0x1fu))) | r0;
                }
                wr32(0x817fdfecu, r3);
                wr32(0x817fdfe8u, r9 | r4);
            } else {
                wr32(0x817fdfecu, r5);
                wr32(0x817fdfe8u, (r9 - 0x100000u) | (((r3 + 0x3ffu) << 0x14u) & 0xfff00000u) | r4);
            }
            f1 = rdf64(0x817fdfe8u);
        } else {
            f1 = rdf64(((r4 >> 0x1cu) & 8u) - 0x7fcc2890u);
        }
    }
    return f1;
}
