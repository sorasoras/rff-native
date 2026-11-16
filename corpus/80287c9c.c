#include "tc_rt.h"

u32 fn_80287c9c(void)
{
    u32 ctr = 0, r3 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = r3;
    if ((u32)rd8(0x8050f7e9u) == 0u) {
        r3 = 0x8050f100u;
        r28 = 0u;
        ctr = 0xau;
        do {
            if ((u32)rd8(r3 + 0x13du) == 0u) {
                (void)tc_call(0x80289ba4u, &a);
                r30 = (r28 * 0x60u) - 0x7faf0e1cu;
                a.r[0] = r29;
                (void)tc_call(0x8022c2d8u, &a);
                return r30;
            }
            r3 = r3 + 0x60u;
            r28 = r28 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    } else {
        r30 = rd32(rd32(0x8050f118u));
    }
    a.r[0] = r29;
    (void)tc_call(0x8022c2d8u, &a);
    return r30;
}
