#include "tc_rt.h"

u32 fn_8011c3e0(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_3;
    a.r[1] = 0u;
    a.r[2] = param_2;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_3) + 0xcu), &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr32((u32)param_1 + 0x14u, param_4);
        a.r[0] = (u32)param_1;
        a.r[1] = r3;
        (void)tc_call(0x802ee708u, &a);
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x802ee818u, &a);
        r28 = r3 & 0xffffu;
        if (r28 == 0u) {
            wr32((u32)param_1 + 0x18u, 1u);
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) != 0u) {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 4u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                f1 = tc_lastf();
                r29 = r3;
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 4u;
                    r3 = tc_call(0x80094e80u, &a);
                    f1 = tc_lastf();
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 4u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                    f1 = tc_lastf();
                }
                r29 = r3;
            }
            wr32((u32)param_1 + 0x10u, r3);
            r3 = rd32((u32)param_1 + 0x14u);
            a.r[0] = r3;
            a.r[1] = (u32)param_1;
            a.r[2] = param_3;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x18u), &a);
            wr32(r29, r3);
            r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
        } else {
            wr32((u32)param_1 + 0x18u, r28);
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x802ee834u, &a);
            r27 = r3;
            r26 = rd32(rd32((u32)param_1 + 0x14u) + 0x14u);
            r29 = (rd32((u32)param_1 + 0x18u) << 2u) & 0xfffffffcu;
            r3 = tc_call(0x800545e4u, &a);
            r6 = r3;
            if (r29 == 0u) {
                r3 = 0u;
            } else {
                if (rd32(r3 + 0x10u) != 0u) {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r29;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    r3 = tc_call(0x80040db8u, &a);
                } else {
                    if (rd32(r3 + 0x20u) != 0u) {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = r29;
                        r3 = tc_call(0x80094e80u, &a);
                    } else {
                        r5 = rd32(r3 + 0xcu);
                        r3 = rd32(r3);
                        r6 = r6 + 0x18u;
                        a.r[0] = r3;
                        a.r[1] = r29;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        r3 = tc_call(0x80040cd8u, &a);
                    }
                }
            }
            wr32((u32)param_1 + 0x10u, r3);
            r29 = r3;
            r25 = 0u;
            while ((s32)r25 < (s32)r28) {
                a.r[0] = r26;
                a.r[1] = r27;
                r3 = tc_call(0x802e5528u, &a);
                r24 = r3;
                if (r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x802ee854u, &a);
                a.r[0] = (u32)param_1;
                a.r[1] = r24;
                a.r[2] = r3;
                r3 = tc_call(0x802ee988u, &a);
                f1 = tc_lastf();
                r24 = r3 & 0xffffu;
                r3 = rd32((u32)param_1 + 0x14u);
                a.r[0] = r3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x10u), &a);
                f1 = tc_lastf();
                wr32(r29, r3);
                a.r[0] = r3;
                a.r[1] = rd32((u32)param_1 + 4u);
                a.r[2] = param_3;
                a.r[3] = r24;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3) + 0x10u), &a);
                r27 = r27 + 0x14u;
                r29 = r29 + 4u;
                r25 = r25 + 1u;
            }
            r3 = 1u;
        }
    }
    return r3;
}
