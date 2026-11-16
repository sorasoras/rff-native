#include "tc_rt.h"

u32 fn_80172618(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    if ((u32)param_2 == 3u) {
        r4 = 0u;
        if ((u32)rd8((u32)param_1 + 0x17acu) == 0x3cu) {
            r4 = 1u;
        }
        if ((u32)rd8((u32)param_1 + 0x17b8u) == 0x3cu) {
            r4 = (r4 + 1u) & 0xffu;
        }
        if ((u32)rd8((u32)param_1 + 0x17c4u) == 0x3cu) {
            r4 = (r4 + 1u) & 0xffu;
        }
        if ((u32)rd8((u32)param_1 + 0x17d0u) == 0x3cu) {
            r4 = (r4 + 1u) & 0xffu;
        }
        if ((u32)rd8((u32)param_1 + 0x17dcu) == 0x3cu) {
            r4 = (r4 + 1u) & 0xffu;
        }
        if ((u32)rd8((u32)param_1 + 0x17e8u) == 0x3cu) {
            r4 = (r4 + 1u) & 0xffu;
        }
        if ((u32)rd8((u32)param_1 + 0x17f4u) == 0x3cu) {
            r4 = (r4 + 1u) & 0xffu;
        }
        if ((u32)rd8((u32)param_1 + 0x1800u) == 0x3cu) {
            r4 = (r4 + 1u) & 0xffu;
        }
        return (((8u - r4) | (r4 - 8u)) >> 0x1fu) & 1u;
    }
    r3 = rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x1804u);
    r0 = ppc_cntlzw(r3 ^ (((u32)param_3 << 3u) & 0xfffffff8u));
    r0 = ((r0 & 0x20u) != 0u) ? 0u : (r3 << (r0 & 0x1fu));
    return (r0 >> 0x1fu) & 1u;
}
