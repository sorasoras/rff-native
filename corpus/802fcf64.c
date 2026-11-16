#include "tc_rt.h"

void fn_802fcf64(void)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
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
    r30 = 0x805483f0u;
    r3 = tc_call(0x8024511cu, &a);
    if ((s32)r3 >= 40) {
        r29 = 0x80548428u;
        r31 = 0u;
        do {
            if (rd32(r30 + 0x40u) == 4u) {
                a.r[0] = r31;
                a.r[1] = 0x817fdf98u;
                a.r[2] = 0x28u;
                (void)tc_call(0x80245148u, &a);
                a.r[0] = r29;
                a.r[1] = 0x817fdf98u;
                (void)tc_call(0x802fc788u, &a);
            }
            a.r[0] = r29;
            (void)tc_call(0x802fc6b4u, &a);
            r31 = r31 + 1u;
            r29 = r29 + 0xa8u;
            r30 = r30 + 0xa8u;
        } while ((s32)r31 < 4);
        a.r[0] = 0x28u;
        (void)tc_call(0x8024520cu, &a);
    }
    return;
}
