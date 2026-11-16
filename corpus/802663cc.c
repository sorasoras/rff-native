#include "tc_rt.h"

u32 fn_802663cc(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = 0u;
    (void)tc_call(0x802689dcu, &a);
    if ((s32)rd32(0x80500d14u) > 0) {
        a.r[0] = param_1;
        a.r[1] = (rd32(0x80500d18u) * 0xcu) - 0x7faff2e4u;
        a.r[2] = 0xcu;
        (void)tc_call(0x8000449cu, &a);
        r0 = rd32(0x80500d18u) + 1u;
        r3 = rd32(0x80500d14u) - 1u;
        wr32(0x80500d18u, r0);
        wr32(0x80500d14u, r3);
        if (r0 == 2u) {
            wr32(0x80500d18u, 0u);
        }
        r30 = 1u;
    }
    (void)tc_call(0x802689d4u, &a);
    return r30;
}
