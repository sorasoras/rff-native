#include "tc_rt.h"

void fn_802c0a78(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0;
    r6 = rd32(param_2);
    if (r6 != 0u) {
        if ((u32)param_3 != 0u) {
            if ((u32)rd8(r6 + 0x5cu) == 2u && rd32(param_2 + 0xcu) == 2u) {
                f0 = (f64)rdf32(param_2 + 8u);
                wrf32d((u32)param_1 + 8u, (f64)rdf32(param_2 + 4u));
                wrf32d((u32)param_1 + 0xcu, f0);
            } else {
                r5 = rd32(param_2);
                wrf32d((u32)param_1 + 8u, (f64)rdf32(r6 + 0x20u));
                wrf32d((u32)param_1 + 0xcu, (f64)rdf32(r5 + 0x24u));
            }
        }
        r7 = rd32(param_2);
        wr32((u32)param_1 + 0x10u, rd32(r7 + 4u));
        r6 = rd32(r7);
        wr32((u32)param_1 + 0x14u, r6);
        wr32((u32)param_1 + 0x18u, rd32(r7 + 8u));
        if ((u32)rd8(r7 + 0x5cu) != 2u) {
            return;
        }
        if (rd32(param_2 + 0xcu) != 2u) {
            return;
        }
        r0 = rd32(r7 + 0x60u);
        r4 = rd32(r7 + 0x64u);
        r5 = rd32(r7 + 0x68u);
        if ((r0 & 0x10u) != 0u) {
            r6 = r6 | 0x800u;
            wr32((u32)param_1 + 0x14u, r6);
        }
        if ((r4 & 0x10u) != 0u) {
            wr32((u32)param_1 + 0x10u, rd32((u32)param_1 + 0x10u) | 0x800u);
        }
        if ((r5 & 0x10u) != 0u) {
            wr32((u32)param_1 + 0x18u, rd32((u32)param_1 + 0x18u) | 0x800u);
        }
        if ((r0 & 0x400u) != 0u) {
            wr32((u32)param_1 + 0x14u, rd32((u32)param_1 + 0x14u) | 0x10u);
        }
        if ((r4 & 0x400u) != 0u) {
            wr32((u32)param_1 + 0x10u, rd32((u32)param_1 + 0x10u) | 0x10u);
        }
        if ((r5 & 0x400u) != 0u) {
            wr32((u32)param_1 + 0x18u, rd32((u32)param_1 + 0x18u) | 0x10u);
        }
        if ((r0 & 0x1000u) != 0u) {
            wr32((u32)param_1 + 0x14u, rd32((u32)param_1 + 0x14u) | 0x1000u);
        }
        if ((r4 & 0x1000u) != 0u) {
            wr32((u32)param_1 + 0x10u, rd32((u32)param_1 + 0x10u) | 0x1000u);
        }
        if ((r5 & 0x1000u) != 0u) {
            wr32((u32)param_1 + 0x18u, rd32((u32)param_1 + 0x18u) | 0x1000u);
        }
        r0 = r0 & 0x800u;
        if (r0 != 0u) {
            wr32((u32)param_1 + 0x14u, rd32((u32)param_1 + 0x14u) | 0x8000u);
        }
        if ((r4 & 0x800u) != 0u) {
            wr32((u32)param_1 + 0x10u, rd32((u32)param_1 + 0x10u) | 0x8000u);
        }
        if ((r5 & 0x800u) == 0u) {
            return;
        }
        wr32((u32)param_1 + 0x18u, rd32((u32)param_1 + 0x18u) | 0x8000u);
        return;
    }
    return;
}
