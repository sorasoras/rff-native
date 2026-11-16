#include "tc_rt.h"

u32 fn_802662ec(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    (void)tc_call(0x802689dcu, &a);
    r3 = rd32(0x80500d14u);
    if (r3 == 2u) {
        r31 = 0x100u;
    } else {
        r0 = rd32(0x80500d18u) + r3;
        r3 = (r0 >> 0x1fu) & 1u;
        r0 = r0 & 1u;
        r0 = r0 ^ r3;
        r0 = r0 - r3;
        r29 = r0 * 0xcu;
        a.r[0] = r29 - 0x7faff2e4u;
        a.r[1] = param_1;
        a.r[2] = 0xcu;
        (void)tc_call(0x8000449cu, &a);
        wr32(r29 - 0x7faff2e0u, rd32(0x80500d34u));
        r0 = rd32(0x80500d34u) + 1u;
        wr32(0x80500d34u, r0);
        if (r0 < 0x100u) {
            wr32(0x80500d34u, 0x100u);
        }
        wr32(0x80500d14u, rd32(0x80500d14u) + 1u);
    }
    (void)tc_call(0x802689d4u, &a);
    return r31;
}
