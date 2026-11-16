#include "tc_rt.h"

void fn_8007e238(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x1bcu;
    a.r[1] = 0u;
    a.r[2] = 0x30u;
    (void)tc_call(0x8000443cu, &a);
    wr32((u32)param_1 + 0x1bcu, (u32)param_2);
    r4 = (((u32)param_2 << 5u) & 0xffffffe0u) - 0x7fb54ec8u;
    r3 = ppc_mulhw(1374389535, (s32)rd16(r4 + 0x12u));
    wr16((u32)param_1 + 0x1dcu, 0u);
    r0 = (u32)((s32)r3 >> 5);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    wr32((u32)param_1 + 0x1d4u, r0);
    wr32((u32)param_1 + 0x1d8u, r0);
    wr16((u32)param_1 + 0x1deu, rd16(r4 + 0xcu));
    wr16((u32)param_1 + 0x1e0u, rd16(r4 + 0xeu));
    wr16((u32)param_1 + 0x1e2u, rd16(r4 + 0x10u));
    wr8((u32)param_1 + 0x1e4u, rd8(r4 + 0x14u));
    wr8((u32)param_1 + 0x1e8u, rd8(r4 + 0x14u));
    wr8((u32)param_1 + 0x1e5u, rd8(r4 + 0x15u));
    wr8((u32)param_1 + 0x1e9u, rd8(r4 + 0x15u));
    wr8((u32)param_1 + 0x1e6u, rd8(r4 + 0x16u));
    wr8((u32)param_1 + 0x1eau, rd8(r4 + 0x16u));
    wr8((u32)param_1 + 0x1e7u, rd8(r4 + 0x17u));
    wr8((u32)param_1 + 0x1ebu, rd8(r4 + 0x17u));
    return;
}
