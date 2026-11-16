#include "tc_rt.h"

void fn_801428b4(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804beba0u;
    a.r[1] = rd32(0x804beb80u);
    (void)tc_call(0x801434acu, &a);
    return;
}
