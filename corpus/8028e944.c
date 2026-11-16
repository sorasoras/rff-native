#include "tc_rt.h"

void fn_8028e944(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(0x8053d5ecu);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8028a35cu, &a);
        wr32(0x8053d5ecu, 0u);
    }
    return;
}
