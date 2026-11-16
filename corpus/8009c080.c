#include "tc_rt.h"

s32 fn_8009c080(s32 param_1, u32 param_2, s32 param_3, u32 param_4, s32 param_5, u32 param_6)
{
    u32 c0lt = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    c0lt = param_5 < 0;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    if ((u32)param_5 == 0u) {
        r31 = 1u;
        wr32(0x817fdfe4u, rd32((u32)param_1 + 0x60u));
        wr32(0x817fdfe0u, rd32((u32)param_1 + 0x64u));
    } else if (!c0lt && param_5 < 3) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdfe4u;
        a.r[2] = 0x817fdfe0u;
        a.r[3] = (u32)param_5;
        a.r[4] = param_6;
        r3 = tc_call(0x8009af50u, &a);
        if ((u32)(s8)r3 != 0u) {
            r31 = 1u;
        }
    }
    a.r[0] = 0x817fdfdcu;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = rd32(0x817fdfe4u);
    a.r[3] = rd32(0x817fdfe0u);
    a.r[4] = rd32((u32)param_1 + 0x40u);
    a.r[5] = rd32((u32)param_1 + 0x44u);
    f1 = tc_callf(0x8009ace8u, &a);
    if (r31 != 0u) {
        a.r[0] = (u32)param_3;
        a.r[1] = rd32(0x817fdfdcu);
        a.r[2] = rd32(0x817fdfd8u);
        a.r[3] = rd32((u32)param_1 + 0x48u);
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32((u32)param_1 + 0x10u), &a);
        if ((u32)(s8)r3 == 0u) {
            r31 = 0u;
        } else {
            wr32(param_2, (u32)param_3 + (rd32(0x817fdfe4u) - rd32(0x817fdfdcu)));
            wr32(param_4, rd32(0x817fdfe0u));
        }
    }
    return (s32)r31;
}
