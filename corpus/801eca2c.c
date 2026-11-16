#include "tc_rt.h"

void fn_801eca2c(s32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = 0x817fdfdcu;
    a.r[1] = param_2;
    a.r[2] = rd32((u32)param_1 + 0x54u);
    a.r[3] = rd32((u32)param_1 + 0x58u);
    (void)tc_call(0x80100ddcu, &a);
    wrf32d(0x817fdfc8u, (f64)rdf32(0x817fdfdcu));
    a.r[0] = 0x817fdfd0u;
    a.r[1] = param_2;
    a.r[2] = rd32((u32)param_1 + 0x54u);
    a.r[3] = rd32((u32)param_1 + 0x58u);
    (void)tc_call(0x80100ddcu, &a);
    wrf32d(0x817fdfccu, (f64)rdf32(0x817fdfd4u));
    wr32((u32)param_1 + 0x5cu, param_2);
    wr8((u32)param_1 + 0x13u, rd8(rd32(param_2) + 0xb9u));
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfc8u;
    a.r[2] = param_3;
    (void)tc_call(0x801ecac0u, &a);
    return;
}
