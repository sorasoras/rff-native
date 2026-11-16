#include "tc_rt.h"

u32 fn_80285ab8(void)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r31 = 0x8050f1e4u;
    do {
        if ((u32)rd8(r31 + 0x59u) > 1u) {
            a.r[0] = r31 + 0x40u;
            (void)tc_call(0x80294bd8u, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x60u;
    } while ((s32)r30 < 10);
    r31 = 0x8050f5a4u;
    r30 = 0u;
    do {
        if ((u32)rd8(r31 + 0x59u) > 1u) {
            a.r[0] = r31 + 0x40u;
            (void)tc_call(0x80294bd8u, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x60u;
    } while ((s32)r30 < 6);
    return 3u;
}
