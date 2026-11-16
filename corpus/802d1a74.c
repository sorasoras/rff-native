#include "tc_rt.h"

u32 fn_802d1a74(u32 param_1, s32 param_2)
{
    u32 r5 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        r5 = rd32(param_1 + 0x28u);
        wr32(param_1, 0x80399df0u);
        if (r5 != 0u && (u32)rd8(r5 + 0x54u) == 0u) {
            a.r[0] = r5;
            a.r[1] = 0xffffffffu;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            (void)tc_call(rd32(rd32(r5) + 8u), &a);
            a.r[0] = rd32(0x805474e0u);
            (void)tc_call(0x8026d4a0u, &a);
            wr32(param_1 + 0x28u, 0u);
        }
        a.r[0] = param_1 + 0xe4u;
        (void)tc_call(0x802cb7c4u, &a);
        a.r[0] = param_1 + 0xd4u;
        a.r[1] = 0x802cb69cu;
        a.r[2] = 4u;
        a.r[3] = 4u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = param_1;
        a.r[1] = 0u;
        (void)tc_call(0x802d0b00u, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
