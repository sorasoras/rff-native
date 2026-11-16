#include "tc_rt.h"

u32 fn_8008b9e0(f64 param_1, f64 param_2, s32 param_3, u32 param_4, s32 param_5)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r12 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    r6 = (u32)param_5 * 0xa0u;
    r7 = 0u;
    r5 = (u32)param_3 + r6;
    ctr = 0x14u;
    for (;;) {
        if (rd32(r5 + 0x3e8u) != 0u) {
            r4 = rd32(rd32(r5 + 0x3e4u) + 8u);
            f0 = (f64)rdf32(r4);
            if ((param_1 < f0) || (param_1 == f0)) {
                r0 = 0u;
            } else {
                f0 = (f64)rdf32(r4 + 8u);
                if ((param_2 < f0) || (param_2 == f0)) {
                    r0 = 0u;
                } else {
                    f0 = (f64)rdf32(r4 + 0xcu);
                    if ((param_1 > f0) || (param_1 == f0)) {
                        r0 = 0u;
                    } else {
                        f0 = (f64)rdf32(r4 + 0x14u);
                        if (!((param_2 > f0) || (param_2 == f0))) {
                            r0 = 1u;
                        } else {
                            r0 = 0u;
                        }
                    }
                }
            }
            if (r0 != 0u) break;
        }
        r5 = r5 + 8u;
        r7 = r7 + 1u;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            r3 = 0u;
            return r3;
        }
    }
    r3 = rd32((u32)param_3 + r6 + ((r7 << 3u) & 0xfffffff8u) + 0x3e4u);
    r12 = rd32(r3 + 0xcu);
    r3 = rd32(r3 + 8u);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    a.f[0] = param_1;
    a.f[1] = param_2;
    r3 = tc_call(r12, &a);
    r0 = (r3 >> 0x10u) & 0xffffu;
    wr16(0x817fdfeau, (u16)r3);
    r3 = 1u;
    wr16(0x817fdfe8u, (u16)r0);
    wr32(0x817fdfecu, rd32(0x817fdfe8u));
    r4 = (u32)rd8(0x817fdfeeu);
    r0 = (u32)rd8(0x817fdfefu);
    wr16(param_4, rd16(0x817fdfecu));
    wr8(param_4 + 2u, (u8)r4);
    wr8(param_4 + 3u, (u8)r0);
    return r3;
}
