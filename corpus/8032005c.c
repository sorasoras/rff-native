#include "tc_rt.h"

void fn_8032005c(void)
{
    TcArgs a = {0};
    a.r[0] = 0x8056ff70u;
    a.r[1] = 4u;
    (void)tc_call(0x802de7dcu, &a);
    a.r[0] = 0x8056ff80u;
    a.r[1] = 4u;
    (void)tc_call(0x802de7dcu, &a);
    wr32(0x8056ff7cu, 0u);
    wr32(0x8056ff8cu, 0u);
    return;
}
