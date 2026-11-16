#include "tc_rt.h"

u32 fn_8028be50(u32 param_1)
{
    TcArgs a = {0};
    a.r[1] = param_1;
    (void)tc_call(0x8028bbdcu, &a);
    return 1u;
}
