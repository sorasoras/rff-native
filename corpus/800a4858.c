#include "tc_rt.h"

void fn_800a4858(s32 param_1, s32 param_2)
{
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0;
    wr32(0x817fdfe0u, 0x817fe000u);
    if (param_1 >= 0) {
        if (param_1 >= 81) {
            return;
        }
        r7 = rd32(0x80337b94u);
        r6 = rd32(0x80337b98u);
        r5 = rd32(0x80337b9cu);
        r4 = rd32(0x80337ba0u);
        wr32(0x817fdfe8u, rd32(0x80337b90u));
        wr32(0x817fdfecu, r7);
        wr32(0x817fdff0u, r6);
        wr32(0x817fdff4u, r5);
        wr32(0x817fdff8u, r4);
        r7 = rd32(((((u32)param_1 - 0x4cu) << 2u) & 0xfffffffcu) - 0x7e802018u);
        if ((u32)param_2 != 0u) {
            f0 = (f64)rdf32(0x80572b04u);
            if (r7 == 2u) {
                f0 = (f64)rdf32(0x80572b08u);
            }
            wr32(0x80499094u, rd32(0x80499094u) | (((r7 & 0x20u) != 0u) ? 0u : (1u << (r7 & 0x1fu))));
            wrf32d(((r7 << 2u) & 0xfffffffcu) - 0x7fb66e54u, f0);
        } else {
            wr32(0x80499094u, rd32(0x80499094u) & ~(((r7 & 0x20u) != 0u) ? 0u : (1u << (r7 & 0x1fu))));
        }
    }
    return;
}
