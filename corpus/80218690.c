#include "tc_rt.h"

void fn_80218690(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_2 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x68u);
        r3 = tc_call(0x800a7b34u, &a);
        if (r3 != 0u) {
            r3 = tc_call(0x800a7488u, &a);
            if (r3 != 8u || (u32)rd8(0x80492821u) != 1u) {
                a.r[0] = rd32((u32)param_1 + 0x68u);
                a.r[1] = 0u;
                (void)tc_call(0x800a7c60u, &a);
            }
        }
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80219680u, &a);
        r31 = r3;
        if (r3 != 0xffffffffu) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8021866cu, &a);
            r3 = rd32(r3 + 0xcu);
            a.r[0] = r3;
            a.r[1] = rd32((u32)param_1 + 0x68u);
            a.r[2] = r31;
            r3 = tc_call(0x800ed39cu, &a);
            a.r[0] = param_2;
            a.r[1] = r3 & 0xffu;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x805769d0u);
            (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
        }
    }
    return;
}
