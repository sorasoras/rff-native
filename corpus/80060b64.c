#include "tc_rt.h"

u32 fn_80060b64(void)
{
    TcArgs a = {0};
    (void)tc_call(0x80209bb8u, &a);
    wr32(0x805706e0u, 2u);
    a.r[0] = 1u;
    (void)tc_call(0x80035ba0u, &a);
    return 1u;
}
