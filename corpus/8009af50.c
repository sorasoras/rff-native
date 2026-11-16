#include "tc_rt.h"

u32 fn_8009af50(s32 param_1, u32 param_2, u32 param_3, s32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    if ((u32)param_4 == 1u) {
        r4 = rd32((u32)param_1 + 0x70u);
        r0 = rd32((u32)param_1 + 0x6cu);
    } else {
        if ((u32)param_4 != 2u) {
            return r31;
        }
        r4 = rd32((u32)param_1 + 0x80u);
        r0 = rd32((u32)param_1 + 0x7cu);
    }
    if (param_5 < r0) {
        r30 = r4 + ((param_5 << 3u) & 0xfffffff8u);
        a.r[0] = 0x817fdfd8u;
        a.r[1] = 0x817fdfdcu;
        a.r[2] = r30;
        a.r[3] = 8u;
        a.r[4] = rd32((u32)param_1 + 0x40u);
        a.r[5] = rd32((u32)param_1 + 0x44u);
        f1 = tc_callf(0x8009ace8u, &a);
        r4 = r30;
        r3 = rd32((u32)param_1 + 0xa4u);
        r30 = r3 + (r30 - rd32(0x817fdfd8u));
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = rd32(0x817fdfdcu);
        a.r[3] = rd32((u32)param_1 + 0x48u);
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32((u32)param_1 + 0x10u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if ((u32)(s8)r3 != 0u) {
            a.r[0] = r30;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32((u32)param_1 + 4u), &a);
            f1 = tc_lastf();
            wr32(param_2, r3);
            a.r[0] = r30 + 4u;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32((u32)param_1 + 4u), &a);
            wr32(param_3, r3);
            r31 = 1u;
        }
    }
    return r31;
}
