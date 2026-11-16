#include "tc_rt.h"

void fn_800f680c(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32((u32)param_1 + 0x16cu) != 0u) {
        wr32((u32)param_1 + 0x16cu, 0u);
        wr32((u32)param_1 + 8u, 0u);
        wr32((u32)param_1 + 0x30u, 0u);
        wr32((u32)param_1 + 0x58u, 0u);
        wr32((u32)param_1 + 0x80u, 0u);
        if ((u32)param_2 != 0u) {
            r3 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
            r7 = rd32(r3 + 0x138u);
            r6 = rd32(r3 + 0x13cu);
            r5 = rd32(r3 + 0x140u);
            r4 = rd32(r3 + 0x144u);
            r0 = rd32(r3 + 0x148u);
            wr32(0x817fdfe4u, rd32(r3 + 0x134u));
            wr32(0x817fdfe8u, r7);
            wr32(0x817fdfecu, r6);
            wr32(0x817fdfd8u, r5);
            wr32(0x817fdfdcu, r4);
            wr32(0x817fdfe0u, r0);
            a.r[0] = r3;
            (void)tc_call(0x80056f08u, &a);
            r0 = rd32(0x805710e0u) * 0x6d0u;
            r7 = rd32(0x817fdfe8u);
            r6 = rd32(0x817fdfecu);
            wr32(0x817fdfccu, rd32(0x817fdfe4u));
            wr32(0x817fdfd0u, r7);
            wr32(0x817fdfd4u, r6);
            a.r[0] = 0x817fdfccu;
            a.r[1] = r0 - 0x7fc2e604u;
            a.r[2] = 0x817fdfccu;
            (void)tc_call(0x802343a4u, &a);
            r0 = rd32(0x805710e0u) * 0x6d0u;
            r7 = rd32(0x817fdfdcu);
            r6 = rd32(0x817fdfe0u);
            wr32(0x817fdfc0u, rd32(0x817fdfd8u));
            wr32(0x817fdfc4u, r7);
            wr32(0x817fdfc8u, r6);
            a.r[0] = 0x817fdfc0u;
            a.r[1] = r0 - 0x7fc2e5f8u;
            a.r[2] = 0x817fdfc0u;
            (void)tc_call(0x802343a4u, &a);
            r3 = rd32(0x805710e0u) * 0x6d0u;
            r5 = rd32(0x817fdfd0u);
            wr32(0x817fdfb4u, rd32(0x817fdfccu));
            r4 = rd32(0x817fdfd4u);
            r6 = r3 - 0x7fc2e738u;
            wr32(0x817fdfb8u, r5);
            f1 = (f64)rdf32(0x817fdfb4u);
            wr32(r6 + 0x23cu, 1u);
            r0 = rd32(0x817fdfc0u);
            wr32(0x817fdfbcu, r4);
            r3 = rd32(0x817fdfc4u);
            wrf32d(r6 + 0x240u, f1);
            f0 = (f64)rdf32(0x817fdfb8u);
            wr32(0x817fdfa8u, r0);
            r0 = rd32(0x817fdfc8u);
            wrf32d(r6 + 0x244u, f0);
            f1 = (f64)rdf32(0x817fdfbcu);
            wr32(0x817fdfacu, r3);
            f0 = (f64)rdf32(0x817fdfa8u);
            wrf32d(r6 + 0x248u, f1);
            f1 = (f64)rdf32(0x817fdfacu);
            wrf32d(r6 + 0x24cu, f0);
            f2 = (f64)rdf32(0x817fdfe4u);
            wr32(0x817fdfb0u, r0);
            wrf32d(r6 + 0x250u, f1);
            f1 = (f64)rdf32(0x817fdfe8u);
            wrf32d(r6 + 0x254u, (f64)rdf32(0x817fdfb0u));
            f0 = (f64)rdf32(0x817fdfecu);
            wrf32d(r6 + 0x134u, f2);
            f2 = (f64)rdf32(0x817fdfd8u);
            wrf32d(r6 + 0x138u, f1);
            f1 = (f64)rdf32(0x817fdfdcu);
            wrf32d(r6 + 0x13cu, f0);
            f0 = (f64)rdf32(0x817fdfe0u);
            wrf32d(r6 + 0x140u, f2);
            wrf32d(r6 + 0x144u, f1);
            wrf32d(r6 + 0x148u, f0);
        } else {
            a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
            (void)tc_call(0x80056f08u, &a);
        }
    }
    return;
}
