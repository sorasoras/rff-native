#include "tc_rt.h"

void fn_8020b270(void)
{
    u32 r29 = 0, r31 = 0;
    TcArgs a = {0};
    r29 = 0u;
    r31 = 0x804df158u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x8020ac04u, &a);
        r29 = r29 + 1u;
        r31 = r31 + 0x40u;
    } while (r29 < 0xau);
    wr32(0x804df194u, 0x804df198u);
    wr32(0x804df1d4u, 0x804df1d8u);
    wr32(0x804df214u, 0x804df218u);
    wr32(0x804df254u, 0x804df258u);
    wr32(0x804df294u, 0x804df298u);
    wr32(0x804df2d4u, 0x804df2d8u);
    wr32(0x804df314u, 0x804df318u);
    wr32(0x804df354u, 0x804df358u);
    wr32(0x804df394u, 0x804df398u);
    wr32(0x80571404u, 0x804df158u);
    wr32(0x80571400u, 0u);
    return;
}
