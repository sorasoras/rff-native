#include "tc_rt.h"

u32 fn_8024666c(u32 param_r3)
{
    TcArgs a = {0};
    a.r[0] = param_r3;
    (void)tc_call(0x80246830u, &a);
    return 1u;
}
