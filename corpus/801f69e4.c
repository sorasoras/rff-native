#include "tc_rt.h"

void fn_801f69e4(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = 0x817fdfd8u;
    wr32(0x817fdff4u, 0u);
    r29 = 0u;
    wr32(0x817fdff0u, 0u);
    r4 = rd32(0x8033c324u);
    r3 = rd32(0x8033c328u);
    r0 = rd32(0x8033c32cu);
    wr32(0x817fdfd8u, rd32(0x8033c320u));
    wr32(0x817fdfdcu, r4);
    wr32(0x817fdfe0u, r3);
    wr32(0x817fdfe4u, r0);
    while ((s32)r29 < (s32)rd32(param_1)) {
        r31 = rd32(0x80571298u);
        a.r[0] = param_1;
        a.r[1] = r29;
        r3 = tc_call(0x801894d8u, &a);
        a.r[0] = r31;
        a.r[1] = r3;
        a.r[2] = rd32(r30);
        a.r[3] = 0u;
        (void)tc_call(0x801f2e78u, &a);
        r30 = r30 + 4u;
        r29 = r29 + 1u;
    }
    return;
}
