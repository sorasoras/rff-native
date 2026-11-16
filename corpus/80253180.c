#include "tc_rt.h"

void fn_80253180(s32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r5 = 0;
    r4 = param_2;
    r5 = param_3;
    if (param_3 == 0xffu) {
        r5 = 0u;
    }
    if (param_2 == 0xffu) {
        r4 = 0u;
    }
    c0lt = param_1 < 2;
    if ((u32)param_1 == 2u) {
        r3 = rd32(0x80576c88u);
        wr32(r3 + 0x170u, (((rd32(r3 + 0x170u) & 0xffff8fffu) | ((r5 << 0xcu) & 0x7000u)) & 0xfffc7fffu) | ((r4 << 0xfu) & 0x38000u));
    } else if (!c0lt) {
        if (param_1 < 4) {
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x170u, (((rd32(r3 + 0x170u) & 0xffe3ffffu) | ((r5 << 0x12u) & 0x1c0000u)) & 0xff1fffffu) | ((r4 << 0x15u) & 0xe00000u));
        }
    } else {
        c0lt = param_1 < 0;
        if ((u32)param_1 == 0u) {
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x170u, (((rd32(r3 + 0x170u) & 0xfffffff8u) | (r5 & 7u)) & 0xffffffc7u) | ((r4 << 3u) & 0x38u));
        } else if (!c0lt) {
            r3 = rd32(0x80576c88u);
            wr32(r3 + 0x170u, (((rd32(r3 + 0x170u) & 0xfffffe3fu) | ((r5 << 6u) & 0x1c0u)) & 0xfffff1ffu) | ((r4 << 9u) & 0xe00u));
        }
    }
    wr8(0xcc008000u, 0x61u);
    r5 = rd32(0x80576c88u);
    wr32(0xcc008000u, rd32(r5 + 0x170u));
    wr32(r5 + 0x5fcu, rd32(r5 + 0x5fcu) | 3u);
    wr16(r5 + 2u, 0u);
    return;
}
