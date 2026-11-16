#include "tc_rt.h"

void fn_802925c4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x10u;
    r3 = tc_call(0x8028a0d4u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0x10u;
        (void)tc_call(0x8000443cu, &a);
        wr16(r31, 0x1700u);
        wr16(r31 + 6u, 0xffu);
        wr8(r31 + 0xeu, (u8)param_3);
        wr8(r31 + 0xfu, (u8)param_2);
        a.r[0] = r31 + 8u;
        a.r[1] = param_1;
        (void)tc_call(0x8028d2a4u, &a);
        a.r[0] = r31;
        (void)tc_call(0x8028d750u, &a);
    } else {
        if ((u32)rd8(0x80571b80u) >= 1u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x500u;
            a.r[1] = 0x80393060u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc54u, &a);
        }
    }
    return;
}
