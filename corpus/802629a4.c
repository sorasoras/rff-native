#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

f64 fn_802629a4(f64 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = param_1;
    wrf64(0x817fdfe8u, param_1);
    a.f[0] = param_1;
    r3 = tc_call(0x8025960cu, &a);
    if ((s32)r3 <= 2 || rdf64(0x80577270u) == param_1) {
        f1 = param_1;
    } else {
        r5 = (u32)(px_f2b(param_1) >> 0x20ull);
        r3 = (u32)px_f2b(param_1);
        r4 = (r5 >> 0x14u) & 0x7ffu;
        if (r4 == 0u) {
            if ((r3 | (r5 & 0x7fffffffu)) == 0u) {
                f1 = param_1;
                return f1;
            }
            f31 = param_1 * rdf64(0x80577278u);
            wrf64(0x817fdfe8u, f31);
            r5 = (u32)(px_f2b(f31) >> 0x20ull);
            r4 = ((r5 >> 0x14u) & 0x7ffu) - 0x36u;
            if (param_2 < -50000) {
                f1 = rdf64(0x80577280u) * f31;
                return f1;
            }
        }
        if (r4 == 0x7ffu) {
            f1 = f31 + f31;
        } else {
            r4 = r4 + (u32)param_2;
            if ((s32)r4 > 2046) {
                a.f[0] = rdf64(0x80577288u);
                a.f[1] = f31;
                f1 = tc_callf(0x802626d8u, &a);
                f1 = rdf64(0x80577288u) * f1;
            } else {
                if ((s32)r4 > 0) {
                    wr32(0x817fdfe8u, (r5 & 0x800fffffu) | ((r4 << 0x14u) & 0xfff00000u));
                    f1 = rdf64(0x817fdfe8u);
                } else {
                    if ((s32)r4 <= -54) {
                        if (param_2 > 50000) {
                            a.f[0] = rdf64(0x80577288u);
                            a.f[1] = f31;
                            f1 = tc_callf(0x802626d8u, &a);
                            f1 = rdf64(0x80577288u) * f1;
                            return f1;
                        }
                        a.f[0] = rdf64(0x80577280u);
                        a.f[1] = f31;
                        f1 = tc_callf(0x802626d8u, &a);
                        f1 = rdf64(0x80577280u) * f1;
                    } else {
                        f1 = rdf64(0x80577290u);
                        wr32(0x817fdfe8u, (r5 & 0x800fffffu) | (((r4 + 0x36u) << 0x14u) & 0xfff00000u));
                        f1 = f1 * rdf64(0x817fdfe8u);
                    }
                }
            }
        }
    }
    return f1;
}
