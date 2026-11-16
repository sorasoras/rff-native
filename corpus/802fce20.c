#include "tc_rt.h"

u32 fn_802fce20(void)
{
    u32 r29 = 0;
    TcArgs a = {0};
    if ((u32)(s8)rd8(0x80571da8u) == 0u) {
        wr8(0x805483f0u, 0u);
        r29 = 0x80548428u;
        do {
            a.r[0] = r29;
            (void)tc_call(0x802fc4a8u, &a);
            r29 = r29 + 0xa8u;
        } while (r29 < 0x805486c8u);
        wr32(0x8054845cu, 0u);
        wr32(0x80548504u, 1u);
        wr32(0x805485acu, 2u);
        wr32(0x80548654u, 3u);
        wr8(0x80571da8u, 1u);
    }
    return 0x805483f0u;
}
