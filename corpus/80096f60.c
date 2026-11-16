#include "tc_rt.h"

void fn_80096f60(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(rd32((u32)param_1 + 0x4cu) + 0x14u) == 0u && (rd32(0x8057118cu) & 0x1000u) != 0u) {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3);
        a.r[0] = r3;
        r3 = tc_call(0x800a35f8u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x800ae5d0u, &a);
            r3 = rd32((u32)param_1 + 0x4cu);
            if (rd32(r3 + 0x14u) == 0u) {
                a.r[0] = r3;
                (void)tc_call(0x800ac5dcu, &a);
                if (rd32(rd32((u32)param_1 + 0x4cu) + 0x14u) == 0u) {
                    a.r[0] = rd32((u32)param_1 + 0x24u);
                    (void)tc_call(0x801115d0u, &a);
                    if (rd32(rd32((u32)param_1 + 0x4cu) + 0x14u) == 0u) {
                        a.r[0] = rd32((u32)param_1 + 0x2cu);
                        (void)tc_call(0x8011bd78u, &a);
                    }
                }
            }
        }
    }
    return;
}
