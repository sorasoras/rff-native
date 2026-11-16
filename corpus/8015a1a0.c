#include "tc_rt.h"

void fn_8015a1a0(s32 param_1)
{
    u32 c0eq = 0, r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1 + 0x6acu;
    r29 = 0u;
    do {
        if ((u32)((s32)((rd32(r30 + 0x34u) << 2u) & 0xc0000000u) >> 31) != 0u && rd32(r30 + 0x38u) == 0u) {
            a.r[0] = r30;
            (void)tc_call(0x80159624u, &a);
        }
        r29 = r29 + 1u;
        r30 = r30 + 0x3cu;
    } while ((s32)r29 < 4);
    r30 = (u32)param_1 + 0x6acu;
    r29 = 0u;
    do {
        c0eq = (u32)((s32)((rd32(r30 + 0x34u) << 2u) & 0xc0000000u) >> 31) == 0u;
        if ((!c0eq && !c0eq) && rd32(r30 + 0x38u) != 0u) {
            a.r[0] = r30;
            (void)tc_call(0x80159624u, &a);
        }
        r29 = r29 + 1u;
        r30 = r30 + 0x3cu;
    } while ((s32)r29 < 4);
    r30 = (u32)param_1 + 0x6acu;
    r29 = 0u;
    do {
        r3 = rd32(r30 + 0x34u);
        if ((u32)((s32)((r3 << 2u) & 0xc0000000u) >> 31) != 0u && (u32)((s32)((r3 << 3u) & 0xc0000000u) >> 31) != 0u) {
            if (rd32(r30 + 0x10u) == 2u) {
                a.f[0] = (f64)rdf32(r30 + 0x24u);
                a.r[0] = (u32)param_1;
                a.r[1] = 0u;
                (void)tc_call(0x8015a504u, &a);
            } else {
                a.f[0] = (f64)rdf32(r30 + 0x24u);
                a.r[0] = (u32)param_1;
                a.r[1] = 1u;
                (void)tc_call(0x8015a504u, &a);
            }
        }
        r29 = r29 + 1u;
        r30 = r30 + 0x3cu;
    } while ((s32)r29 < 4);
    return;
}
