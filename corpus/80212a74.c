#include "tc_rt.h"

u32 fn_80212a74(s32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = param_3;
    r3 = tc_call(0x8021288cu, &a);
    if (r3 != 0u) {
        r3 = 0u;
        wr8(param_4, 1u);
    } else {
        wr8(param_4, 0u);
        a.r[0] = (u32)param_2;
        a.r[1] = param_3;
        r3 = tc_call(0x800a4260u, &a);
        r31 = r3;
        if (r3 != 0u) {
            a.r[0] = rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x60u);
            r3 = tc_call(0x80219680u, &a);
            if (r3 != 0xffffffffu) {
                a.r[0] = rd32(rd32((u32)param_1 + 0x5cu) + 0xcu);
                a.r[1] = (u32)param_2;
                a.r[2] = r3;
                r3 = tc_call(0x800ed39cu, &a);
                a.r[0] = r31;
                a.r[1] = (u32)(s8)r3;
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.f[0] = (f64)rdf32(0x80576960u);
                (void)tc_call(rd32(rd32(r31) + 0x54u), &a);
                a.f[0] = (f64)rdf32(0x80576960u);
                a.r[0] = r31;
                (void)tc_call(0x80064b48u, &a);
            }
        }
        r3 = r31;
    }
    return r3;
}
