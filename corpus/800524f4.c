#include "tc_rt.h"

void fn_800524f4(void)
{
    TcArgs a = {0};
    a.r[0] = 0x803cb90cu;
    (void)tc_call(0x8007ae84u, &a);
    return;
}
