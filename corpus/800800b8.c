#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800800b8(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r4 = rd32(param_1 + 0x148u);
    if ((u32)((s32)((r4 << 4u) & 0xc0000000u) >> 31) == 0u) {
        if (rd32(param_1 + 0x268u) == 0u) {
            if ((u32)((s32)((r4 << 1u) & 0xc0000000u) >> 31) == 0u) {
                wr32(param_1 + 0x148u, r4 & 0xfbffffffu);
            }
        } else {
            r0 = rd32(param_1 + 0x270u);
            c0lt = (s32)r0 < 0;
            if (r0 == 0u) {
                r0 = r4 & 0xbfffffffu;
                r4 = rd32(param_1 + 0x274u);
                wr32(param_1 + 0x148u, r0);
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 1u;
                a.f[0] = (f64)rdf32(0x80572870u);
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
                wr32(param_1 + 0x270u, rd32(param_1 + 0x270u) + 1u);
            } else if (!c0lt && (s32)r0 < 4) {
                a.r[0] = param_1;
                f1 = tc_callf(0x80064f9cu, &a);
                f0 = (f64)rdf32(0x805728b4u);
                r4 = rd32(param_1 + 0x270u);
                f2 = (f64)(f32)(f1 - f0);
                if (r4 == 1u) {
                    f1 = (f64)rdf32(rd32(param_1 + 0x70u) + 0x54u);
                    if (!((f1 > f2) || (f1 == f2))) {
                        f0 = (f64)(f32)(f0 + f2);
                        if ((f1 > f0) || (f1 == f0)) {
                            wr32(param_1 + 0x270u, r4 + 1u);
                        }
                    } else {
                        wr32(param_1 + 0x270u, r4 + 1u);
                    }
                }
                if (rd32(param_1 + 0x110u) != 0u) {
                    wr32(param_1 + 0x148u, rd32(param_1 + 0x148u) & 0xfbffffffu);
                }
                if (rd32(param_1 + 0x26cu) != 0u) {
                    f31 = (f64)rdf32(rd32(param_1 + 0x70u) + 0x54u);
                    a.r[0] = param_1;
                    f1 = tc_callf(0x80064f9cu, &a);
                    f2 = (f64)rdf32(0x80572864u);
                    f0 = (f64)(f32)(f1 - f2);
                    f1 = f2;
                    if ((f0 > f2) || (f0 == f2)) {
                        f0 = (f64)(f32)px_fdiv(f31, f0);
                        f1 = (f64)(f32)(f2 - f0);
                        if (!(f1 > f2)) {
                            f0 = (f64)rdf32(0x80572860u);
                            if (f1 < f0) {
                                f1 = f0;
                            }
                        } else {
                            f1 = f2;
                        }
                    }
                    wrf32d(param_1 + 0x278u, f1);
                    wrf32d(param_1 + 0xd0u, f1);
                }
            }
        }
    } else {
        wr32(param_1 + 0x148u, r4 & 0xfbffffffu);
    }
    return;
}
