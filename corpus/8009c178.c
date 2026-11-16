#include "tc_rt.h"

s32 fn_8009c178(s32 param_1, u32 param_2, u32 param_3, s32 param_4, u32 param_5, s32 param_6, u32 param_7)
{
    u32 c0lt = 0, r3 = 0, r24 = 0, r25 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    c0lt = param_6 < 1;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    if ((u32)param_6 == 1u) {
        if ((rd32((u32)param_1 + 0x50u) & 0x20u) != 0u && param_7 < rd32((u32)param_1 + 0x6cu)) {
            r31 = (param_7 << 3u) & 0xfffffff8u;
            a.r[0] = rd32((u32)param_1 + 0xb0u) + r31;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = (u32)param_4;
            a.r[4] = param_5;
            a.r[5] = (u32)param_6;
            a.r[6] = param_7;
            a.f[0] = 0.0;
            r3 = tc_call(rd32((u32)param_1 + 4u), &a);
            f1 = tc_lastf();
            r25 = r3;
            a.r[0] = r31 + rd32((u32)param_1 + 0xb0u) + 4u;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32((u32)param_1 + 4u), &a);
            r24 = r3;
            r31 = 1u;
        }
    } else if (!c0lt) {
        if ((param_6 < 3 && (rd32((u32)param_1 + 0x50u) & 0x40u) != 0u) && param_7 < rd32((u32)param_1 + 0x7cu)) {
            r31 = (param_7 << 3u) & 0xfffffff8u;
            a.r[0] = rd32((u32)param_1 + 0xbcu) + r31;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = (u32)param_4;
            a.r[4] = param_5;
            a.r[5] = (u32)param_6;
            a.r[6] = param_7;
            a.f[0] = 0.0;
            r3 = tc_call(rd32((u32)param_1 + 4u), &a);
            f1 = tc_lastf();
            r25 = r3;
            a.r[0] = r31 + rd32((u32)param_1 + 0xbcu) + 4u;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32((u32)param_1 + 4u), &a);
            r24 = r3;
            r31 = 1u;
        }
    } else if (param_6 >= 0 && (rd32((u32)param_1 + 0x50u) & 2u) != 0u) {
        r25 = rd32((u32)param_1 + 0x60u);
        r31 = 1u;
        r24 = rd32((u32)param_1 + 0x64u);
    }
    if (r31 != 0u) {
        a.r[0] = 0x817fdfdcu;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = r25;
        a.r[3] = r24;
        a.r[4] = rd32((u32)param_1 + 0x40u);
        a.r[5] = rd32((u32)param_1 + 0x44u);
        f1 = tc_callf(0x8009ace8u, &a);
        a.r[0] = param_2;
        a.r[1] = (u32)param_4;
        a.r[2] = rd32(0x817fdfdcu);
        a.r[3] = rd32(0x817fdfd8u);
        a.r[4] = rd32((u32)param_1 + 0x48u);
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32((u32)param_1 + 0x14u), &a);
        if ((u32)(s8)r3 == 0u) {
            r31 = 0u;
        } else {
            wr32(param_3, (u32)param_4 + (r25 - rd32(0x817fdfdcu)));
            wr32(param_5, r24);
        }
    }
    return (s32)r31;
}
