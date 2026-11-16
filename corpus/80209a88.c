#include "tc_rt.h"

u32 fn_80209a88(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1) + 0xcdu;
    r3 = tc_call(0x800f8a08u, &a);
    a.r[0] = param_1;
    a.r[1] = (r3 * 0x54u) - 0x7fb62050u;
    a.r[2] = 0u;
    (void)tc_call(0x801006a4u, &a);
    return 1u;
}
