#include "tc_rt.h"

void fn_80286548(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r29 = 0;
    TcArgs a = {0};
    r0 = (u32)rd8(0x8050f111u);
    c0lt = (s32)r0 < 2;
    if (r0 != 2u) {
        if (!c0lt) {
            if ((s32)r0 < 4) {
                a.r[0] = 0x8050f810u;
                (void)tc_call(0x80226a70u, &a);
                (void)tc_call(0x8028fdf8u, &a);
            }
        } else if ((s32)r0 >= 1) {
            r29 = rd32(0x80571b30u);
            r3 = tc_call(0x80273734u, &a);
            if (r3 != 1u) {
                a.r[0] = 0x8050f850u;
                r3 = tc_call(0x80275290u, &a);
                r29 = r29 & r3;
                a.r[0] = 0x80510e60u;
                r3 = tc_call(0x802752a8u, &a);
                r29 = r29 & r3;
                if (r29 == 0u) {
                    wr8(0x8050f111u, 3u);
                } else {
                    wr8(0x8050f111u, 2u);
                    a.r[0] = 0x80284ce4u;
                    (void)tc_call(0x80274aa4u, &a);
                }
            }
        }
    }
    return;
}
