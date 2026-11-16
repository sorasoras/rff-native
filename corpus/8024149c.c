#include "tc_rt.h"

void fn_8024149c(void)
{
    TcArgs a = {0};
    a.r[0] = (rd32(0x80571760u) * 0x22u) - 0x7fc771c8u;
    (void)tc_call(0x80241308u, &a);
    return;
}
