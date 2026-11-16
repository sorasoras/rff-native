#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802f371c(f64 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    if (rd32(param_2) != 0u) {
        if ((u32)param_3 == 0u) {
            r3 = rd32(param_2 + 0x18u);
            wr32(0x817fdfd8u, 0x43300000u);
            f2 = rdf64(0x80577560u);
            wr32(0x817fdfdcu, r3 ^ 0x80000000u);
            f31 = (f64)(f32)px_fdiv((f64)(f32)(param_1 * (f64)(f32)(rdf64(0x817fdfd8u) - f2)), (f64)rdf32(0x80577550u));
            r3 = tc_call(0x8022c2b0u, &a);
            r28 = rd32(param_2);
            r29 = r3;
            if (r28 != 0u) {
                a.f[0] = (f64)(f32)((f64)rdf32(0x80577570u) * f31);
                r3 = tc_call(0x802558e4u, &a);
                wr16(r28 + 0xceu, (u16)((r3 >> 0x10u) & 0xffffu));
                wr16(rd32(param_2) + 0xd0u, (u16)r3);
                r3 = rd32(param_2 + 4u);
                if ((r3 & 0x10000u) == 0u) {
                    wr32(param_2 + 4u, r3 | 0x20000u);
                }
                a.r[0] = r29;
                (void)tc_call(0x8022c2d8u, &a);
            } else {
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
            }
        } else {
            r3 = rd32(param_2 + 0x18u);
            wr32(0x817fdfd8u, 0x43300000u);
            f2 = rdf64(0x80577560u);
            wr32(0x817fdfdcu, r3 ^ 0x80000000u);
            f3 = (f64)rdf32(0x80577568u);
            f0 = (f64)(f32)px_fdiv((f64)(f32)(param_1 * (f64)(f32)(rdf64(0x817fdfd8u) - f2)), (f64)rdf32(0x80577550u));
            if (!(f0 > f3)) {
                f3 = (f64)rdf32(0x8057756cu);
                if (!(f0 < f3)) {
                    f3 = f0;
                }
            }
            a.f[0] = (f64)(f32)((f64)rdf32(0x80577570u) * f3);
            r3 = tc_call(0x802558e4u, &a);
            wr16(0x817fdfc8u, (u16)((r3 >> 0x10u) & 0xffffu));
            wr16(0x817fdfcau, (u16)r3);
            wr16(0x817fdfccu, 0u);
            wr16(0x817fdfceu, 0u);
            wr16(0x817fdfd0u, 0u);
            wr16(0x817fdfd2u, 0u);
            wr16(0x817fdfd4u, 0u);
            r3 = tc_call(0x8022c2b0u, &a);
            r4 = rd32(param_2);
            r29 = r3;
            if (r4 != 0u) {
                a.r[0] = r4 + 0xceu;
                a.r[1] = 0x817fdfc8u;
                a.r[2] = 0xeu;
                (void)tc_call(0x80004338u, &a);
                wr32(param_2 + 4u, (rd32(param_2 + 4u) & 0xfffdffffu) | 0x10000u);
                a.r[0] = r29;
                (void)tc_call(0x8022c2d8u, &a);
            } else {
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
            }
        }
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
