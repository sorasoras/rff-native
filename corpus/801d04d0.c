#include "tc_rt.h"

void fn_801d04d0(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdfe8u, param_2);
    wr32((u32)param_1 + 0x1bcu, param_2);
    a.r[0] = 0x817fdfe8u;
    r3 = tc_call(0x801495ecu, &a);
    r4 = r3 * 0x64u;
    wr16((u32)param_1 + 0x1dcu, 0u);
    wr32((u32)param_1 + 0x1d4u, r4);
    wr32((u32)param_1 + 0x1d8u, r4);
    a.r[0] = 0x817fdfe8u;
    r3 = tc_call(0x801495bcu, &a);
    wr16((u32)param_1 + 0x1deu, (u16)r3);
    a.r[0] = 0x817fdfe8u;
    r3 = tc_call(0x801495d4u, &a);
    wr16((u32)param_1 + 0x1e0u, (u16)r3);
    a.r[0] = 0x817fdfe8u;
    r3 = tc_call(0x80149604u, &a);
    wr16((u32)param_1 + 0x1e2u, (u16)r3);
    a.r[0] = 0x817fdfe8u;
    r3 = tc_call(0x8014961cu, &a);
    wr8((u32)param_1 + 0x1e4u, (u8)r3);
    a.r[0] = 0x817fdfe8u;
    r3 = tc_call(0x8014961cu, &a);
    wr8((u32)param_1 + 0x1e8u, (u8)r3);
    a.r[0] = 0x817fdfe8u;
    r3 = tc_call(0x80149634u, &a);
    wr8((u32)param_1 + 0x1e5u, (u8)r3);
    a.r[0] = 0x817fdfe8u;
    r3 = tc_call(0x80149634u, &a);
    wr8((u32)param_1 + 0x1e9u, (u8)r3);
    a.r[0] = 0x817fdfe8u;
    r3 = tc_call(0x8014964cu, &a);
    wr8((u32)param_1 + 0x1e6u, (u8)r3);
    a.r[0] = 0x817fdfe8u;
    r3 = tc_call(0x8014964cu, &a);
    wr8((u32)param_1 + 0x1eau, (u8)r3);
    a.r[0] = 0x817fdfe8u;
    r3 = tc_call(0x80149664u, &a);
    wr8((u32)param_1 + 0x1e7u, (u8)r3);
    a.r[0] = 0x817fdfe8u;
    r3 = tc_call(0x80149664u, &a);
    wr8((u32)param_1 + 0x1ebu, (u8)r3);
    return;
}
