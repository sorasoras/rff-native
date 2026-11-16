#include "tc_rt.h"

u32 fn_80049fa0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r7 = 0;
    r7 = (u32)rd8(0x803c6244u);
    wr32(0x803c62bcu, param_1);
    wr32(0x803c62b4u, r7);
    wr8(0x803c6244u, (u8)(((r7 + 1u) & 0xffu) + 1u));
    wr32(0x803c62b8u, param_2);
    wr8(0x803c62c4u, 0u);
    wr8(0x803c62c5u, 0u);
    wr8(0x803c62c6u, 0u);
    wr8(0x803c62c7u, (u8)param_3);
    return r7;
}
