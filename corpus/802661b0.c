#include "tc_rt.h"

void fn_802661b0(void)
{
    TcArgs a = {0};
    a.r[0] = rd32(0x80571a10u);
    (void)tc_call(0x802660d8u, &a);
    return;
}
