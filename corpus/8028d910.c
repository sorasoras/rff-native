#include "tc_rt.h"

void fn_8028d910(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0;
    TcArgs a = {0};
    if (rd32(param_1) == 0u) {
        r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)rd32(param_1 + 0xcu)) >> 2);
        a.r[0] = (u32)rd8(param_1 + 0x10u);
        a.r[1] = r0 + ((r0 >> 0x1fu) & 1u);
        a.r[2] = 1u;
        (void)tc_call(0x8028b108u, &a);
    }
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x8028b46cu, &a);
    wr16((u32)param_2 + 0x14u, (u16)param_3);
    wr32((u32)param_2 + 0xcu, param_4);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x8028b380u, &a);
    return;
}
