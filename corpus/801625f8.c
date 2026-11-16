#include "tc_rt.h"

void fn_801625f8(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804bf05cu;
    (void)tc_call(0x80163efcu, &a);
    a.r[0] = 0x804bf05cu;
    a.r[1] = 0x80163f08u;
    a.r[2] = 0x804bf050u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
