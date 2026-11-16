#include "tc_rt.h"

void fn_80076994(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = 0u;
    if ((u32)rd8(0x80492824u) > 4u) {
        r5 = 1u;
    }
    r0 = rd32(0x80571184u);
    c0lt = (s32)r0 < 3;
    if (r0 == 3u) {
        r3 = 6u;
    } else if (!c0lt) {
        c0lt = (s32)r0 < 5;
        if (r0 == 5u) {
            r3 = 9u;
        } else if (!c0lt) {
            r3 = 6u;
        } else {
            r3 = 8u;
        }
    } else if ((s32)r0 >= 2) {
        r3 = 0xau;
    } else if ((s32)r0 >= 0) {
        r3 = 0xau;
    } else {
        r3 = 6u;
    }
    if (r5 == 0u) {
        wr8(0x80492824u, (u8)r3);
        wr8(0x80492825u, 0u);
        return;
    }
    a.r[0] = r3;
    a.r[1] = 0u;
    (void)tc_call(0x80080fb8u, &a);
    return;
}
