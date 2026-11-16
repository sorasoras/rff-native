#include "tc_rt.h"

u32 fn_8012447c(u32 param_r3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = param_r3;
    r3 = tc_call(0x80124424u, &a);
    if (r3 == 3u && rd32(0x804b9e64u) == 0u) {
        r31 = 1u;
    }
    return r31;
}
