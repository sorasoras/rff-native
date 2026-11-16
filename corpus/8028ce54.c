#include "tc_rt.h"

void fn_8028ce54(void)
{
    TcArgs a = {0};
    wr8(0x80570e20u, 1u);
    wr32(0x80570e24u, 1u);
    wr32(0x80571b78u, 0u);
    wr32(0x80571b7cu, 0u);
    (void)tc_call(0x8029e81cu, &a);
    (void)tc_call(0x8028cb6cu, &a);
    (void)tc_call(0x8028d5ccu, &a);
    return;
}
