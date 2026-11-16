#include "tc_rt.h"

void fn_80052e68(void)
{
    TcArgs a = {0};
    a.r[0] = 0x803d0320u;
    (void)tc_call(0x800d431cu, &a);
    return;
}
