#include "tc_rt.h"

void fn_8017d438(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    (void)param_1;
    r3 = (((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb6d800u;
    r5 = (u32)rd8(r3 + 0x39cu);
    r6 = (u32)rd8(r3 + 0x39du);
    r7 = (u32)rd8(r3 + 0x39eu);
    r8 = (u32)rd8(r3 + 0x39fu);
    if (r5 != 0u) {
        r0 = r5 + 1u;
        if (r0 <= 0x3cu) {
            wr8(r3 + 0x39cu, (u8)r0);
        } else {
            wr8(r3 + 0x39cu, 0x3cu);
        }
    }
    if (r6 != 0u) {
        r3 = (((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb6d800u;
        r0 = (u32)rd8(r3 + 0x39du) + 1u;
        if (r0 <= 0x3cu) {
            wr8(r3 + 0x39du, (u8)r0);
        } else {
            wr8(r3 + 0x39du, 0x3cu);
        }
    }
    if (r7 != 0u) {
        r3 = (((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb6d800u;
        r0 = (u32)rd8(r3 + 0x39eu) + 1u;
        if (r0 <= 0x3cu) {
            wr8(r3 + 0x39eu, (u8)r0);
        } else {
            wr8(r3 + 0x39eu, 0x3cu);
        }
    }
    if (r8 != 0u) {
        r3 = (((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb6d800u;
        r0 = (u32)rd8(r3 + 0x39fu) + 1u;
        if (r0 <= 0x3cu) {
            wr8(r3 + 0x39fu, (u8)r0);
            return;
        }
        wr8(r3 + 0x39fu, 0x3cu);
        return;
    }
    return;
}
