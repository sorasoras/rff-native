#include "tc_rt.h"

void fn_800564f8(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r0 = rd32((u32)param_1 + 0x194u);
    if (r0 != (u32)param_2) {
        wr32((u32)param_1 + 0x198u, r0);
    }
    if (rd32((u32)param_1 + 0x1fcu) == 0u) {
        if ((u32)param_2 == 4u) {
            r0 = rd32((u32)param_1 + 0x194u);
            if (r0 == 4u) {
                return;
            }
            wr32((u32)param_1 + 0x194u, (u32)param_2);
            r0 = (r0 << 4u) & 0xfffffff0u;
            r5 = r0 - 0x7fcc9a58u;
            f1 = (f64)rdf32(r0 - 0x7fcc9a58u);
            f0 = (f64)rdf32(r5 + 4u);
            wrf32d((u32)param_1 + 0x1d8u, (f64)rdf32(r5 + 8u));
            r5 = rd32((u32)param_1 + 0x134u);
            wrf32d((u32)param_1 + 0x1d0u, f1);
            r0 = rd32((u32)param_1 + 0x138u);
            wrf32d((u32)param_1 + 0x1d4u, f0);
            wr32(0x817fdfe8u, r5);
            wr32(0x817fdfecu, r0);
            wr32(0x817fdff0u, rd32((u32)param_1 + 0x13cu));
            a.r[0] = 0x817fdfe8u;
            a.r[1] = (u32)param_1 + 0x140u;
            a.r[2] = 0x817fdfe8u;
            (void)tc_call(0x802343a4u, &a);
            a.r[0] = 0x817fdfe8u;
            f1 = tc_callf(0x80234440u, &a);
            r0 = rd32((u32)param_1 + 0x194u);
            wrf32d((u32)param_1 + 0x1d8u, f1);
            r0 = (r0 << 4u) & 0xfffffff0u;
            wrf32d((u32)param_1 + 0x14cu, (f64)rdf32(r0 - 0x7fcc9a4cu));
        } else {
            r0 = ((u32)param_2 << 4u) & 0xfffffff0u;
            wr32((u32)param_1 + 0x194u, (u32)param_2);
            r4 = r0 - 0x7fcc9a58u;
            f1 = (f64)rdf32(r0 - 0x7fcc9a58u);
            f0 = (f64)rdf32(r4 + 4u);
            f3 = (f64)rdf32(r4 + 0xcu);
            wrf32d((u32)param_1 + 0x1d8u, (f64)rdf32(r4 + 8u));
            wrf32d((u32)param_1 + 0x1d0u, f1);
            wrf32d((u32)param_1 + 0x1d4u, f0);
            wrf32d((u32)param_1 + 0x14cu, f3);
        }
    }
    return;
}
