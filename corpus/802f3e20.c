#include "tc_rt.h"

void fn_802f3e20(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r5 = rd32(param_1);
    if (r5 == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        r6 = 0xffffffffu;
        wr16(r5 + 0x92u, rd16(param_1 + 8u));
        r7 = (u32)rd16(param_1 + 0xeu);
        r0 = (u32)((s32)ppc_mulhw(715827883, (s32)(r7 - (u32)rd16(param_1 + 8u))) >> 4);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r8 = (u32)(s16)r0;
        if ((r8 + ((((0u - r8) & ~r8) >> 0x1fu) & 1u)) != 0u) {
            r6 = 1u;
        }
        r4 = r7 - ((u32)rd16(param_1 + 8u) + (r6 * 0x60u));
        r0 = (u32)rd16(param_1 + 8u) + (r8 * 0x60u);
        if ((s32)r4 < 0) {
            r4 = 0u - r4;
        }
        r0 = r7 - r0;
        if ((s32)r0 < 0) {
            r0 = 0u - r0;
        }
        if ((s32)r0 < (s32)r4) {
            wr16(rd32(param_1) + 0x94u, (u16)r8);
        } else {
            wr16(rd32(param_1) + 0x94u, (u16)r6);
        }
        r5 = rd32(param_1);
        r0 = (u32)rd16(param_1 + 8u) + ((u32)(s16)rd16(r5 + 0x94u) * 0x60u);
        if ((s32)r0 < 0) {
            r0 = (u32)((s32)ppc_mulhw(715827883, (s32)(0u - (u32)rd16(param_1 + 8u))) >> 4);
            r0 = r0 + ((r0 >> 0x1fu) & 1u);
            wr16(r5 + 0x94u, (u16)r0);
        } else {
            if ((s32)r0 > 32767) {
                r0 = (u32)((s32)ppc_mulhw(715827883, (s32)(0x7fffu - (u32)rd16(param_1 + 8u))) >> 4);
                r0 = r0 + ((r0 >> 0x1fu) & 1u);
                wr16(r5 + 0x94u, (u16)r0);
            }
        }
        r4 = rd32(param_1);
        if ((u32)(s16)rd16(r4 + 0x94u) == 0u && (u32)(s16)rd16(param_1 + 0xau) == 0u) {
            wr16(r4 + 0x92u, rd16(param_1 + 0xeu));
        }
        r5 = rd32(param_1);
        r6 = (rd32(param_1 + 4u) & 0xfffffdffu) | 0x100u;
        wr32(param_1 + 4u, r6);
        wr16(param_1 + 8u, rd16(r5 + 0x92u));
        wr16(param_1 + 0xau, rd16(r5 + 0x94u));
        wr32(r5 + 0x1cu, rd32(r5 + 0x1cu) | r6);
        wr32(param_1 + 4u, 0u);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
