#include "tc_rt.h"

void fn_80274a98(void)
{
    TcArgs a = {0};
    a.r[0] = 0x80503780u;
    (void)tc_call(0x802300d0u, &a);
    return;
}
