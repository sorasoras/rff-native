#include "tc_rt.h"

void fn_801bcdec(u32 param_1)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = rd32(param_1);
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = (r30 * 0xd0u) + 0x10u;
    r3 = tc_call(0x801b39d8u, &a);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x8016172cu;
        a.r[2] = 0x801617b8u;
        a.r[3] = 0xd0u;
        a.r[4] = r30;
        r3 = tc_call(0x80255464u, &a);
    }
    wr32(param_1 + 0x164u, r3);
    a.r[0] = param_1 + 0x168u;
    (void)tc_call(0x801614ccu, &a);
    a.r[0] = param_1 + 0x168u;
    (void)tc_call(0x8007ae84u, &a);
    wr32(param_1 + 0x3cu, 0xffffffffu);
    wr32(param_1 + 0x38u, 0u);
    a.r[0] = 0x5f4u;
    a.r[1] = 0x801bceb4u;
    a.r[2] = param_1;
    r3 = tc_call(0x800f939cu, &a);
    wr32(param_1 + 0x34u, r3);
    return;
}
