#include "tc_rt.h"

s32 fn_801658e0(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0;
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)param_2 == 0u) {
        wr32(0x817fdfa8u, (u32)param_1 + 0x1e0u);
        wr32(0x817fdfacu, (u32)param_1 + 0x858u);
        wr32(0x817fdfb0u, (u32)param_1 + 0x1014u);
        wr32(0x817fdfb4u, (u32)param_1 + 0x1620u);
        wr32(0x817fdfb8u, (u32)param_1 + 0x1b30u);
        wr32(0x817fdfbcu, (u32)param_1 + 0x1ddcu);
        wr32(0x817fdfc0u, (u32)param_1 + 0x20d0u);
        r3 = rd32((((u32)param_3 << 2u) & 0xfffffffcu) - 0x7e802058u);
    } else {
        if ((u32)param_2 == 1u) {
            wr32(0x817fdfc8u, (u32)param_1 + 0x2160u);
            wr32(0x817fdfccu, (u32)param_1 + 0x2478u);
            wr32(0x817fdfd0u, (u32)param_1 + 0x2790u);
            wr32(0x817fdfd4u, (u32)param_1 + 0x2aa8u);
            wr32(0x817fdfd8u, (u32)param_1 + 0x2e74u);
            wr32(0x817fdfdcu, (u32)param_1 + 0x3240u);
            wr32(0x817fdfe0u, (u32)param_1 + 0x33ccu);
            wr32(0x817fdfe4u, (u32)param_1 + 0x3558u);
            wr32(0x817fdfe8u, (u32)param_1 + 0x36e4u);
            wr32(0x817fdfecu, (u32)param_1 + 0x3870u);
            r3 = rd32((((u32)param_3 << 2u) & 0xfffffffcu) - 0x7e802038u);
        } else {
            if ((u32)param_2 == 3u) {
                wr32(0x817fdf88u, (u32)param_1 + 0x492cu);
                wr32(0x817fdf8cu, (u32)param_1 + 0x4b6cu);
                r3 = rd32((((u32)param_3 << 2u) & 0xfffffffcu) - 0x7e802078u);
            } else {
                if ((u32)param_2 == 2u) {
                    wr32(0x817fdf90u, (u32)param_1 + 0x39fcu);
                    wr32(0x817fdf94u, (u32)param_1 + 0x3d80u);
                    wr32(0x817fdf98u, (u32)param_1 + 0x3f9cu);
                    wr32(0x817fdf9cu, (u32)param_1 + 0x42b4u);
                    wr32(0x817fdfa0u, (u32)param_1 + 0x4710u);
                    wr32(0x817fdfa4u, (u32)param_1 + 0x47c4u);
                    r3 = rd32((((u32)param_3 << 2u) & 0xfffffffcu) - 0x7e802070u);
                } else {
                    r3 = 0u;
                }
            }
        }
    }
    return (s32)r3;
}
