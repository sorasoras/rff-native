#include "tc_rt.h"

void fn_8010ee30(void)
{
    TcArgs a = {0};
    a.r[0] = 0xcu;
    (void)tc_call(0x800a7904u, &a);
    return;
}
