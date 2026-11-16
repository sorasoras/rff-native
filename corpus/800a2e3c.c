#include "tc_rt.h"

s32 fn_800a2e3c(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = (u32)param_1 + 0x10u;
    wr32(0x817fdfe0u, 0u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800a2d38u, &a);
    r29 = r3;
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800a36d0u, &a);
    if (r3 == 0u) {
        return (s32)r30;
    }
    a.r[0] = r29;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = 0x800a2d54u;
    a.r[4] = 0x817fdfe0u;
    (void)tc_call(0x8009bf8cu, &a);
    r0 = rd32(0x817fdfe0u);
    if ((s32)r0 > 96) {
        wr32(r30 + 0x3300u, 0u);
    } else {
        wr32(r30 + 0x3300u, r0);
        wr32(0x817fdfdcu, 0u);
        a.r[0] = r29;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = 0x800a2d68u;
        a.r[4] = 0x817fdfdcu;
        (void)tc_call(0x8009bf8cu, &a);
        if ((s32)rd32(0x817fdfdcu) > 32) {
            wr32(r30 + 0x3300u, 0u);
        } else {
            wr32(0x817fdfd8u, r30);
            a.r[0] = r29;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = 0x800a2dacu;
            a.r[4] = 0x817fdfd8u;
            (void)tc_call(0x8009bf8cu, &a);
        }
    }
    return (s32)r30;
}
