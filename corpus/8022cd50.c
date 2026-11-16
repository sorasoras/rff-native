#include "tc_rt.h"

u32 fn_8022cd50(s32 param_1)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        wr16(0xcc004010u, 0xffu);
        a.r[0] = 0xf0000000u;
        (void)tc_call(0x8022c640u, &a);
    }
    return 1u;
}
