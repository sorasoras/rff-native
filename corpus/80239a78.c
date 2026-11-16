#include "tc_rt.h"

u32 fn_80239a78(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (param_1 == 0x804e5c60u) {
        return 1u;
    }
    r3 = tc_call(0x8023cf24u, &a);
    return r3;
}
