#include "tc_rt.h"

u32 fn_800a2dac(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = rd32(param_3);
    a.r[0] = param_2;
    r3 = tc_call(0x8009ef58u, &a);
    r31 = r3;
    r29 = 0u;
    while ((s32)r29 < (s32)r31) {
        a.r[0] = param_2;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = r30;
        a.r[3] = r29;
        (void)tc_call(0x8009efa8u, &a);
        r30 = r30 + 4u;
        r29 = r29 + 1u;
    }
    a.r[0] = param_2;
    a.r[1] = rd32(param_3) + 0x84u;
    (void)tc_call(0x8009eff8u, &a);
    wr32(rd32(param_3) + 0x80u, r31);
    wr32(param_3, rd32(param_3) + 0x88u);
    return 0u;
}
