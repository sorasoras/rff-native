#include "tc_rt.h"

u32 fn_802fa234(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = (u32)param_1 + 0x2cu;
    r3 = tc_call(0x80247470u, &a);
    r4 = rd32((u32)param_1 + 0x10u);
    r3 = (r3 + 0x87u) & 0xffffffe0u;
    if (r4 == 0u) {
        r0 = 0u;
    } else {
        r0 = rd32(r4 + 0x1cu) - r4;
    }
    if (r3 > r0) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1 + 0x10u;
        a.r[1] = 0x817fdfecu;
        a.r[2] = 0x817fdfe8u;
        (void)tc_call(0x802f4eecu, &a);
        a.r[0] = (u32)param_1 + 0x2cu;
        r3 = tc_call(0x80247498u, &a);
        r31 = r3;
        a.r[0] = (u32)param_1 + 0x10u;
        a.r[1] = rd32(0x817fdfecu);
        a.r[2] = rd32(0x817fdfe8u);
        (void)tc_call(0x802f4f40u, &a);
        a.r[0] = (u32)param_1 + 0x2cu;
        (void)tc_call(0x80247470u, &a);
        wr8((u32)param_1 + 0xcu, 1u);
        r3 = (((0u - r31) | r31) >> 0x1fu) & 1u;
    }
    return r3;
}
