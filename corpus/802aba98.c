#include "tc_rt.h"

void fn_802aba98(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0, r28 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r28 = param_3;
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x802acd40u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if ((u32)rd8(0x8054161cu) >= 4u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x90003u;
        a.r[1] = 0x80396c90u;
        a.r[2] = param_2;
        a.r[3] = param_3;
        a.r[4] = (u32)param_4;
        a.r[5] = (u32)param_5;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028ccb4u, &a);
    }
    if (r31 != 0u) {
        if ((u32)rd8(param_1 + 0x72u) == 0u) {
            if ((u32)param_4 == 0xe0u) {
                wr8(param_1 + 0x72u, 2u);
            } else {
                wr8(param_1 + 0x72u, 1u);
            }
        }
        r0 = (u32)rd16(r31 + 0x12u);
        if (r0 < param_3) {
            r28 = r0;
        }
        wr16(r31 + 0x12u, (u16)r28);
        wr16(r31 + 0x14u, (u16)r28);
        if ((u32)rd8(param_1 + 0x72u) == 2u) {
            wr16(r31 + 0x98u, (u16)param_5);
            if ((u32)param_5 == 0u) {
                wr8(r31 + 0x24u, 1u);
            }
        }
        if ((u32)rd8(r31 + 2u) == 1u) {
            a.r[0] = param_1;
            a.r[1] = (u32)rd8(r31 + 0xdu);
            (void)tc_call(0x802af804u, &a);
        }
    }
    return;
}
