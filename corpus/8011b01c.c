#include "tc_rt.h"

u32 fn_8011b01c(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(0x80571274u) != 0u) {
        r3 = 1u;
    } else {
        if (rd32(0x80571278u) == 0u) {
            r3 = tc_call(0x800545e4u, &a);
            f1 = tc_lastf();
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[1] = 0x37eu;
            a.r[2] = (u32)param_1;
            a.r[3] = 0u;
            a.r[4] = 0xffffffffu;
            r3 = tc_call(0x80050dd4u, &a);
            wr32(0x80571280u, r3);
            wr32(0x80571278u, 1u);
        }
        if ((u32)param_1 != 0u) {
            a.r[0] = 1u;
            (void)tc_call(0x80050c04u, &a);
            r3 = rd32(0x80571280u);
            wr32(0x80571278u, 0u);
            a.r[0] = r3;
            r3 = tc_call(0x80045be0u, &a);
            wr32(0x80571274u, r3);
            r3 = 1u;
        } else {
            a.r[0] = 0u;
            r3 = tc_call(0x80050c04u, &a);
            if (r3 == 0u) {
                r3 = rd32(0x80571280u);
                wr32(0x80571278u, 0u);
                a.r[0] = r3;
                r3 = tc_call(0x80045be0u, &a);
                wr32(0x80571274u, r3);
                r3 = 1u;
            } else {
                r3 = 0u;
            }
        }
    }
    return r3;
}
