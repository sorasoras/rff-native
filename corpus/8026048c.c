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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

s32 fn_8026048c(f64 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wrf64(0x817fdfa8u, param_1);
    r31 = rd32(0x817fdfa8u);
    wr32(0x817fdff8u, 0u);
    r6 = r31 & 0x7fffffffu;
    if ((s32)r6 <= 1072243195) {
        f0 = rdf64(0x805770c8u);
        wrf64(param_2, param_1);
        wrf64(param_2 + 8u, f0);
        r3 = 0u;
    } else {
        if ((s32)r6 < 1073928572) {
            if ((s32)r31 > 0) {
                f3 = param_1 - rdf64(0x805770d0u);
                wrf64(0x817fdfb0u, f3);
                if ((r6 - 0x3ff90000u) != 0x21fbu) {
                    f2 = rdf64(0x805770d8u);
                    f1 = f3 - f2;
                    wrf64(param_2, f1);
                    wrf64(param_2 + 8u, f3 - f1 - f2);
                } else {
                    f2 = rdf64(0x805770e8u);
                    f0 = f3 - rdf64(0x805770e0u);
                    f1 = f0 - f2;
                    wrf64(0x817fdfb0u, f0);
                    f0 = f0 - f1;
                    wrf64(param_2, f1);
                    f0 = f0 - f2;
                    wrf64(param_2 + 8u, f0);
                }
                r3 = 1u;
                return (s32)r3;
            }
            f3 = rdf64(0x805770d0u) + param_1;
            wrf64(0x817fdfb0u, f3);
            if ((r6 - 0x3ff90000u) != 0x21fbu) {
                f2 = rdf64(0x805770d8u);
                f1 = f2 + f3;
                wrf64(param_2, f1);
                wrf64(param_2 + 8u, f2 + (f3 - f1));
            } else {
                f2 = rdf64(0x805770e8u);
                f0 = f3 + rdf64(0x805770e0u);
                f1 = f2 + f0;
                wrf64(0x817fdfb0u, f0);
                f0 = f0 - f1;
                wrf64(param_2, f1);
                f0 = f2 + f0;
                wrf64(param_2 + 8u, f0);
            }
            r3 = 0xffffffffu;
        } else {
            if ((s32)r6 <= 1094263291) {
                f5 = ppc_fabs(param_1);
                f0 = rdf64(0x805770f8u);
                f2 = rdf64(0x805770f0u);
                wr32(0x817fdfd8u, 0x43300000u);
                f4 = f0 * f5;
                f3 = rdf64(0x80577118u);
                f1 = rdf64(0x805770d0u);
                f0 = rdf64(0x805770d8u);
                f2 = f2 + f4;
                f2 = px_ctiw(f2, ppc_fctiwz(f2));
                wrf64(0x817fdfd0u, f2);
                r5 = rd32(0x817fdfd4u);
                wr32(0x817fdfdcu, r5 ^ 0x80000000u);
                f6 = rdf64(0x817fdfd8u) - f3;
                f1 = f1 * f6;
                f2 = f0 * f6;
                f4 = f5 - f1;
                if ((s32)r5 < 32 && r6 != rd32((((r5 - 1u) << 2u) & 0xfffffffcu) - 0x7fcc2748u)) {
                    wrf64(param_2, f4 - f2);
                } else {
                    r4 = (u32)((s32)r6 >> 20);
                    wrf64(param_2, f4 - f2);
                    if ((s32)(r4 - ((rd32(param_2) >> 0x14u) & 0x7ffu)) > 16) {
                        f2 = f4;
                        f3 = rdf64(0x805770e0u) * f6;
                        f4 = f4 - f3;
                        f2 = (rdf64(0x805770e8u) * f6) - (f2 - f4 - f3);
                        wrf64(param_2, f4 - f2);
                        if ((s32)(r4 - ((rd32(param_2) >> 0x14u) & 0x7ffu)) > 49) {
                            f2 = f4;
                            f3 = rdf64(0x80577100u) * f6;
                            f4 = f4 - f3;
                            f2 = (rdf64(0x80577108u) * f6) - (f2 - f4 - f3);
                            wrf64(param_2, f4 - f2);
                        }
                    }
                }
                f1 = rdf64(param_2);
                f0 = f4 - f1 - f2;
                wrf64(param_2 + 8u, f0);
                if ((s32)r31 < 0) {
                    f1 = -f1;
                    f0 = -f0;
                    wrf64(param_2, f1);
                    wrf64(param_2 + 8u, f0);
                    r3 = 0u - r5;
                    return (s32)r3;
                }
                r3 = r5;
            } else {
                if ((s32)r6 >= 2146435072) {
                    f0 = param_1 - param_1;
                    wrf64(param_2 + 8u, f0);
                    wrf64(param_2, f0);
                    r3 = 0u;
                } else {
                    r5 = (u32)((s32)r6 >> 20) - 0x416u;
                    r4 = rd32(0x817fdfacu);
                    wr32(0x817fdfd0u, 0x43300000u);
                    r3 = r6 - ((r5 << 0x14u) & 0xfff00000u);
                    f5 = rdf64(0x80577118u);
                    wr32(0x817fdfb4u, r4);
                    r4 = 0x817fdfd0u;
                    f4 = rdf64(0x80577110u);
                    r6 = 3u;
                    wr32(0x817fdfb0u, r3);
                    f1 = rdf64(0x805770c8u);
                    f3 = rdf64(0x817fdfb0u);
                    wr32(0x817fdfe8u, 0x43300000u);
                    wrf64(0x817fdfd8u, px_ctiw(f3, ppc_fctiwz(f3)));
                    wr32(0x817fdfd4u, rd32(0x817fdfdcu) ^ 0x80000000u);
                    f2 = rdf64(0x817fdfd0u) - f5;
                    wrf64(0x817fdfb8u, f2);
                    f3 = f4 * (f3 - f2);
                    wrf64(0x817fdfe0u, px_ctiw(f3, ppc_fctiwz(f3)));
                    wr32(0x817fdfecu, rd32(0x817fdfe4u) ^ 0x80000000u);
                    f2 = rdf64(0x817fdfe8u) - f5;
                    wrf64(0x817fdfc0u, f2);
                    f0 = f4 * (f3 - f2);
                    wrf64(0x817fdfb0u, f0);
                    wrf64(0x817fdfc8u, f0);
                    while (f1 == rdf64(r4 - 8u)) {
                        r4 = r4 - 8u;
                        r6 = r6 - 1u;
                    }
                    a.r[0] = 0x817fdfb8u;
                    a.r[1] = param_2;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = 2u;
                    a.r[5] = 0x8033d7b0u;
                    r3 = tc_call(0x80260934u, &a);
                    if ((s32)r31 < 0) {
                        r3 = 0u - r3;
                        f0 = -rdf64(param_2 + 8u);
                        wrf64(param_2, -rdf64(param_2));
                        wrf64(param_2 + 8u, f0);
                    }
                }
            }
        }
    }
    return (s32)r3;
}
