#include "tc_rt.h"

void fn_80110380(u32 param_1, u32 param_r4)
{
    u32 r0 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    a.r[1] = param_r4;
    (void)tc_call(0x8011005cu, &a);
    r0 = rd32(param_1 + 4u);
    wr32(0x817fdfd8u, rd32(param_1));
    wr32(0x817fdfdcu, r0);
    wr32(0x817fdfe0u, rd32(param_1 + 8u));
    r0 = rd32(param_1 + 0x28u);
    wr32(0x817fdfe4u, rd32(param_1 + 0x24u));
    wr32(0x817fdfe8u, r0);
    wr32(0x817fdfecu, rd32(param_1 + 0x2cu));
    a.r[0] = param_1;
    a.r[1] = 0x817fdfd8u;
    (void)tc_call(0x80110148u, &a);
    return;
}
