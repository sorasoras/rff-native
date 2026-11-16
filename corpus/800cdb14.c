#include "tc_rt.h"

void fn_800cdb14(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    f0 = (f64)rdf32(0x80573024u);
    f1 = (f64)rdf32(0x80573020u);
    wr8(param_1, 0xffu);
    wr8(param_1 + 1u, 0xffu);
    wr8(param_1 + 2u, 0xffu);
    wr8(param_1 + 3u, 0u);
    wr8(param_1 + 4u, 0xffu);
    wr8(param_1 + 5u, 0xffu);
    wr8(param_1 + 6u, 0xffu);
    wr8(param_1 + 7u, 0xffu);
    wrf32d(param_1 + 8u, f1);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x10u, 2u);
    wrf32d(param_1 + 0x14u, f0);
    wrf32d(param_1 + 0x18u, f0);
    wr8(param_1 + 0x1cu, 1u);
    return;
}
