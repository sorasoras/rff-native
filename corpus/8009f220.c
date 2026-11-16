#include "tc_rt.h"

void fn_8009f220(u32 param_1)
{
    TcArgs a = {0};
    if (param_1 != 0u) {
        a.r[0] = rd32(param_1);
        a.r[1] = param_1;
        (void)tc_call(0x8009c068u, &a);
        return;
    }
    return;
}
