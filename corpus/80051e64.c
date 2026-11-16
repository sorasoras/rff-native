#include "tc_rt.h"

void fn_80051e64(f64 param_1, u32 param_2)
{
    wr32(0x803d18b0u, 1u);
    wr8(0x803d18a8u, rd8(param_2));
    wr8(0x803d18a9u, rd8(param_2 + 1u));
    wr8(0x803d18aau, rd8(param_2 + 2u));
    wr8(0x803d18abu, rd8(param_2 + 3u));
    wrf32d(0x803d18acu, param_1);
    return;
}
