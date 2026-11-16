#include "tc_rt.h"

void fn_800410ac(void)
{
    TcArgs a = {0};
    wr32(0x8034f808u, 0u);
    (void)tc_call(0x8004197cu, &a);
    return;
}
