#include "tc_rt.h"

void fn_8017daac(u32 param_1, s32 param_2, u32 param_3, s32 param_4)
{
    u32 ca = 0, r0 = 0, r3 = 0, r5 = 0, r27 = 0, r30 = 0, r31 = 0;
    u64 t1 = 0;
    TcArgs a = {0};
    (void)param_1;
    r3 = (((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb6d800u;
    r31 = (u32)rd8(r3 + 0x39fu);
    r30 = (u32)rd8(r3 + 0x39du);
    r27 = (u32)rd8(r3 + 0x39cu);
    if (r31 != 0u) {
        if (rd32((((u32)param_2 << 3u) & 0xfffffff8u) - 0x7fc90de4u) != 3u) {
            r3 = tc_call(0x80040b64u, &a);
            r3 = r3 & 3u;
            r0 = r3 + (r30 + r27);
            r30 = (r31 << 1u) & 0xfffffffeu;
            ca = ((s32)r0 < 0) && ((r0 & 3u) != 0u);
            r0 = (u32)((s32)r0 >> 2);
            t1 = (u64)r0 + (u64)ca;
            if ((s32)r30 >= (s32)t1) {
                r30 = (u32)t1;
            }
        } else {
            r3 = tc_call(0x80040b64u, &a);
            r5 = r30 + r27;
            r30 = ((r31 << 2u) & 0xfffffffcu) - r31;
            r3 = ppc_mulhw(1431655766, (s32)(r3 - (((ppc_mulhwu(0xaaaaaaabu, r3) >> 1u) & 0x7fffffffu) * 3u) + r5));
            r0 = r3 + ((r3 >> 0x1fu) & 1u);
            if ((s32)r30 >= (s32)r0) {
                r30 = r0;
            }
        }
        if ((s32)r30 > 22) {
            r30 = 0x16u;
        }
        r3 = tc_call(0x80040b64u, &a);
        r3 = r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u);
        r0 = (r31 * r31) + r3;
        r0 = ppc_mulhw(-368140053, (s32)r0) + r0;
        r0 = (u32)((s32)r0 >> 6);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r3 = (u32)param_4 + r0;
        if ((s32)r3 > 24) {
            r3 = 0x18u;
        }
        wr32(param_3, r31 + r30 - r3);
    }
    return;
}
