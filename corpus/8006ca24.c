#include "tc_rt.h"

void fn_8006ca24(u32 param_r3)
{
    u32 r24 = 0, r25 = 0, r26 = 0, r30 = 0;
    f64 f0 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r26 = rd32(0x80499094u);
    if ((rd32(0x8057118cu) & 0x100u) == 0u || (u32)((s32)((rd32(param_r3 + 0x9cu) << 1u) & 0xc0000000u) >> 31) != 0u) {
        r24 = 0u;
        do {
            if ((r26 & (((r24 & 0x20u) != 0u) ? 0u : (1u << (r24 & 0x1fu)))) == 0u) {
                a.r[0] = param_r3;
                a.r[1] = r24;
                (void)tc_call(0x8006c8c4u, &a);
            }
            r24 = r24 + 1u;
        } while (r24 < 0x1au);
    } else {
        f31 = (f64)rdf32(0x805725e0u);
        r25 = 0u;
        f30 = (f64)rdf32(0x805725d8u);
        r30 = 0u;
        do {
            if ((r26 & (((r25 & 0x20u) != 0u) ? 0u : (1u << (r25 & 0x1fu)))) == 0u) {
                a.r[0] = param_r3;
                a.r[1] = r25;
                (void)tc_call(0x8006c8c4u, &a);
            } else {
                f0 = (f64)rdf32(r30 - 0x7fb66e54u);
                if ((f0 > f30) || (f0 == f30)) {
                    f29 = (f64)(f32)(f0 - f31);
                    if (!((f29 < f30) || (f29 == f30))) {
                        a.r[0] = param_r3;
                        a.r[1] = r25;
                        (void)tc_call(0x8006c910u, &a);
                        a.f[0] = f29;
                        a.r[0] = param_r3;
                        a.r[1] = r25;
                        (void)tc_call(0x8006cbd8u, &a);
                    } else {
                        f29 = f30;
                        if (r25 == 6u) {
                            a.r[0] = 0x80499214u;
                            (void)tc_call(0x800817c0u, &a);
                            wr16(0x80499214u, 0x2e8u);
                            wr8(0x80499216u, 1u);
                            wr8(0x80499217u, 1u);
                        }
                        r26 = r26 & ~(((r25 & 0x20u) != 0u) ? 0u : (1u << (r25 & 0x1fu)));
                        a.r[0] = param_r3;
                        a.r[1] = r25;
                        (void)tc_call(0x8006c8c4u, &a);
                        a.r[0] = param_r3;
                        a.r[1] = r25;
                        (void)tc_call(0x8006cbb0u, &a);
                    }
                    wrf32d(r30 - 0x7fb66e54u, f29);
                }
            }
            r25 = r25 + 1u;
            r30 = r30 + 4u;
        } while (r25 < 0x1au);
    }
    return;
}
