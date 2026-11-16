#include "tc_rt.h"

u32 fn_801e6f24(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8007dde4u, &a);
    wr32(param_1, 0x80375e68u);
    a.r[0] = param_1 + 0x34cu;
    a.r[1] = 0x80157d94u;
    a.r[2] = 0x80157e18u;
    a.r[3] = 0x54u;
    a.r[4] = 0x14u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = param_1 + 0xa54u;
    a.r[1] = 0x8020bea4u;
    a.r[2] = 0x8020bec8u;
    a.r[3] = 0x144u;
    a.r[4] = 2u;
    (void)tc_call(0x80255624u, &a);
    f1 = (f64)rdf32(0x80576328u);
    wr32(param_1 + 0x340u, 2u);
    f0 = (f64)rdf32(0x8057632cu);
    wrf32d(param_1 + 0xcf0u, f1);
    wrf32d(param_1 + 0xcecu, f1);
    wrf32d(param_1 + 0xce8u, f1);
    wr32(param_1 + 0x344u, 2u);
    wr32(param_1 + 0xa2cu, 0u);
    wr32(param_1 + 0xa30u, 0u);
    wr32(param_1 + 0xa34u, 0u);
    wr32(param_1 + 0xa38u, 0u);
    wr32(param_1 + 0xa3cu, 0u);
    wr32(param_1 + 0xa40u, 0u);
    wr32(param_1 + 0xa44u, 0u);
    wr32(param_1 + 0xa48u, 0u);
    wr32(param_1 + 0xa4cu, 0u);
    wr32(param_1 + 0xa50u, 0u);
    wr32(param_1 + 0x348u, 0xffffffffu);
    wrf32d(param_1 + 0xcdcu, f1);
    wrf32d(param_1 + 0xce0u, f0);
    wr32(param_1 + 0xce4u, 0u);
    wr32(param_1 + 0xcf8u, 1u);
    return param_1;
}
