#include "tc_rt.h"

void fn_800d9f0c(s32 param_1, u32 param_2)
{
    u32 r5 = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r5 = rd32((u32)param_1 + 0x74u);
    if ((u32)((s32)r5 >> 31) != 0u) {
        r6 = rd32((u32)param_1 + 0x78u);
        if (r6 != 0u) {
            if ((u32)((s32)((r5 << 3u) & 0xc0000000u) >> 31) != 0u) {
                if (!((f64)rdf32((u32)param_1 + 0x10cu) > (f64)rdf32(0x805739e8u))) {
                    return;
                }
                r31 = param_2 & 6u;
                if (r31 != 0u) {
                    a.r[0] = 1u;
                    a.r[1] = 3u;
                    a.r[2] = 0u;
                    (void)tc_call(0x80253f64u, &a);
                }
                f2 = (f64)rdf32(0x803d27a4u);
                f1 = (f64)rdf32(0x803d27a8u);
                f0 = (f64)rdf32(0x803d27acu);
                wrf32d(0x817fdfd8u, (f64)rdf32(0x803d27a0u));
                wrf32d(0x817fdfdcu, f2);
                wrf32d(0x817fdfe0u, f1);
                wrf32d(0x817fdfe4u, f0);
                a.r[0] = (u32)param_1 + 0x100u;
                (void)tc_call(0x8004a4fcu, &a);
                a.r[0] = rd32((u32)param_1 + 0x78u);
                a.r[1] = param_2;
                (void)tc_call(0x800318a8u, &a);
                a.r[0] = 0x817fdfd8u;
                (void)tc_call(0x8004a4fcu, &a);
                if (r31 == 0u) {
                    return;
                }
                a.r[0] = 1u;
                a.r[1] = 3u;
                a.r[2] = 1u;
                (void)tc_call(0x80253f64u, &a);
            } else {
                a.r[0] = r6;
                a.r[1] = param_2;
                (void)tc_call(0x800318a8u, &a);
            }
        }
    }
    return;
}
