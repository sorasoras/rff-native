#include "tc_rt.h"

void fn_801eaed4(s32 param_1)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[1] = 1u;
    (void)tc_call(0x8017bff8u, &a);
    r31 = rd32(rd32(rd32(rd32((u32)param_1 + 0x2ecu) + 8u) + 0x18u));
    a.r[0] = r31;
    a.r[1] = (u32)param_1 + 0x15acu;
    a.r[2] = 0x12u;
    (void)tc_call(0x80004338u, &a);
    if ((u32)rd8((u32)param_1 + 0x159cu) < 9u) {
        a.r[0] = 0x817fdfd8u;
        a.r[1] = r31;
        a.r[2] = 0x12u;
        (void)tc_call(0x80004338u, &a);
        a.r[0] = 0x80475e24u;
        a.r[1] = (u32)rd8((u32)param_1 + 0x159cu);
        r3 = tc_call(0x8017c25cu, &a);
        c0lt = (s32)r3 < 0;
        if (r3 == 0u) {
            r4 = (u32)rd8((u32)param_1 + 0x159cu);
            r3 = (u32)param_1 + ((r4 << 2u) & 0xfffffffcu);
            if ((u32)rd8(r3 + 0x1578u) >= 5u || (u32)rd8(r3 + 0x1579u) >= 5u || (u32)rd8(r3 + 0x157au) >= 5u || (u32)rd8(r3 + 0x157bu) >= 5u) {
                wr16(((r4 << 1u) & 0x1feu) - 0x7e802028u, 0x40f0u);
            } else {
                wr16(((r4 << 1u) & 0x1feu) - 0x7e802028u, 0x4f00u);
            }
        } else if (!c0lt) {
            if ((s32)r3 < 2) {
                wr16((((u32)rd8((u32)param_1 + 0x159cu) << 1u) & 0xfffffffeu) - 0x7e802028u, 0x4ff0u);
            }
        } else if ((s32)r3 >= -1) {
            wr16((((u32)rd8((u32)param_1 + 0x159cu) << 1u) & 0xfffffffeu) - 0x7e802028u, 0x4000u);
        }
        a.r[0] = r31;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = 0x12u;
        (void)tc_call(0x80004338u, &a);
    }
    a.r[0] = rd32((u32)param_1 + 0x19cu);
    (void)tc_call(0x8004bc54u, &a);
    r3 = rd32((u32)param_1 + 0x2ecu);
    wr32((u32)param_1 + 0x19cu, 0xffffffffu);
    a.r[0] = r3;
    a.r[1] = 0u;
    r3 = tc_call(0x8004bf2cu, &a);
    wr32((u32)param_1 + 0x19cu, r3);
    wr32((u32)param_1 + 0x140u, r3);
    return;
}
