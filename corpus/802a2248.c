#include "tc_rt.h"

void fn_802a2248(void)
{
    TcArgs a = {0};
    a.r[0] = 0x805404d0u;
    a.r[1] = 0u;
    a.r[2] = 0x144u;
    (void)tc_call(0x8000443cu, &a);
    wr8(0x8054059au, 1u);
    wr16(0x8054059cu, 0x40u);
    wr8(0x805405d6u, 1u);
    wr16(0x805405d8u, 0x40u);
    wr32(0x805404fcu, 0x802a2370u);
    wr8(0x80540611u, 0u);
    return;
}
