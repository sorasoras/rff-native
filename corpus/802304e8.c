#include "tc_rt.h"

void fn_802304e8(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r8 = 0, r26 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r26 = (rd32(0x800000f8u) >> 2u) & 0x3fffffffu;
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = r26;
    r3 = tc_call(0x80255d78u, &a);
    r4 = tc_lastr4();
    r0 = r3 ^ 0x80000000u;
    r30 = r4;
    r31 = r3;
    if ((0u - (u32)((u64)~r0 + (u64)r0 + (u64)(u32)(((u64)r0 + 0x7fffffffull + (u64)(r4 >= 0u)) >> 0x20ull))) != 0u) {
        r30 = r4 + r26;
        r31 = (u32)((u64)r3 + (u64)((r4 + r26) < r4));
    }
    a.r[0] = ((r31 << 3u) & 0xfffffff8u) | ((r30 >> 0x1du) & 7u);
    a.r[1] = (r30 << 3u) & 0xfffffff8u;
    a.r[2] = 0u;
    a.r[3] = (ppc_mulhwu(0x431bde83u, r26) >> 0xfu) & 0x1ffffu;
    r3 = tc_call(0x80255b5cu, &a);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0x3e8u;
    (void)tc_call(0x80255d78u, &a);
    wr32(param_3 + 0x24u, tc_lastr4());
    a.r[0] = r31;
    a.r[1] = r30;
    a.r[2] = 0u;
    a.r[3] = (ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu;
    r3 = tc_call(0x80255b5cu, &a);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0x3e8u;
    (void)tc_call(0x80255d78u, &a);
    wr32(param_3 + 0x20u, tc_lastr4());
    a.r[0] = (u32)((u64)~r31 + (u64)param_1 + (u64)(r30 <= param_2));
    a.r[1] = param_2 - r30;
    a.r[2] = 0u;
    a.r[3] = (rd32(0x800000f8u) >> 2u) & 0x3fffffffu;
    r3 = tc_call(0x80255b5cu, &a);
    r4 = tc_lastr4();
    r26 = r3;
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0x15180u;
    (void)tc_call(0x80255b5cu, &a);
    r3 = r26;
    r26 = tc_lastr4() + 0xb2575u;
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0x15180u;
    (void)tc_call(0x80255d78u, &a);
    r4 = tc_lastr4();
    r31 = r4;
    if ((s32)r4 < 0) {
        r26 = r26 - 1u;
        r31 = r4 + 0x15180u;
    }
    a.r[0] = r26;
    a.r[1] = param_3;
    (void)tc_call(0x80230378u, &a);
    r3 = ppc_mulhw(-2004318071, (s32)r31) + r31;
    r0 = (u32)((s32)r3 >> 5);
    r8 = r0 + ((r0 >> 0x1fu) & 1u);
    r0 = ppc_mulhw(-2004318071, (s32)r8) + r8;
    r6 = (u32)((s32)r0 >> 5);
    r4 = (u32)((s32)r0 >> 5);
    r0 = (u32)((s32)r3 >> 5);
    r6 = r6 + ((r6 >> 0x1fu) & 1u);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    r4 = r4 + ((r4 >> 0x1fu) & 1u);
    wr32(param_3 + 8u, r6);
    r0 = r0 * 0x3cu;
    wr32(param_3 + 4u, r8 - (r4 * 0x3cu));
    r0 = r31 - r0;
    wr32(param_3, r0);
    return;
}
