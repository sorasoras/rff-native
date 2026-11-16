#include "tc_rt.h"

u32 fn_8028be80(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = ((u32)param_1 - 8u - (u32)rd16(0x80539b9au)) & 0xffffu;
    a.r[1] = 0x80539b88u;
    (void)tc_call(0x8028b844u, &a);
    return 0u;
}
