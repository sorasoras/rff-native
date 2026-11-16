#include "tc_rt.h"

void fn_80041390(void)
{
    TcArgs a = {0};
    (void)tc_call(0x8004190cu, &a);
    wr32(0x8034f808u, 0u);
    return;
}
