#include "tc_rt.h"

void fn_8003a994(u32 param_1)
{
    TcArgs a = {0};
    wr32(0x80570fe0u, param_1);
    a.r[0] = param_1;
    a.r[1] = 0u;
    (void)tc_call(0x80253fc8u, &a);
    return;
}
