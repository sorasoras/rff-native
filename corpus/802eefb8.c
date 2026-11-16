#include "tc_rt.h"

static u32 px_rec(u32 sp_, u32 param_1, u32 param_2)
{
    u32 r1 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(sp_ - 0x40u, sp_);
    r1 = sp_ - 0x40u;
    wr32(r1 + 0x44u, 0x817ff000u);
    wr32(r1 + 0x3cu, 0u);
    r31 = 0xffffffffu;
    wr32(r1 + 0x38u, 0u);
    wr32(r1 + 0x34u, 0u);
    a.r[0] = param_1;
    a.r[1] = 0x80570f28u;
    a.r[2] = r1 + 0x18u;
    (void)tc_call(0x802761b0u, &a);
    for (;;) {
        a.r[0] = r1 + 0x18u;
        a.r[1] = r1 + 8u;
        r3 = tc_call(0x8027622cu, &a);
        if (r3 == 0u) break;
        if (rd32(r1 + 0x10u) != 0u) {
            a.r[0] = param_1;
            a.r[1] = rd32(r1 + 0x14u);
            (void)tc_call(0x80276158u, &a);
            r3 = px_rec(r1, param_1, param_2);
            r31 = r3;
            a.r[0] = param_1;
            a.r[1] = 0x80570f2cu;
            (void)tc_call(0x80276158u, &a);
            if (r31 != 0xffffffffu) {
                (void)tc_call(0x802762e4u, &a);
                return r31;
            }
        } else {
            a.r[0] = param_2;
            a.r[1] = rd32(r1 + 0x14u);
            r3 = tc_call(0x8025ecd8u, &a);
            if (r3 == 0u) {
                r31 = rd32(r1 + 0xcu);
                (void)tc_call(0x802762e4u, &a);
                return r31;
            }
        }
    }
    (void)tc_call(0x802762e4u, &a);
    return r31;
}

s32 fn_802eefb8(u32 param_1, u32 param_2)
{
    return (s32)px_rec(0x817fe000u, param_1, param_2);
}
