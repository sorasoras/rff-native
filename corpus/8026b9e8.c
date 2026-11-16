#include "tc_rt.h"

u32 fn_8026b9e8(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32(0x80571a38u);
    wr8(0x80571a30u, 0u);
    if (r0 == 0u) {
        r3 = tc_call(0x8022c2b0u, &a);
        r31 = r3;
        a.r[0] = 0x34000000u;
        a.r[1] = 0x817fdfe8u;
        a.r[2] = 1u;
        (void)tc_call(0x8026bfc8u, &a);
        if (((u32)rd8(0x817fdfe8u) & 8u) == 0u) {
            a.r[0] = 0x34000200u;
            a.r[1] = 0x817fdfecu;
            a.r[2] = 4u;
            (void)tc_call(0x8026bfc8u, &a);
            r4 = rd32(0x817fdfecu);
            if (((r4 & 0x1f000000u) - 0x1f000000u) == 0u) {
                wr32(0x80571a34u, r4);
                wr32(0x80571a38u, r4 & 0x1fffu);
                wr8(0x80571a30u, 1u);
            }
        }
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return rd32(0x80571a38u);
}
