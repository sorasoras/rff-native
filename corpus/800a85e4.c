#include "tc_rt.h"

void fn_800a85e4(void)
{
    TcArgs a = {0};
    (void)tc_call(0x80079430u, &a);
    wr32(0x8049e280u, 0xau);
    wr32(0x8049e288u, 0xffffffffu);
    wr32(0x8049e2c0u, 0xau);
    wr32(0x8049e2c8u, 0xffffffffu);
    return;
}
