#include "tc_rt.h"

u32 fn_8009b450(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 1u;
    wr32(0x817fdff8u, 0u);
    r4 = rd32((u32)param_1 + 0x50u);
    if ((r4 & 0x40u) == 0u) {
        if ((r4 & 0x10u) == 0u) {
            r0 = rd32((u32)param_1 + 0x7cu);
            if (r0 == 0u) {
                r4 = r4 | 0x40u;
                wr32((u32)param_1 + 0x50u, r4);
                wr32((u32)param_1 + 0xbcu, 0u);
                return r31;
            }
            a.r[0] = 0x817fdfecu;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = rd32((u32)param_1 + 0x80u);
            a.r[3] = (r0 << 3u) & 0xfffffff8u;
            a.r[4] = rd32((u32)param_1 + 0x40u);
            a.r[5] = rd32((u32)param_1 + 0x44u);
            (void)tc_call(0x8009ace8u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = rd32(0x817fdfe8u);
            r3 = tc_call(0x8009c050u, &a);
            f1 = tc_lastf();
            wr32((u32)param_1 + 0xb8u, r3);
            if (r3 == 0u) {
                r31 = 0u;
                return r31;
            }
            a.r[0] = (u32)param_1 + 0xb4u;
            a.r[1] = r3;
            a.r[2] = rd32(0x817fdfecu);
            a.r[3] = rd32(0x817fdfe8u);
            a.r[4] = rd32((u32)param_1 + 0x48u);
            a.r[5] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32((u32)param_1 + 0x14u), &a);
            f1 = tc_lastf();
            if ((u32)(s8)r3 == 0u) {
                r31 = 0u;
                a.r[0] = (u32)param_1;
                a.r[1] = rd32((u32)param_1 + 0xbcu);
                (void)tc_call(0x8009c068u, &a);
                return r31;
            }
            r5 = rd32((u32)param_1 + 0xb8u);
            r3 = r5 + (rd32((u32)param_1 + 0x80u) - rd32(0x817fdfecu));
            wr32((u32)param_1 + 0x50u, rd32((u32)param_1 + 0x50u) | 0x110u);
            wr32((u32)param_1 + 0xbcu, r3);
        }
        a.r[0] = rd32((u32)param_1 + 0xb4u);
        a.r[1] = rd32((u32)param_1 + 0x48u);
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32((u32)param_1 + 0x18u), &a);
        f1 = tc_lastf();
        if ((u32)(s8)r3 == 0u) {
            r31 = 0u;
        } else {
            a.r[0] = rd32((u32)param_1 + 0xb4u);
            a.r[1] = rd32((u32)param_1 + 0x48u);
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32((u32)param_1 + 0x1cu), &a);
            r0 = rd32((u32)param_1 + 0x50u);
            wr32((u32)param_1 + 0xb4u, 0u);
            r0 = r0 & 0xffffffefu;
            r0 = r0 | 0x40u;
            wr32((u32)param_1 + 0x50u, r0);
        }
    }
    return r31;
}
