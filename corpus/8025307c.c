#include "tc_rt.h"

void fn_8025307c(s32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r8 = 0;
    c0lt = param_1 < 2;
    if ((u32)param_1 == 2u) {
        r8 = rd32(0x80576c88u);
        wr32(r8 + 0x17cu, (((((rd32(r8 + 0x17cu) & 0xfffffff0u) | (param_2 & 0xfu)) & 0xffffff0fu) | ((param_3 << 4u) & 0xf0u)) & 0xffffffu) | 0x26000000u);
        wr8(0xcc008000u, 0x61u);
        wr32(0xcc008000u, rd32(r8 + 0x17cu));
    } else if (!c0lt) {
        if (param_1 < 4) {
            r8 = rd32(0x80576c88u);
            wr32(r8 + 0x17cu, (((((rd32(r8 + 0x17cu) & 0xfffff0ffu) | ((param_2 << 8u) & 0xf00u)) & 0xffff0fffu) | ((param_3 << 0xcu) & 0xf000u)) & 0xffffffu) | 0x26000000u);
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, rd32(r8 + 0x17cu));
        }
    } else {
        c0lt = param_1 < 0;
        if ((u32)param_1 == 0u) {
            r8 = rd32(0x80576c88u);
            wr32(r8 + 0x178u, (((((rd32(r8 + 0x178u) & 0xfffffff0u) | (param_2 & 0xfu)) & 0xffffff0fu) | ((param_3 << 4u) & 0xf0u)) & 0xffffffu) | 0x25000000u);
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, rd32(r8 + 0x178u));
        } else if (!c0lt) {
            r8 = rd32(0x80576c88u);
            wr32(r8 + 0x178u, (((((rd32(r8 + 0x178u) & 0xfffff0ffu) | ((param_2 << 8u) & 0xf00u)) & 0xffff0fffu) | ((param_3 << 0xcu) & 0xf000u)) & 0xffffffu) | 0x25000000u);
            wr8(0xcc008000u, 0x61u);
            wr32(0xcc008000u, rd32(r8 + 0x178u));
        }
    }
    wr16(rd32(0x80576c88u) + 2u, 0u);
    return;
}
