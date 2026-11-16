#include "tc_rt.h"

u32 fn_802096d4(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1) + 0xcdu;
    r3 = tc_call(0x800f8a08u, &a);
    r4 = 0x49u;
    r3 = (r3 * 0x54u) - 0x7fb62080u;
    if ((s32)rd8(r3 + 0x78u) >= 12) {
        r4 = 0x4au;
    }
    a.r[0] = 0xdu;
    a.r[1] = r4;
    a.r[2] = 0u;
    r3 = tc_call(0x801412f8u, &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    a.r[2] = 0u;
    (void)tc_call(0x801006a4u, &a);
    return 1u;
}
