#include "tc_rt.h"

u32 fn_8008b524(f64 param_1, f64 param_2, s32 param_3, u32 param_4, s32 param_5, s32 param_6)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r8 = 0, r12 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    r7 = (u32)param_5 * 0xa0u;
    r8 = 0u;
    r5 = (u32)param_3 + r7;
    ctr = 0x14u;
    for (;;) {
        if (rd32(r5 + 0x168u) != 0u) {
            r4 = rd32(rd32(r5 + 0x164u) + 8u);
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
        r8 = r8 + 1u;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            r3 = 0u;
            return r3;
        }
    }
    if ((u32)param_6 == 0u) {
        r3 = rd32((u32)param_3 + r7 + ((r8 << 3u) & 0xfffffff8u) + 0x164u);
        r12 = rd32(r3 + 0xcu);
        r3 = rd32(r3 + 8u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = (u32)param_6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.f[0] = param_1;
        a.f[1] = param_2;
        r3 = tc_call(r12, &a);
        wr8(0x817fdfebu, (u8)r3);
        wr8(0x817fdfe8u, (u8)((r3 >> 0x18u) & 0xffu));
        wr8(0x817fdfe9u, (u8)((r3 >> 0x10u) & 0xffu));
        wr8(0x817fdfeau, (u8)((r3 >> 8u) & 0xffu));
        wr32(0x817fdff0u, rd32(0x817fdfe8u));
        r4 = (u32)rd8(0x817fdff1u);
        r3 = (u32)rd8(0x817fdff2u);
        r0 = (u32)rd8(0x817fdff3u);
        wr8(param_4, rd8(0x817fdff0u));
        wr8(param_4 + 1u, (u8)r4);
        wr8(param_4 + 2u, (u8)r3);
        wr8(param_4 + 3u, (u8)r0);
    } else {
        r3 = rd32((u32)param_3 + r7 + ((r8 << 3u) & 0xfffffff8u) + 0x164u);
        r12 = rd32(r3 + 0x10u);
        r3 = rd32(r3 + 8u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = (u32)param_6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.f[0] = param_1;
        a.f[1] = param_2;
        r3 = tc_call(r12, &a);
        wr8(0x817fdfefu, (u8)r3);
        wr8(0x817fdfecu, (u8)((r3 >> 0x18u) & 0xffu));
        wr8(0x817fdfedu, (u8)((r3 >> 0x10u) & 0xffu));
        wr8(0x817fdfeeu, (u8)((r3 >> 8u) & 0xffu));
        wr32(0x817fdff4u, rd32(0x817fdfecu));
        r4 = (u32)rd8(0x817fdff5u);
        r3 = (u32)rd8(0x817fdff6u);
        r0 = (u32)rd8(0x817fdff7u);
        wr8(param_4, rd8(0x817fdff4u));
        wr8(param_4 + 1u, (u8)r4);
        wr8(param_4 + 2u, (u8)r3);
        wr8(param_4 + 3u, (u8)r0);
    }
    r3 = 1u;
    return r3;
}
