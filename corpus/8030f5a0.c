#include "tc_rt.h"

void fn_8030f5a0(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x802f5c2cu, &a);
    f0 = (f64)rdf32(0x80577840u);
    wr8(param_1 + 0xe9u, 0u);
    wr8(param_1 + 0xeau, 0u);
    wr8(param_1 + 0xecu, 0u);
    wrf32d(param_1 + 0xf0u, f0);
    wr32(param_1 + 0xf4u, param_2);
    wr8(param_1 + 0xf8u, 0x40u);
    wr32(param_1 + 0xfcu, param_3);
    wr32(param_1 + 0x100u, param_4);
    wr32(param_1 + 0x104u, 0u);
    wr32(param_1 + 0x108u, 0xffffffffu);
    wrf32d(param_1 + 0x124u, f0);
    wr8(param_1 + 0x128u, 0x40u);
    wr8(param_1 + 0x129u, 0u);
    wr8(param_1 + 0x12au, 0u);
    wr8(param_1 + 0x12bu, 0u);
    wr8(param_1 + 0x12cu, 0u);
    wr8(param_1 + 0x12du, 0x7fu);
    a.r[0] = param_1 + 0x114u;
    (void)tc_call(0x802fad50u, &a);
    wr8(param_1 + 0xebu, 0u);
    wr32(param_1 + 0x130u, 0u);
    return;
}
