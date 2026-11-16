#include "tc_rt.h"

void fn_8029e974(void)
{
    TcArgs a = {0};
    a.r[0] = 0x80540120u;
    a.r[1] = 0u;
    a.r[2] = 0x3acu;
    (void)tc_call(0x8000443cu, &a);
    wr32(0x80540140u, 0x8029f6e8u);
    wr32(0x80540144u, 0x8029f6f4u);
    wr8(0x80540148u, 5u);
    (void)tc_call(0x8029e9d4u, &a);
    return;
}
