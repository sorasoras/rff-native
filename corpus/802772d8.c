#include "tc_rt.h"

void fn_802772d8(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0;
    r0 = 0x64u;
    r7 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r6 = (u32)rd8(r7 + 0x983u);
    r3 = (u32)((s32)ppc_mulhw(1717986919, (s32)((((((r6 << 3u) & 0xfffffff8u) + r6) & 0xffffu) + ((((u32)rd16(r7 + 0x984u) * 0x64u) >> 1u) & 0xffffu)) & 0xffffu)) >> 2);
    r3 = r3 + ((r3 >> 0x1fu) & 1u);
    r5 = r3 & 0xffffu;
    if (r5 <= 0x64u) {
        r0 = r5;
    }
    wr8(r7 + 0x983u, (u8)r0);
    r3 = r0 & 0xffffu;
    wr16(r7 + 0x984u, 0u);
    if ((u32)rd8(r7 + 0x8cdu) != 0u) {
        if (r3 > 0x55u) {
            wr8(r7 + 0x8cdu, 0u);
            wr8(r7 + 0x8ceu, 0u);
            return;
        }
        if (r3 <= 0x50u) {
            return;
        }
        r3 = (u32)rd8(r7 + 0x8ceu) + 1u;
        wr8(r7 + 0x8ceu, (u8)r3);
        if ((r3 & 0xffu) < 0x14u) {
            return;
        }
        wr8(r7 + 0x8cdu, 0u);
        wr8(r7 + 0x8ceu, 0u);
        return;
    }
    if (r3 < 0x4bu) {
        wr8(r7 + 0x8cdu, 1u);
        wr8(r7 + 0x8ceu, 0u);
        return;
    }
    if (r3 >= 0x50u) {
        return;
    }
    r3 = (u32)rd8(r7 + 0x8ceu) + 1u;
    wr8(r7 + 0x8ceu, (u8)r3);
    if ((r3 & 0xffu) < 1u) {
        return;
    }
    wr8(r7 + 0x8cdu, 1u);
    wr8(r7 + 0x8ceu, 0u);
    return;
}
