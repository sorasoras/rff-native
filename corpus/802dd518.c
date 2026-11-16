#include "tc_rt.h"

void fn_802dd518(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    r0 = (u32)rd16(rd32((u32)param_1 + 0x18u));
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        r10 = rd32((u32)param_1 + 0x10u);
        r4 = rd32((u32)param_1 + 4u);
        if ((rd32(r10 + 8u) + rd32(r10 + 0xcu)) == 0u) {
            r9 = rd32((u32)param_1 + 0x18u);
            wr32((u32)param_1 + 0x20u, 0u);
            r3 = rd32(r9 + 8u);
            r6 = rd32(rd32((u32)param_1 + 8u) + 0x1cu) + rd32(r9 + 4u);
            wr32(r4 + 0x96u, 0xau);
            r3 = r6 + r3;
            r3 = r3 - 1u;
            wr32(r4 + 0x9au, r6);
            wr32(r4 + 0x9eu, r3);
            wr32(r4 + 0xa2u, r6);
            wr32(r4 + 0xa6u, 0u);
            wr32(r4 + 0xaau, 0u);
            wr32(r4 + 0xaeu, 0u);
            wr32(r4 + 0xb2u, 0u);
            wr32(r4 + 0xb6u, 0u);
            wr32(r4 + 0xbau, 0u);
            wr32(r4 + 0xbeu, 0u);
            wr32(r4 + 0xc2u, 0u);
            wr32(r4 + 0xc6u, 0x8000000u);
            wr32(r4 + 0xcau, 0u);
        } else {
            wr32((u32)param_1 + 0x20u, 1u);
            r3 = rd32(r10 + 0xcu);
            r8 = rd32(rd32((u32)param_1 + 8u) + 0x1cu) + rd32(rd32((u32)param_1 + 0x18u) + 4u);
            r7 = r8 + rd32(r10 + 8u);
            wr32(r4 + 0x96u, 0x1000au);
            r3 = r7 + r3;
            r3 = r3 - 1u;
            wr32(r4 + 0x9au, r7);
            wr32(r4 + 0x9eu, r3);
            wr32(r4 + 0xa2u, r8);
            wr32(r4 + 0xa6u, 0u);
            wr32(r4 + 0xaau, 0u);
            wr32(r4 + 0xaeu, 0u);
            wr32(r4 + 0xb2u, 0u);
            wr32(r4 + 0xb6u, 0u);
            wr32(r4 + 0xbau, 0u);
            wr32(r4 + 0xbeu, 0u);
            wr32(r4 + 0xc2u, 0u);
            wr32(r4 + 0xc6u, 0x8000000u);
            wr32(r4 + 0xcau, 0u);
        }
        wr32(r4 + 0x1cu, (rd32(r4 + 0x1cu) & 0xffff87ffu) | 0x8400u);
        return;
    }
    if (!c0lt) {
        if ((s32)r0 >= 3) {
            return;
        }
        r10 = rd32((u32)param_1 + 0x10u);
        r4 = rd32((u32)param_1 + 4u);
        if ((rd32(r10 + 8u) + rd32(r10 + 0xcu)) == 0u) {
            r9 = rd32((u32)param_1 + 0x18u);
            wr32((u32)param_1 + 0x20u, 0u);
            r3 = rd32(r9 + 8u);
            r6 = rd32(rd32((u32)param_1 + 8u) + 0x20u) + rd32(r9 + 4u);
            wr32(r4 + 0x96u, 0x19u);
            r3 = r6 + r3;
            r3 = r3 - 1u;
            wr32(r4 + 0x9au, r6);
            wr32(r4 + 0x9eu, r3);
            wr32(r4 + 0xa2u, r6);
            wr32(r4 + 0xa6u, 0u);
            wr32(r4 + 0xaau, 0u);
            wr32(r4 + 0xaeu, 0u);
            wr32(r4 + 0xb2u, 0u);
            wr32(r4 + 0xb6u, 0u);
            wr32(r4 + 0xbau, 0u);
            wr32(r4 + 0xbeu, 0u);
            wr32(r4 + 0xc2u, 0u);
            wr32(r4 + 0xc6u, 0x1000000u);
            wr32(r4 + 0xcau, 0u);
        } else {
            wr32((u32)param_1 + 0x20u, 1u);
            r3 = rd32(r10 + 0xcu);
            r8 = rd32(rd32((u32)param_1 + 8u) + 0x20u) + rd32(rd32((u32)param_1 + 0x18u) + 4u);
            r7 = r8 + rd32(r10 + 8u);
            wr32(r4 + 0x96u, 0x10019u);
            r3 = r7 + r3;
            r3 = r3 - 1u;
            wr32(r4 + 0x9au, r7);
            wr32(r4 + 0x9eu, r3);
            wr32(r4 + 0xa2u, r8);
            wr32(r4 + 0xa6u, 0u);
            wr32(r4 + 0xaau, 0u);
            wr32(r4 + 0xaeu, 0u);
            wr32(r4 + 0xb2u, 0u);
            wr32(r4 + 0xb6u, 0u);
            wr32(r4 + 0xbau, 0u);
            wr32(r4 + 0xbeu, 0u);
            wr32(r4 + 0xc2u, 0u);
            wr32(r4 + 0xc6u, 0x1000000u);
            wr32(r4 + 0xcau, 0u);
        }
        wr32(r4 + 0x1cu, (rd32(r4 + 0x1cu) & 0xffff87ffu) | 0x8400u);
        return;
    }
    if ((s32)r0 >= 0) {
        r6 = rd32((u32)param_1 + 0x10u);
        r4 = rd32((u32)param_1 + 4u);
        if ((rd32(r6 + 8u) + rd32(r6 + 0xcu)) == 0u) {
            wr32((u32)param_1 + 0x20u, 0u);
            r9 = rd32((u32)param_1 + 0x18u);
            r3 = rd32((u32)param_1 + 0x1cu);
            r8 = rd32(r9 + 8u) - 1u;
            r6 = ppc_mulhwu(0x24924925u, r8);
            r9 = rd32(rd32((u32)param_1 + 8u) + 0x24u) + rd32(r9 + 4u);
            wr32(r4 + 0x96u, 0u);
            wr32(r4 + 0x9au, r9);
            r6 = (((r8 - r6) >> 1u) & 0x7fffffffu) + r6;
            r5 = (r6 << 1u) & 0xfffffff0u;
            r6 = r8 - (((r6 >> 3u) & 0x1fffffffu) * 0xeu);
            r6 = r6 + r9;
            r5 = r6 + r5;
            r5 = r5 + 2u;
            wr32(r4 + 0x9eu, r5);
            wr32(r4 + 0xa2u, r9 + 2u);
            wr32(r4 + 0xa6u, rd32(r3));
            wr32(r4 + 0xaau, rd32(r3 + 4u));
            wr32(r4 + 0xaeu, rd32(r3 + 8u));
            wr32(r4 + 0xb2u, rd32(r3 + 0xcu));
            wr32(r4 + 0xb6u, rd32(r3 + 0x10u));
            wr32(r4 + 0xbau, rd32(r3 + 0x14u));
            wr32(r4 + 0xbeu, rd32(r3 + 0x18u));
            wr32(r4 + 0xc2u, rd32(r3 + 0x1cu));
            wr32(r4 + 0xc6u, rd32(r3 + 0x20u));
            wr32(r4 + 0xcau, rd32(r3 + 0x24u));
            wr32(r4 + 0x1cu, (rd32(r4 + 0x1cu) & 0xffff87ffu) | 0x8400u);
            return;
        }
        wr32((u32)param_1 + 0x20u, 1u);
        r0 = rd32(r6 + 8u);
        r7 = rd32(r6 + 0xcu);
        r6 = ppc_mulhwu(0x24924925u, r0);
        r7 = r0 + r7;
        r11 = r7 - 1u;
        r7 = ppc_mulhwu(0x24924925u, r11);
        r3 = rd32((u32)param_1 + 0x1cu);
        r10 = rd32(rd32((u32)param_1 + 8u) + 0x24u) + rd32(rd32((u32)param_1 + 0x18u) + 4u);
        wr32(r4 + 0x96u, 0x10000u);
        r8 = (((r0 - r6) >> 1u) & 0x7fffffffu) + r6;
        r9 = (r8 >> 3u) & 0x1fffffffu;
        r8 = (r8 << 1u) & 0xfffffff0u;
        r6 = (((r11 - r7) >> 1u) & 0x7fffffffu) + r7;
        r7 = (r6 >> 3u) & 0x1fffffffu;
        r9 = r9 * 0xeu;
        r6 = (r6 << 1u) & 0xfffffff0u;
        r0 = r0 - r9;
        r0 = r0 + r10;
        r7 = r7 * 0xeu;
        r8 = r0 + r8;
        wr32(r4 + 0x9au, r8 + 2u);
        r6 = r11 - r7 + r10 + r6;
        wr32(r4 + 0x9eu, r6 + 2u);
        wr32(r4 + 0xa2u, r10 + 2u);
        wr32(r4 + 0xa6u, rd32(r3));
        wr32(r4 + 0xaau, rd32(r3 + 4u));
        wr32(r4 + 0xaeu, rd32(r3 + 8u));
        wr32(r4 + 0xb2u, rd32(r3 + 0xcu));
        wr32(r4 + 0xb6u, rd32(r3 + 0x10u));
        wr32(r4 + 0xbau, rd32(r3 + 0x14u));
        wr32(r4 + 0xbeu, rd32(r3 + 0x18u));
        wr32(r4 + 0xc2u, rd32(r3 + 0x1cu));
        wr32(r4 + 0xc6u, rd32(r3 + 0x20u));
        wr32(r4 + 0xcau, rd32(r3 + 0x24u));
        wr16(r4 + 0xdcu, rd16(r3 + 0x28u));
        wr16(r4 + 0xdeu, rd16(r3 + 0x2au));
        wr16(r4 + 0xe0u, rd16(r3 + 0x2cu));
        wr32(r4 + 0x1cu, (rd32(r4 + 0x1cu) & 0xffff87ffu) | 0x48400u);
        return;
    }
    return;
}
