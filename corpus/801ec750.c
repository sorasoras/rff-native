#include "tc_rt.h"

void fn_801ec750(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = 0x817fdfecu;
    a.r[1] = param_2;
    (void)tc_call(0x80100dd0u, &a);
    wrf32d(0x817fdfd8u, (f64)rdf32(0x817fdfecu));
    a.r[0] = 0x817fdfe0u;
    a.r[1] = param_2;
    (void)tc_call(0x80100dd0u, &a);
    wrf32d(0x817fdfdcu, (f64)rdf32(0x817fdfe4u));
    wr8((u32)param_1 + 0x13u, rd8(rd32(param_2) + 0xb9u));
    wr32((u32)param_1 + 0x5cu, param_2);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfd8u;
    (void)tc_call(0x801ec7c4u, &a);
    return;
}
