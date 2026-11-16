#include "tc_rt.h"

u32 fn_8020c6f8(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    if (rd32(param_1 + 4u) != 0xffffffffu) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        (void)tc_call(0x8020c768u, &a);
    }
    if (rd32(param_1) != 0xffffffffu) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        (void)tc_call(0x8020c93cu, &a);
    }
    return 0u;
}
