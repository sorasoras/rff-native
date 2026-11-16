#include "tc_rt.h"

void fn_8008252c(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x8049e100u;
    a.r[1] = param_1;
    r3 = tc_call(0x801eba8cu, &a);
    a.r[0] = 0x80492800u;
    a.r[1] = r3;
    r3 = tc_call(0x80083190u, &a);
    a.r[0] = 0x80499060u;
    a.r[1] = r3;
    r3 = tc_call(0x800ab3f4u, &a);
    a.r[0] = 0x8049afe0u;
    a.r[1] = r3;
    r3 = tc_call(0x800c90fcu, &a);
    a.r[0] = 0x8049c500u;
    a.r[1] = r3;
    (void)tc_call(0x800c841cu, &a);
    wr32(0x80571158u, (u32)rd8(0x80492c5cu));
    a.r[0] = 0x8049e100u;
    (void)tc_call(0x801ebae0u, &a);
    return;
}
