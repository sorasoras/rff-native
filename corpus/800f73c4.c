#include "tc_rt.h"

u32 fn_800f73c4(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = rd32(0x80571178u);
    a.r[2] = rd32(0x8057117cu);
    (void)tc_call(0x800f73f0u, &a);
    return 1u;
}
