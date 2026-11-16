#include "tc_rt.h"

void fn_80251ce0(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r6 = 0, r7 = 0, r8 = 0;
    c0lt = param_1 < 3;
    if ((u32)param_1 == 3u) {
        r8 = 1u;
        r7 = (rd32(rd32(0x80576c88u) + 0xacu) & 0xffffff00u) | ((u32)rd8(param_2 + 3u) & 0xffu);
    } else if (!c0lt) {
        c0lt = param_1 < 5;
        if ((u32)param_1 == 5u) {
            r7 = rd32(param_2);
            r8 = 1u;
        } else {
            if (!c0lt) {
                return;
            }
            r7 = rd32(param_2);
            r8 = 0u;
        }
    } else {
        c0lt = param_1 < 1;
        if ((u32)param_1 == 1u) {
            r8 = 1u;
            r7 = (rd32(rd32(0x80576c88u) + 0xacu) & 0xffu) | (rd32(param_2) & 0xffffff00u);
        } else if (!c0lt) {
            r8 = 0u;
            r7 = (rd32(rd32(0x80576c88u) + 0xa8u) & 0xffffff00u) | ((u32)rd8(param_2 + 3u) & 0xffu);
        } else {
            if (param_1 < 0) {
                return;
            }
            r8 = 0u;
            r7 = (rd32(rd32(0x80576c88u) + 0xa8u) & 0xffu) | (rd32(param_2) & 0xffffff00u);
        }
    }
    r6 = rd32(0x80576c88u);
    wr32(r6 + 0x5fcu, rd32(r6 + 0x5fcu) | (((r8 & 0x20u) != 0u) ? 0u : (0x100u << (r8 & 0x1fu))));
    wr32(r6 + ((r8 << 2u) & 0xfffffffcu) + 0xa8u, r7);
    return;
}
