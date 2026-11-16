#include "tc_rt.h"

void fn_80070068(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x8046ad4cu;
    a.r[1] = (u32)param_1;
    a.r[2] = 0u;
    r3 = tc_call(0x8007b0f4u, &a);
    if (r3 != 0u) {
        a.r[0] = 0x8046ad4cu;
        a.r[1] = r3;
        (void)tc_call(0x8007aff0u, &a);
    }
    a.r[0] = 0x8046ad24u;
    a.r[1] = rd32((u32)param_1 + 0x48u);
    (void)tc_call(0x8007aff0u, &a);
    wr32((u32)param_1 + 0x48u, 0u);
    a.r[0] = (u32)param_1 + 0x68u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_1 + 0x84u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_1 + 0xa8u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_1 + 0xc4u;
    (void)tc_call(0x8007ae84u, &a);
    wr32((u32)param_1 + 0xa0u, 0u);
    return;
}
