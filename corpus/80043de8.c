#include "tc_rt.h"

void fn_80043de8(void)
{
    TcArgs a = {0};
    (void)tc_call(0x80043da4u, &a);
    (void)tc_call(0x8022dcccu, &a);
    return;
}
