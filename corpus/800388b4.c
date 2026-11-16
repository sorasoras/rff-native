#include "tc_rt.h"

void fn_800388b4(void)
{
    TcArgs a = {0};
    wr32(0x803af118u, 0u);
    wr32(0x803af11cu, 0x80000000u);
    a.r[0] = 0x803af120u;
    a.r[1] = 0u;
    a.r[2] = 0x1fu;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = 0x803ace00u;
    a.r[1] = 0x800387d0u;
    a.r[2] = 0x803af118u;
    a.r[3] = 0x803af118u;
    a.r[4] = 0x2000u;
    a.r[5] = 0xfu;
    a.r[6] = 1u;
    (void)tc_call(0x8022f550u, &a);
    a.r[0] = 0x803ace00u;
    (void)tc_call(0x8022fbb8u, &a);
    return;
}
