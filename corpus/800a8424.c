#include "tc_rt.h"

void fn_800a8424(void)
{
    TcArgs a = {0};
    (void)tc_call(0x80079424u, &a);
    wr32(0x805711c8u, 0u);
    a.r[0] = 1u;
    (void)tc_call(0x80042ee4u, &a);
    wr32(0x803541bcu, 0u);
    wr32(0x803541b8u, 0xffu);
    (void)tc_call(0x800a86b0u, &a);
    return;
}
