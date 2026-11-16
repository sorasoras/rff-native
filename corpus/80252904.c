#include "tc_rt.h"

void fn_80252904(void)
{
    TcArgs a = {0};
    (void)tc_call(0x8025333cu, &a);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, 0x66001000u);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, 0x66001100u);
    (void)tc_call(0x8025333cu, &a);
    return;
}
