#include "tc_rt.h"

void fn_8017343c(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804bf24cu;
    (void)tc_call(0x8016dde0u, &a);
    a.r[0] = 0x804bf24cu;
    a.r[1] = 0x80173484u;
    a.r[2] = 0x804bf240u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
