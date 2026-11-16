#include "tc_rt.h"

void fn_80080fb8(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r30 = (u32)rd8(0x80492823u);
    while (r30 == (u32)rd8(0x80492823u) || param_1 != (u32)rd8(0x80492824u) || param_2 != (u32)rd8(0x80492825u)) {
        r3 = tc_call(0x80080be0u, &a);
        f1 = tc_lastf();
    }
    return;
}
