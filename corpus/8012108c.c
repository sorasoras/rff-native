#include "tc_rt.h"

u32 fn_8012108c(u32 param_1, s32 param_2)
{
    u32 r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdfd8u;
    a.r[1] = (u32)param_2 + 4u;
    (void)tc_call(0x8030f04cu, &a);
    if (rd32(0x817fdfd8u) != 0u) {
        a.r[0] = rd32(0x817fdfd8u) + 0x100u;
        a.r[1] = 0x817fdfe0u;
        (void)tc_call(0x8030fb98u, &a);
    }
    r31 = (u32)rd8(0x817fdfe0u);
    a.r[0] = 0x817fdfd8u;
    (void)tc_call(0x8030f140u, &a);
    return r31;
}
