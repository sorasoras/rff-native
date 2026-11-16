#include "tc_rt.h"

void fn_80253360(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    if ((u32)param_1 == 0u) {
        r6 = ((u32)param_2 << 2u) & 0xfffffffcu;
        r8 = r6 - 0x7fc719a8u;
        r9 = r6 - 0x7fc71980u;
    } else {
        r6 = ((u32)param_2 << 2u) & 0xfffffffcu;
        r8 = r6 - 0x7fc71994u;
        r9 = r6 - 0x7fc7196cu;
    }
    r7 = rd32(0x80576c88u);
    r3 = rd32(r8);
    r6 = r7 + (((u32)param_1 << 2u) & 0xfffffffcu);
    r8 = rd32(r6 + 0x180u);
    wr8(0xcc008000u, 0x61u);
    r8 = r8 & 0xff000000u;
    r8 = (r8 & 0xff000000u) | (r3 & 0xffffffu);
    wr32(0xcc008000u, r8);
    wr32(r6 + 0x180u, r8);
    r3 = rd32(r9);
    r8 = rd32(r6 + 0x1c0u) & 0xff00000fu;
    wr8(0xcc008000u, 0x61u);
    r8 = (r8 & 0xff00000fu) | (r3 & 0xfffff0u);
    wr32(0xcc008000u, r8);
    wr32(r6 + 0x1c0u, r8);
    wr16(r7 + 2u, 0u);
    return;
}
