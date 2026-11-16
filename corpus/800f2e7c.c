#include "tc_rt.h"

void fn_800f2e7c(u32 param_1, u32 param_2, s32 param_3, u32 param_4, s32 param_5, u32 param_6)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r22 = 0, r29 = 0, r30 = 0;
    u32 r31 = 0, t0 = 0, t8 = 0;
    f64 t2 = 0.0, t4 = 0.0, t10 = 0.0, t12 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (rd32(param_1 + 0x208u) != 0u) {
        r31 = rd32(param_2 + 0x34u);
        r30 = 0u;
        for (;;) {
            if ((s32)r30 >= (s32)r31) {
                return;
            }
            r22 = rd32(param_2 + 0x38u) + (rd32(param_2 + 0x3cu) * r30);
            r4 = rd32(r22 + 0x3cu);
            if ((u32)(s16)rd16(r4 + 0x68u) == 0xffffffffu) {
                r29 = 0u;
                a.r[0] = 0x817fdfb8u;
                a.r[1] = r4;
                (void)tc_call(0x80042618u, &a);
                r3 = rd32(param_1 + 0x208u);
                r4 = rd32(0x817fdfc8u);
                r0 = rd32(r3 + 0xcu);
                r9 = rd32(r3 + 0x10u);
                r5 = rd32(0x817fdfb8u);
                r6 = rd32(0x817fdfbcu);
                r7 = rd32(0x817fdfc0u);
                r8 = rd32(0x817fdfc4u);
                ctr = r0;
                if (r0 > 0u) {
                    do {
                        if (rd32(r9 + 0x10u) != r4) {
                            r3 = 0u;
                        } else {
                            r3 = 0u;
                            if (rd32(r9) == r5 && rd32(r9 + 4u) == r6 && rd32(r9 + 8u) == r7 && rd32(r9 + 0xcu) == r8) {
                                r3 = 1u;
                            }
                        }
                        if (r3 != 0u) {
                            r29 = r9;
                            break;
                        }
                        r9 = r9 + 0x64u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
                if (r29 != 0u) break;
            }
            r30 = r30 + 1u;
        }
        a.r[0] = rd32(param_1 + 0x70u);
        a.r[1] = r29 + 0x14u;
        r3 = tc_call(0x80031be0u, &a);
        if (r3 != 0u && rd32(r22 + 0x48u) != 0u) {
            a.r[0] = rd32(param_1 + 0x70u);
            a.r[1] = r29 + 0x14u;
            r3 = tc_call(0x80031be0u, &a);
            r3 = rd32(r3 + 0x3cu);
            wr32(param_6, (u32)rd16(r3 + 0x5eu));
            t0 = r29 + 0x2cu;
            t2 = (f64)rdf32(t0 + 4u);
            t4 = (f64)rdf32(r29 + 0x34u);
            wrf32d((u32)param_3, (f64)rdf32(t0));
            wrf32d((u32)param_3 + 4u, t2);
            wrf32d((u32)param_3 + 8u, t4);
            t8 = r29 + 0x48u;
            t10 = (f64)rdf32(t8 + 4u);
            t12 = (f64)rdf32(r29 + 0x50u);
            wrf32d((u32)param_5, (f64)rdf32(t8));
            wrf32d((u32)param_5 + 4u, t10);
            wrf32d((u32)param_5 + 8u, t12);
            wrf32d(param_4, (f64)rdf32(r29 + 0x38u));
            wrf32d(param_4 + 4u, (f64)rdf32(r29 + 0x3cu));
            wrf32d(param_4 + 8u, (f64)rdf32(r29 + 0x40u));
            wrf32d(param_4 + 0xcu, (f64)rdf32(r29 + 0x44u));
        }
    }
    return;
}
