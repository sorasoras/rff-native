#include "tc_rt.h"

void fn_8017d0d0(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x70u;
    a.r[1] = (u32)param_2;
    a.r[2] = 0u;
    r3 = tc_call(0x8007b0f4u, &a);
    if (r3 == 0u) {
        wr32((u32)param_2 + 0xacu, rd32((u32)param_2 + 0xacu) & 0xbfffffffu);
        a.r[0] = (u32)param_1 + 0x70u;
        a.r[1] = (u32)param_2;
        (void)tc_call(0x8007b03cu, &a);
        wr32((u32)param_1 + 0x8cu, rd32((u32)param_1 + 0x8cu) - 1u);
        r0 = rd32((u32)param_2 + 0x8cu);
        if (r0 < 0x1eu) {
            r0 = r0 * 0x14u;
            r4 = (u32)param_1 + 0x10000u + r0;
            wr16(r4 + 0x36au, (u16)((u32)(s16)rd16(r4 + 0x36au) - 1u));
        }
        r3 = ((rd32(0x805706e8u) << 2u) & 0xfffffffcu) - 0x7fb6d800u + (rd32((u32)param_2 + 0x74u) & 0xffu);
        r4 = (u32)rd8(r3 + 0x39cu);
        if (r4 > 1u) {
            wr8(r3 + 0x39cu, (u8)(r4 - 1u));
        } else {
            wr8(r3 + 0x39cu, 0u);
        }
    }
    return;
}
