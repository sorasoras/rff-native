#include "tc_rt.h"

u32 fn_801b17d0(u32 param_r3)
{
    TcArgs a = {0};
    a.r[0] = param_r3;
    (void)tc_call(0x801b3170u, &a);
    return 1u;
}
