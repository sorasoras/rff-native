#include "tc_rt.h"

void fn_8012d57c(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r8 = 0, r9 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32((u32)param_2 + 0xcu);
    r30 = rd32((u32)param_3 + 0xcu);
    if ((u32)param_2 != (u32)param_3) {
        r3 = tc_call(0x801567a0u, &a);
        f1 = tc_lastf();
        a.r[0] = r3;
        a.r[1] = r31;
        a.r[2] = r30;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x34u), &a);
        a.r[0] = 0x8049c500u;
        a.r[1] = r31;
        a.r[2] = r30;
        (void)tc_call(0x800c85ccu, &a);
        if (rd32((u32)param_1 + 0xcu) == 6u) {
            r6 = ppc_mulhw(1717986919, (s32)r31);
            r0 = (u32)((s32)r6 >> 2);
            r9 = r0 + ((r0 >> 0x1fu) & 1u);
            r5 = ppc_mulhw(1717986919, (s32)r30);
            r0 = (u32)((s32)r5 >> 2);
            r4 = (u32)((s32)r6 >> 2);
            r6 = r0 + ((r0 >> 0x1fu) & 1u);
            r0 = (u32)((s32)r5 >> 2);
            r4 = r4 + ((r4 >> 0x1fu) & 1u);
            r0 = r0 + ((r0 >> 0x1fu) & 1u);
            r8 = ppc_mulhw(1431655766, (s32)r9);
            r5 = ppc_mulhw(1431655766, (s32)r6);
            r5 = (r5 + ((r5 >> 0x1fu) & 1u)) * 3u;
            r28 = r6 - r5;
            r29 = r9 - ((r8 + ((r8 >> 0x1fu) & 1u)) * 3u);
            r0 = r0 * 0xau;
            r5 = r31 - (r4 * 0xau);
            r4 = r30 - r0;
            r30 = r5 * 0x14u;
            r31 = r4 * 0x14u;
            a.r[0] = (u32)param_1 + (r29 * 0x114u) + r30 + 0x74u;
            a.r[1] = (u32)param_1 + (r28 * 0x114u) + r31 + 0x74u;
            (void)tc_call(0x8012ee7cu, &a);
            a.r[0] = (u32)param_1 + ((r29 + 3u) * 0x114u) + r30 + 0x74u;
            a.r[1] = (u32)param_1 + ((r28 + 3u) * 0x114u) + r31 + 0x74u;
            (void)tc_call(0x8012ee7cu, &a);
        } else {
            a.r[0] = (u32)param_2;
            a.r[1] = (u32)param_3;
            (void)tc_call(0x8012ee7cu, &a);
        }
    }
    return;
}
