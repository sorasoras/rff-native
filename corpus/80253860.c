#include "tc_rt.h"

void fn_80253860(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    r4 = param_2;
    r11 = param_3 & 0xfffffeffu;
    r10 = rd32(0x80576c88u);
    wr32(r10 + ((param_1 << 2u) & 0xfffffffcu) + 0x5a4u, param_3);
    r7 = r10 + (((((param_1 >> 0x1fu) & 1u) + param_1) << 1u) & 0xfffffffcu);
    r9 = r11 & ~(8u - (u32)((u64)(r11 >= 8u) + 0x8ull));
    if ((s32)param_2 >= 8) {
        r4 = 0u;
        wr32(r10 + 0x5e8u, rd32(r10 + 0x5e8u) & ~(((param_1 & 0x20u) != 0u) ? 0u : (1u << (param_1 & 0x1fu))));
    } else {
        wr32(r10 + 0x5e8u, rd32(r10 + 0x5e8u) | (((param_1 & 0x20u) != 0u) ? 0u : (1u << (param_1 & 0x1fu))));
    }
    if ((param_1 & 1u) != 0u) {
        r8 = (((rd32(r7 + 0x150u) & 0xffff8fffu) | ((r9 << 0xcu) & 0x7000u)) & 0xfffc7fffu) | ((r4 << 0xfu) & 0x38000u);
        wr32(r7 + 0x150u, r8);
        if ((u32)param_4 == 0xffu) {
            r0 = 7u;
        } else {
            r0 = rd32((((u32)param_4 << 2u) & 0xfffffffcu) - 0x7fc71958u);
        }
        r8 = (r8 & 0xffc7ffffu) | ((r0 << 0x13u) & 0x380000u);
        wr32(r7 + 0x150u, r8);
        r3 = 0u;
        if (param_3 != 0xffu && (param_3 & 0x100u) == 0u) {
            r3 = 1u;
        }
        r8 = (r8 & 0xfffbffffu) | ((r3 << 0x12u) & 0x40000u);
        wr32(r7 + 0x150u, r8);
    } else {
        r8 = (((rd32(r7 + 0x150u) & 0xfffffff8u) | (r9 & 7u)) & 0xffffffc7u) | ((r4 << 3u) & 0x38u);
        wr32(r7 + 0x150u, r8);
        if ((u32)param_4 == 0xffu) {
            r0 = 7u;
        } else {
            r0 = rd32((((u32)param_4 << 2u) & 0xfffffffcu) - 0x7fc71958u);
        }
        r8 = (r8 & 0xfffffc7fu) | ((r0 << 7u) & 0x380u);
        wr32(r7 + 0x150u, r8);
        r3 = 0u;
        if (param_3 != 0xffu && (param_3 & 0x100u) == 0u) {
            r3 = 1u;
        }
        r8 = (r8 & 0xffffffbfu) | ((r3 << 6u) & 0x40u);
        wr32(r7 + 0x150u, r8);
    }
    wr8(0xcc008000u, 0x61u);
    r5 = rd32(0x80576c88u);
    wr32(0xcc008000u, rd32(r7 + 0x150u));
    wr16(r5 + 2u, 0u);
    wr32(r5 + 0x5fcu, rd32(r5 + 0x5fcu) | 1u);
    return;
}
