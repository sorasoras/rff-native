#include "tc_rt.h"

void fn_800825dc(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x803d29f8u;
    (void)tc_call(0x80097bc0u, &a);
    a.r[0] = 0x8049e100u;
    a.r[1] = param_1;
    r3 = tc_call(0x801eba4cu, &a);
    a.r[0] = 0x80492800u;
    a.r[1] = r3;
    r3 = tc_call(0x80083024u, &a);
    a.r[0] = 0x80499060u;
    a.r[1] = r3;
    r3 = tc_call(0x800ab38cu, &a);
    a.r[0] = 0x8049afe0u;
    a.r[1] = r3;
    r3 = tc_call(0x800c90a4u, &a);
    a.r[0] = 0x8049c500u;
    a.r[1] = r3;
    (void)tc_call(0x800c83dcu, &a);
    return;
}
