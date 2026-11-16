#include "tc_rt.h"

u32 fn_80173e98(s32 param_1)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 1u;
    r0 = rd32((u32)param_1 + 0x4cu);
    r29 = rd32(0x804863d8u);
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        if (rd32(r29 + 0x110u) != 0u) {
            wr32((u32)param_1 + 0x50u, 0u);
            r4 = 0x80499528u;
            r28 = 0u;
            ctr = 0x78u;
            do {
                if ((u32)rd16(r4) == 0x2e8u) {
                    r28 = rd32(r29 + 0xa48u);
                    wr16(r4, (u16)rd32(r28 + 0x74u));
                    wr8(r4 + 3u, rd8(r28 + 0x78u));
                    wr8(r4 + 2u, rd8(r28 + 0x79u));
                    a.r[0] = r29;
                    f1 = tc_callf(0x800c4a78u, &a);
                    a.r[0] = r28;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32(r28) + 0x18u), &a);
                    if (r28 != 0u) {
                        a.r[0] = r28;
                        a.r[1] = 1u;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(rd32(rd32(r28) + 8u), &a);
                    }
                    r28 = 1u;
                    break;
                }
                r4 = r4 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
            a.f[0] = (f64)rdf32(0x80574e90u);
            a.r[0] = r29;
            a.r[1] = 1u;
            a.r[2] = 0u;
            (void)tc_call(0x800bf1d4u, &a);
            wr32(r29 + 0x290u, 0u);
            if (r28 == 0u) {
                a.r[0] = 0x8033a8a0u;
                a.r[1] = 2u;
                a.r[2] = 0xffffffffu;
                a.r[3] = 0u;
                a.r[4] = 0x80u;
                a.r[5] = 0u;
                a.r[6] = 3u;
                (void)tc_call(0x80052e74u, &a);
            }
            a.r[0] = rd32((u32)param_1 + 0x44u);
            (void)tc_call(0x800f3ca4u, &a);
            wr32((u32)param_1 + 0x4cu, 3u);
        }
    } else if (!c0lt) {
        if ((s32)r0 < 4 && rd32(rd32((u32)param_1 + 0x44u) + 0x128u) == 0u) {
            r31 = 0u;
            wr32((u32)param_1 + 0x4cu, 0u);
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            if (rd32(r29 + 0xa48u) == 0u) {
                r31 = 1u;
                wr32((u32)param_1 + 0x4cu, 1u);
            } else {
                a.r[0] = rd32((u32)param_1 + 0x44u);
                r3 = tc_call(0x800f3c58u, &a);
                if (r3 != 0u) {
                    r31 = 1u;
                    wr32((u32)param_1 + 0x4cu, 1u);
                } else {
                    r31 = 0u;
                    wr32((u32)param_1 + 0x50u, 0u);
                }
            }
        } else if (!c0lt) {
            if (rd32(r29 + 0xa48u) == 0u) {
                r31 = 0u;
                wr32((u32)param_1 + 0x4cu, 0u);
                wr32((u32)param_1 + 0x50u, 1u);
                a.r[0] = 0x803d29f8u;
                (void)tc_call(0x800975d8u, &a);
            } else if (rd32(rd32((u32)param_1 + 0x44u) + 0x128u) == 2u) {
                a.r[0] = r29;
                a.r[1] = 0x1eu;
                a.r[2] = 0u;
                a.r[3] = 1u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = (f64)rdf32(0x80574e90u);
                (void)tc_call(rd32(rd32(r29) + 0x54u), &a);
                wr32((u32)param_1 + 0x4cu, 2u);
            }
        }
    }
    return r31;
}
