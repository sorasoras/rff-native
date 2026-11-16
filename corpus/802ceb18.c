#include "tc_rt.h"

u32 fn_802ceb18(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        wr32(param_1, 0x80399d40u);
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = 0.0;
        (void)tc_call(rd32(0x80399d58u), &a);
        if (rd32(param_1 + 0x58u) != 0u) {
            a.r[0] = rd32(0x805474e0u);
            (void)tc_call(0x8026d4a0u, &a);
            wr32(param_1 + 0x58u, 0u);
        }
        a.r[0] = param_1 + 0x3cu;
        a.r[1] = 0x802cb69cu;
        a.r[2] = 4u;
        a.r[3] = 4u;
        (void)tc_call(0x8025571cu, &a);
        r3 = param_1 + 0x18u;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x802d79c0u, &a);
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
