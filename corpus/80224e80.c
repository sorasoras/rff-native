#include "tc_rt.h"

void fn_80224e80(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804dfac0u;
    (void)tc_call(0x802232c4u, &a);
    return;
}
