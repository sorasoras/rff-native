#include "tc_rt.h"

u32 fn_801aa478(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801c2634u, &a);
    wr32(param_1, 0x80371aacu);
    a.r[0] = param_1 + 0xf18u;
    a.r[1] = 0x801c19b4u;
    a.r[2] = 0x801c1a00u;
    a.r[3] = 0xfcu;
    a.r[4] = 0x20u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = param_1 + 0x2e98u;
    a.r[1] = 0x801c15a0u;
    a.r[2] = 0x801aa558u;
    a.r[3] = 0x100u;
    a.r[4] = 0x10u;
    (void)tc_call(0x80255624u, &a);
    if ((u32)(s8)rd8(0x80571340u) == 0u) {
        wr32(0x804db65cu, 0x80371eb0u);
        a.r[0] = 0x804db65cu;
        r3 = tc_call(0x801c38acu, &a);
        wr32(0x804db660u, r3);
        wr32(0x804db65cu, 0x80373170u);
        wr8(0x80571340u, 1u);
    }
    a.r[0] = param_1 + 0xcfcu;
    a.r[1] = rd32(0x804db660u);
    (void)tc_call(0x801c3600u, &a);
    wr32(param_1 + 0x3e98u, 0u);
    return param_1;
}
