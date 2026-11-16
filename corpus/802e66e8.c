#include "tc_rt.h"

u32 fn_802e66e8(u32 param_1, s32 param_2)
{
    u32 c1eq = 0, r31 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        r31 = rd32(param_1 + 0x28u);
        c1eq = r31 == 0u;
        wr32(param_1, 0x8039cd50u);
        if (!c1eq && (u32)rd8(r31 + 0x59u) == 0u) {
            if (!c1eq) {
                a.r[0] = r31;
                a.r[1] = 0xffffffffu;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = 0.0;
                (void)tc_call(rd32(rd32(r31) + 8u), &a);
                a.r[0] = rd32(0x80571d40u);
                (void)tc_call(0x8026d4a0u, &a);
            }
            wr32(param_1 + 0x28u, 0u);
        }
        a.r[0] = param_1 + 0xe8u;
        (void)tc_call(0x802ef3d4u, &a);
        a.r[0] = param_1 + 0xd8u;
        a.r[1] = 0x800fe97cu;
        a.r[2] = 4u;
        a.r[3] = 4u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = param_1;
        a.r[1] = 0u;
        (void)tc_call(0x802e43e0u, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
