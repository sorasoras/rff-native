#include "tc_rt.h"

void fn_80074de4(u32 param_1)
{
    u32 r4 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = rd32(0x8046ad9cu);
    while (r5 != 0u) {
        r4 = r5;
        r5 = rd32(r5);
        if (param_1 == rd32(r4 + 8u)) {
            return;
        }
    }
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = r5;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x68u), &a);
    a.r[0] = 0x8046ad9cu;
    a.r[1] = param_1;
    (void)tc_call(0x8007b03cu, &a);
    return;
}
