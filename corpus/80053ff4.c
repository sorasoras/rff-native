#include "tc_rt.h"

void fn_80053ff4(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u);
    r3 = tc_call(0x8007d150u, &a);
    if (r3 != 0u) {
        r31 = rd32(r3 + 4u);
    } else {
        r31 = 3u;
    }
    if ((rd32(0x8057118cu) & 0x2000u) != 0u) {
        a.r[0] = r31;
        (void)tc_call(0x8005336cu, &a);
    }
    if (rd32(0x805706d8u) != 0u) {
        a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        (void)tc_call(0x80054bc8u, &a);
    }
    a.r[0] = r31;
    (void)tc_call(0x80053f58u, &a);
    return;
}
