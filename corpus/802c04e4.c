#include "tc_rt.h"

u32 fn_802c04e4(s32 param_1)
{
    return (u32)rd8((u32)param_1 + 0xcfu) & 1u;
}
