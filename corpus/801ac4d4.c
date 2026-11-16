#include "tc_rt.h"

u32 fn_801ac4d4(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801c2634u, &a);
    wr32(param_1, 0x80371f68u);
    wr32(param_1 + 0xf18u, 0x130u);
    wr32(param_1 + 0xf1cu, 0u);
    a.r[0] = param_1 + 0xf20u;
    (void)tc_call(0x801c1f68u, &a);
    a.r[0] = param_1 + 0xf70u;
    (void)tc_call(0x801ae350u, &a);
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
    (void)tc_call(0x801c3608u, &a);
    return param_1;
}
