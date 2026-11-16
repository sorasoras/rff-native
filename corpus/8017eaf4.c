#include "tc_rt.h"

void fn_8017eaf4(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)((s32)((rd32(param_1 + 0xacu) << 1u) & 0xc0000000u) >> 31) != 0u) {
        r4 = rd32(param_1 + 0x78u);
        if (r4 != 0u) {
            if ((rd32(0x8057118cu) & 0x20u) == 0u) {
                wr32(r4 + 0x34u, 1u);
                return;
            }
            wr32(r4 + 0x34u, 0u);
        }
        r0 = rd32(param_1 + 0x80u);
        if (r0 <= 7u) {
            r0 = (r0 << 2u) & 0xfffffffcu;
            r3 = rd32(r0 - 0x7fc90da0u);
            sw_ = r3;
            switch (sw_) {
            case 0x8017eb6cu:
                a.r[0] = param_1;
                (void)tc_call(0x8017f274u, &a);
                break;
            case 0x8017eb78u:
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = 0.0;
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                r0 = rd32(param_1 + 0xa0u);
                wr32(0x817fdfe4u, rd32(param_1 + 0x9cu));
                wr32(0x817fdfe8u, r0);
                wr32(0x817fdfecu, rd32(param_1 + 0xa4u));
                a.r[0] = 0x817fdfe4u;
                a.r[1] = r3;
                a.r[2] = 0x817fdfe4u;
                (void)tc_call(0x802343a4u, &a);
                a.r[0] = 0x817fdfe4u;
                f1 = tc_callf(0x80234428u, &a);
                f0 = (f64)rdf32(0x80575084u);
                if (!((f1 < f0) || (f1 == f0))) {
                    f1 = (f64)rdf32(0x80575048u);
                    r0 = 0u;
                    if (f1 == (f64)rdf32(0x817fdfe4u) && f1 == (f64)rdf32(0x817fdfe8u) && f1 == (f64)rdf32(0x817fdfecu)) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        a.r[0] = 0x817fdfe4u;
                        a.r[1] = 0x817fdfe4u;
                        (void)tc_call(0x802343e4u, &a);
                    }
                    a.f[0] = (f64)rdf32(param_1 + 0xa8u);
                    a.r[0] = 0x817fdfe4u;
                    a.r[1] = 0x817fdfe4u;
                    f1 = tc_callf(0x802343c8u, &a);
                    a.r[0] = param_1;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                    r0 = rd32(r3 + 4u);
                    wr32(0x817fdfd8u, rd32(r3));
                    wr32(0x817fdfdcu, r0);
                    wr32(0x817fdfe0u, rd32(r3 + 8u));
                    a.r[0] = 0x817fdfd8u;
                    a.r[1] = 0x817fdfe4u;
                    a.r[2] = 0x817fdfd8u;
                    f1 = tc_callf(0x80234380u, &a);
                    a.r[0] = param_1;
                    a.r[1] = 0x817fdfd8u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
                    break;
                }
                a.r[0] = rd32(param_1 + 0x80u);
                a.r[1] = 1u;
                (void)tc_call(0x8017fde4u, &a);
                wr32(param_1 + 0x80u, 0u);
                a.r[0] = 0u;
                a.r[1] = 1u;
                (void)tc_call(0x8017fdc8u, &a);
                break;
            case 0x8017eca8u:
                a.r[0] = param_1;
                (void)tc_call(0x8017ef7cu, &a);
                break;
            case 0x8017ec9cu:
                a.r[0] = param_1;
                (void)tc_call(0x8017f7d8u, &a);
                break;
            case 0x8017ecb4u:
                a.r[0] = param_1;
                (void)tc_call(0x8017edb8u, &a);
                break;
            case 0x8017ecc0u:
                a.r[0] = param_1;
                (void)tc_call(0x8017ecdcu, &a);
                break;
            default:
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = 0.0;
                r3 = tc_call(sw_, &a);
                r0 = 0u;
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                r11 = 0u;
                r12 = 0u;
                f0 = 0.0;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
                f9 = 0.0;
                f10 = 0.0;
                f11 = 0.0;
                f12 = 0.0;
                f13 = 0.0;
                ctr = 0u;
                return;
            }
        }
    }
    return;
}
