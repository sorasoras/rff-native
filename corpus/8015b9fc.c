#include "tc_rt.h"

u32 fn_8015b9fc(u32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = param_1 + 0x168u;
    r30 = param_1;
    do {
        a.r[0] = r30;
        (void)tc_call(0x8015aa9cu, &a);
        r30 = r30 + 0x24u;
    } while (r30 < r31);
    a.r[0] = param_1;
    (void)tc_call(0x8015ba5cu, &a);
    return param_1;
}
