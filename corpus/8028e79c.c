#include "tc_rt.h"

void fn_8028e79c(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x108u) != 0u) {
        a.r[0] = 2u;
        a.r[1] = (u32)param_1 + 8u;
        a.r[2] = 0x80540000u;
        a.r[3] = 0u;
        a.f[0] = 0.0;
        (void)tc_call(rd32(0x8053d578u), &a);
    }
    if ((u32)rd8(0x8053d5f0u) == 0u) {
        wr8(0x8053d5f0u, 0u);
        (void)tc_call(0x8028ebe0u, &a);
    } else {
        wr8(0x8053d5f1u, 1u);
        wr32(0x8053d5c0u, 0x8028e824u);
        a.r[0] = 0x8053d5b8u;
        a.r[1] = 0u;
        a.r[2] = 0xbb8u;
        (void)tc_call(0x8028d76cu, &a);
    }
    return;
}
