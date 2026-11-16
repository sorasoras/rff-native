#include "tc_rt.h"

u32 fn_802391bc(void)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    if (rd32(0x805715ccu) != 0u) {
        r30 = 0xffffffffu;
    } else {
        if (rd32(0x805715c8u) != 0u) {
            r30 = 8u;
        } else {
            r3 = rd32(0x80571650u);
            if (r3 == 0u) {
                r30 = 0u;
            } else {
                if (r3 == 0x804e5b60u) {
                    r3 = 0u;
                } else {
                    a.r[0] = r3;
                    r3 = tc_call(0x802390f4u, &a);
                }
                r30 = r3;
            }
        }
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return r30;
}
