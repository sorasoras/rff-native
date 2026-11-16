#include "tc_rt.h"

u32 fn_801b1fec(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = (u32)param_1 + 0x604u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x604u) + 0x14u), &a);
    r0 = rd32((u32)param_1 + 0x6e8u) - 1u;
    wr32((u32)param_1 + 0x6e8u, r0);
    if ((s32)r0 > 0) {
        return 1u;
    }
    a.r[0] = (u32)param_1 + 0x604u;
    (void)tc_call(0x8007020cu, &a);
    (void)tc_call(0x801b28b4u, &a);
    r3 = tc_call(0x801b0c80u, &a);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x801830e4u, &a);
    }
    r5 = rd32(0x80372488u);
    r0 = rd32(0x8037248cu);
    wr32(0x817fdfe8u, rd32(0x80372484u));
    wr32(0x817fdfecu, r5);
    wr32(0x817fdff0u, r0);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfe8u;
    (void)tc_call(0x801b2610u, &a);
    (void)tc_call(0x800a7ae0u, &a);
    a.r[0] = 2u;
    a.r[1] = 5u;
    (void)tc_call(0x800a796cu, &a);
    a.r[0] = 2u;
    a.r[1] = 0x3au;
    (void)tc_call(0x800a6d5cu, &a);
    return 1u;
}
