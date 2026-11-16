#include "tc_rt.h"

void fn_8004122c(void)
{
    TcArgs a = {0};
    (void)tc_call(0x800419c4u, &a);
    (void)tc_call(0x80045ce4u, &a);
    return;
}
