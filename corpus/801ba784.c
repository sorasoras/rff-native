#include "tc_rt.h"

void fn_801ba784(u32 param_r3)
{
    TcArgs a = {0};
    a.r[0] = param_r3;
    (void)tc_call(0x801b9aecu, &a);
    if (rd32(0x804b9e64u) == 0u) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x33aeu;
        (void)tc_call(0x8010a924u, &a);
    }
    return;
}
