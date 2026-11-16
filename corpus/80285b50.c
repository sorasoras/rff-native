#include "tc_rt.h"

u32 fn_80285b50(void)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = (u32)rd8(0x8050f7e5u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    if (r31 != 0u) {
        r3 = 3u;
    } else {
        r31 = 0x8050f1e4u;
        r30 = 0u;
        do {
            if ((u32)rd8(r31 + 0x59u) == 1u) {
                a.r[0] = r31 + 0x40u;
                (void)tc_call(0x80287a68u, &a);
            }
            r30 = r30 + 1u;
            r31 = r31 + 0x60u;
        } while ((s32)r30 < 10);
        r31 = 0x8050f5a4u;
        r30 = 0u;
        do {
            if ((u32)rd8(r31 + 0x59u) == 1u) {
                a.r[0] = r31 + 0x40u;
                (void)tc_call(0x80287a68u, &a);
            }
            r30 = r30 + 1u;
            r31 = r31 + 0x60u;
        } while ((s32)r30 < 6);
        r3 = 5u;
    }
    return r3;
}
