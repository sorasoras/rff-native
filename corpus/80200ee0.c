#include "tc_rt.h"

void fn_80200ee0(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80200758u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x3cu;
        (void)tc_call(0x8007ae84u, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801972e0u, &a);
        r3 = rd32((u32)param_1 + 0x38u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x800fe9bcu, &a);
        }
        a.r[0] = (u32)param_1 + 0x3cu;
        (void)tc_call(0x80161594u, &a);
        a.r[0] = (u32)param_1 + 0x1a8u;
        (void)tc_call(0x80190984u, &a);
        a.r[0] = (u32)param_1 + 0x270u;
        (void)tc_call(0x801e64d0u, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80197674u, &a);
    }
    return;
}
