#include "tc_rt.h"

s32 fn_80088bc4(s32 param_1, s32 param_2, s32 param_3)
{
    u32 ctr = 0, r6 = 0, r7 = 0;
    r6 = (u32)param_1;
    r7 = 0u;
    ctr = 2u;
    do {
        if ((rd32(r6 + 0x2294u) != 0u && (u32)param_2 == rd32(r6 + 0x2298u)) && (u32)param_3 == rd32(r6 + 0x229cu)) {
            return (s32)((u32)param_1 + (r7 * 0xa8u) + 0x2330u);
        }
        r7 = r7 + 1u;
        if ((rd32(r6 + 0x233cu) != 0u && (u32)param_2 == rd32(r6 + 0x2340u)) && (u32)param_3 == rd32(r6 + 0x2344u)) {
            return (s32)((u32)param_1 + (r7 * 0xa8u) + 0x2330u);
        }
        r7 = r7 + 1u;
        if ((rd32(r6 + 0x23e4u) != 0u && (u32)param_2 == rd32(r6 + 0x23e8u)) && (u32)param_3 == rd32(r6 + 0x23ecu)) {
            return (s32)((u32)param_1 + (r7 * 0xa8u) + 0x2330u);
        }
        r7 = r7 + 1u;
        if ((rd32(r6 + 0x248cu) != 0u && (u32)param_2 == rd32(r6 + 0x2490u)) && (u32)param_3 == rd32(r6 + 0x2494u)) {
            return (s32)((u32)param_1 + (r7 * 0xa8u) + 0x2330u);
        }
        r7 = r7 + 1u;
        if ((rd32(r6 + 0x2534u) != 0u && (u32)param_2 == rd32(r6 + 0x2538u)) && (u32)param_3 == rd32(r6 + 0x253cu)) {
            return (s32)((u32)param_1 + (r7 * 0xa8u) + 0x2330u);
        }
        r7 = r7 + 1u;
        if ((rd32(r6 + 0x25dcu) != 0u && (u32)param_2 == rd32(r6 + 0x25e0u)) && (u32)param_3 == rd32(r6 + 0x25e4u)) {
            return (s32)((u32)param_1 + (r7 * 0xa8u) + 0x2330u);
        }
        r6 = r6 + 0x3f0u;
        r7 = r7 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return 0;
}
