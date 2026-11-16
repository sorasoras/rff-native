#include "tc_rt.h"

void fn_80218648(void)
{
    TcArgs a = {0};
    a.r[0] = (u32)rd8(0x80492824u);
    a.r[1] = (u32)rd8(0x80492825u);
    a.r[2] = (u32)rd8(0x80492826u);
    (void)tc_call(0x80218624u, &a);
    return;
}
