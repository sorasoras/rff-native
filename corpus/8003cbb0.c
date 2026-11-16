#include "tc_rt.h"

void fn_8003cbb0(void)
{
    u32 c0lt = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r3 = tc_call(0x8023f4acu, &a);
    c0lt = (s32)r3 < 2;
    wr32(0x80570ff8u, r3);
    if (r3 == 2u) {
        r31 = 0x8038e378u;
    } else if (!c0lt) {
        if (r3 == 5u) {
            r31 = 0x8038e3f0u;
        }
    } else {
        c0lt = (s32)r3 < 0;
        if (r3 == 0u) {
            r31 = 0x8038e300u;
            r3 = tc_call(0x8003cb58u, &a);
            if (r3 != 0u) {
                r31 = 0x8038e33cu;
            }
        } else if (!c0lt) {
            r31 = 0x8038e3b4u;
        }
    }
    wr8(0x80570660u, 1u);
    a.r[0] = r31;
    a.r[1] = 0x803be2b8u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    (void)tc_call(0x80250ebcu, &a);
    return;
}
