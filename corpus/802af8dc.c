#include "tc_rt.h"

void fn_802af8dc(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0, r8 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x802acd40u, &a);
    r31 = r3;
    if ((u32)rd8((u32)param_1 + 0x6cu) != 5u) {
        wr8(r3 + 0xeu, 0xdu);
    } else {
        r4 = (u32)rd8((u32)param_1 + 0x72u);
        r0 = 2u;
        if (r4 != 0u) {
            r0 = r4;
        }
        r0 = r0 & 0xffu;
        if (r0 == 2u) {
            r4 = (u32)rd16(r3 + 0x9cu);
            r7 = 0xf0u;
            r0 = 7u;
            if (r4 < 7u) {
                r0 = r4;
            }
            r8 = r0 & 0xffu;
            wr16(r3 + 0x9au, (u16)r8);
        } else {
            r7 = 0u;
            r8 = 0u;
        }
        wr8(r3 + 0x69u, (u8)((u32)rd8(r3 + 0x69u) | 1u));
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        a.r[2] = 1u;
        a.r[3] = param_3;
        a.r[4] = r7;
        a.r[5] = r8;
        f1 = tc_callf(0x802b0170u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r31;
        a.r[1] = 0x3cu;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802b167cu, &a);
    }
    return;
}
