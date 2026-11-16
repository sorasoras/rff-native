#include "tc_rt.h"

void fn_80043cbc(void)
{
    TcArgs a = {0};
    wr8(0x80571028u, 0u);
    wr32(0x8057102cu, 0u);
    wr32(0x80571030u, 0u);
    wr32(0x803c1c80u, 0u);
    wr32(0x803c1c84u, 0u);
    wr32(0x803c1c88u, 0u);
    wr32(0x803c1c8cu, 0u);
    a.r[0] = 0x80043ca4u;
    (void)tc_call(0x802309fcu, &a);
    a.r[0] = 0x80043cb0u;
    (void)tc_call(0x80230910u, &a);
    return;
}
