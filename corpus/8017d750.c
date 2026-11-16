#include "tc_rt.h"

void fn_8017d750(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 ca = 0, r0 = 0, r3 = 0, r27 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r3 = (((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb6d800u;
    r31 = (u32)rd8(r3 + 0x39cu);
    r30 = (u32)rd8(r3 + 0x39du);
    if (r31 != 0u) {
        r3 = tc_call(0x80040b64u, &a);
        r0 = (u32)((s32)ppc_mulhw(458129845, (s32)((r30 + 0x14u) * (r31 + (r3 & 7u)))) >> 4);
        r27 = r0 + ((r0 >> 0x1fu) & 1u);
        if ((s32)r30 >= (s32)r27) {
            r30 = r27;
        }
        wr32(param_4, r30);
        r27 = r30;
        if (rd32((((u32)param_2 << 3u) & 0xfffffff8u) - 0x7fc90de4u) == 0u) {
            r3 = tc_call(0x80040b64u, &a);
            r3 = r31 + (r3 - (((ppc_mulhwu(0xcccccccdu, r3) >> 4u) & 0xfffffffu) * 0x14u));
            r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)(r3 + 2u)) >> 3);
            r0 = r0 + ((r0 >> 0x1fu) & 1u);
            r27 = r30 + r0;
        }
        r3 = tc_call(0x80040b64u, &a);
        r3 = r3 & 3u;
        r3 = r31 + r3;
        r3 = r3 + 2u;
        ca = ((s32)r3 < 0) && ((r3 & 3u) != 0u);
        r3 = (u32)((s32)r3 >> 2);
        wr32(param_3, r31 + r27 - (u32)((u64)r3 + (u64)ca));
    }
    return;
}
