#include "tc_rt.h"

void fn_80074e5c(void)
{
    TcArgs a = {0};
    (void)tc_call(0x80074a90u, &a);
    (void)tc_call(0x80074c4cu, &a);
    (void)tc_call(0x80074d38u, &a);
    a.r[0] = 0x80475e24u;
    (void)tc_call(0x8017d1a0u, &a);
    return;
}
