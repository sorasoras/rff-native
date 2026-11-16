#include "tc_rt.h"

void fn_8020e228(u32 param_1, u32 param_2, s32 param_3, f64 param_f1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    if ((u32)rd8(param_1 - 0x7fc87df8u) == 0u) {
        return;
    }
    r29 = (param_1 << 2u) & 0xfffffffcu;
    r3 = rd32(r29 - 0x7fb20620u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = (u32)param_3;
        a.r[3] = 0x80378208u;
        a.f[0] = param_f1;
        (void)tc_call(rd32(rd32(r3) + 0x1cu), &a);
        r3 = rd32(r29 - 0x7fb20620u);
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = param_f1;
        (void)tc_call(rd32(rd32(r3) + 0x24u), &a);
    } else {
        r22 = param_1;
        if ((u32)param_3 != 1u) {
            r22 = 0u - ((ppc_cntlzw((u32)param_3) >> 5u) & 1u) + 0x22u;
        }
        r23 = r22 * 0x28u;
        r24 = r23 - 0x7fb20b98u;
        a.r[0] = rd32(r24 + 4u);
        a.r[1] = 0xffffffffu;
        r3 = tc_call(0x8003140cu, &a);
        r25 = r3;
        r3 = tc_call(0x800545e4u, &a);
        r6 = r3;
        if (r25 == 0u) {
            r28 = 0u;
        } else {
            if (rd32(r3 + 0x10u) != 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r25;
                a.r[2] = r5;
                a.r[3] = r6;
                r3 = tc_call(0x80040db8u, &a);
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = r25;
                    r3 = tc_call(0x80094e80u, &a);
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r25;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    r3 = tc_call(0x80040cd8u, &a);
                }
            }
            r28 = r3;
        }
        a.r[0] = rd32(r24 + 4u);
        a.r[1] = rd32(r23 - 0x7fb20b90u);
        a.r[2] = 0xffffffffu;
        a.r[3] = r28;
        (void)tc_call(0x80031268u, &a);
        a.r[0] = r28;
        a.r[1] = rd32(r23 - 0x7fb20b8cu);
        a.r[2] = rd32(((r22 << 2u) & 0xfffffffcu) - 0x7fb20c28u);
        (void)tc_call(0x80040040u, &a);
        a.f[0] = (f64)rdf32(0x80576808u);
        a.r[0] = r28;
        a.r[1] = rd32(r23 - 0x7fb20b78u);
        a.r[2] = 1u;
        (void)tc_call(0x80035740u, &a);
        r3 = tc_call(0x800545e4u, &a);
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x98u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            r24 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x98u;
                r3 = tc_call(0x80094e80u, &a);
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x98u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
            }
            r24 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            (void)tc_call(0x8020ccb0u, &a);
        }
        a.f[0] = param_f1;
        a.r[0] = r24;
        a.r[1] = r28;
        a.r[2] = param_1;
        a.r[3] = param_2;
        (void)tc_call(0x8020ce7cu, &a);
        wr32(r29 - 0x7fb20620u, r24);
    }
    return;
}
