#include "tc_rt.h"

void fn_80050384(u32 param_1, u32 param_2, u32 param_3, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r24 = 0, r25 = 0, r26 = 0, r31 = 0;
    f64 f0 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = (f64)rdf32(param_2);
    f30 = (f64)rdf32(param_2 + 8u);
    f0 = (f64)rdf32(param_3);
    f29 = f31;
    f28 = f30;
    r31 = rd32(param_1 + 8u);
    if (f31 > f0) {
        f31 = f0;
    }
    f0 = (f64)rdf32(param_3);
    if (f29 < f0) {
        f29 = f0;
    }
    f0 = (f64)rdf32(param_3 + 8u);
    if (f30 > f0) {
        f30 = f0;
    }
    f0 = (f64)rdf32(param_3 + 8u);
    if (f28 < f0) {
        f28 = f0;
    }
    f31 = (f64)(f32)(f31 - param_f1);
    f30 = (f64)(f32)(f30 - param_f1);
    f29 = (f64)(f32)(f29 + param_f1);
    f28 = (f64)(f32)(f28 + param_f1);
    for (;;) {
        r3 = (u32)(s16)rd16(param_1);
        if (r3 >= rd32(r31 + 8u)) break;
        r4 = rd32(r31 + 0xcu);
        r3 = (r3 << 5u) & 0xffffffe0u;
        r26 = r4 + r3;
        r3 = (u32)rd16(r4 + r3);
        if ((((r3 & (u32)rd16(param_1 + 4u)) != 0u && f29 > (f64)rdf32(r26 + 8u)) && (f28 > (f64)rdf32(r26 + 0xcu) && f31 < (f64)rdf32(r26 + 0x10u))) && f30 < (f64)rdf32(r26 + 0x14u)) {
            r25 = (u32)(s16)rd16(r26 + 2u) - 1u;
            for (;;) {
                r0 = (u32)(s16)rd16(param_1 + 2u);
                if ((s32)r0 >= (s32)r25) break;
                r4 = r0 * 0xcu;
                r5 = rd32(r26 + 4u);
                r0 = (u32)rd16(param_1 + 4u);
                wr16(param_1 + 2u, (u16)((u32)(s16)rd16(param_1 + 2u) + 1u));
                r24 = r5 + r4;
                r0 = (u32)rd16(r5 + r4) & r0;
                if (r0 != 0u) {
                    a.f[0] = param_f1;
                    a.r[0] = param_1 + 0x18u;
                    a.r[1] = r24 + 4u;
                    a.r[2] = r24 + 0x10u;
                    a.r[3] = param_2;
                    a.r[4] = param_3;
                    r3 = tc_call(0x800501e0u, &a);
                    if (r3 != 0u) {
                        wr16(param_1 + 0xcu, rd16(r24));
                        wr8(param_1 + 0xeu, rd8(r24 + 2u));
                        wr8(param_1 + 0xfu, rd8(r24 + 3u));
                        wr32(param_1 + 0x10u, r24 + 4u);
                        wr32(param_1 + 0x14u, r24 + 0x10u);
                        return;
                    }
                }
            }
        }
        r3 = (u32)(s16)rd16(param_1);
        wr16(param_1 + 2u, 0u);
        wr16(param_1, (u16)(r3 + 1u));
    }
    return;
}
