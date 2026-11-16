#include "tc_rt.h"

void fn_8027e5dc(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r4 = 0, r12 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = (param_r3 << 2u) & 0xfffffffcu;
    r29 = rd32(r31 - 0x7faf46b0u);
    if (param_r4 != 0u) {
        a.r[0] = r29 + 0x5ecu;
        f1 = tc_callf(0x8027e57cu, &a);
        wr8(r29 + 0x98du, 0u);
        if (param_r4 == 0xffffffffu) {
            r4 = 0xfdu;
        } else {
            if (rd32(r29 + 0x840u) != 0u) {
                r3 = (u32)rd8(param_r3 - 0x7fa8e4f0u);
                wr8(param_r3 - 0x7fa8e4f0u, (u8)(r3 + 1u));
                if (r3 < 0x20u) {
                    r29 = rd32(r31 - 0x7faf46b0u);
                    a.r[0] = r29 + 0x5ecu;
                    (void)tc_call(0x8027e57cu, &a);
                    a.r[0] = r29 + 0x5ecu;
                    a.r[1] = rd32(r29 + 0x8b8u);
                    a.r[2] = (u32)rd8(r29 + 0x98eu);
                    a.r[3] = 0x8027e5dcu;
                    (void)tc_call(0x8027de44u, &a);
                    wr8(r29 + 0x98du, 1u);
                    a.r[0] = r29 + 0x5ecu;
                    a.r[1] = 0x55u;
                    a.r[2] = 0x4a400f0u;
                    a.r[3] = 0x8027e5dcu;
                    (void)tc_call(0x8027e064u, &a);
                    a.r[0] = r29 + 0x5ecu;
                    a.r[1] = 0u;
                    a.r[2] = 0x4a400fbu;
                    a.r[3] = 0x8027e5dcu;
                    (void)tc_call(0x8027e064u, &a);
                    a.r[0] = r29 + 0x5ecu;
                    a.r[1] = r29 + 0x934u;
                    a.r[2] = 6u;
                    a.r[3] = 0x4a400fau;
                    a.r[4] = 0x8027e5dcu;
                    (void)tc_call(0x8027e3d0u, &a);
                    return;
                }
                r4 = 0xfcu;
            } else {
                (void)tc_call(0x80284b24u, &a);
                a.r[0] = r29 + 0x5ecu;
                a.r[1] = rd32(r29 + 0x8b8u);
                a.r[2] = (u32)rd8(r29 + 0x98eu);
                a.r[3] = 0u;
                (void)tc_call(0x8027de44u, &a);
                return;
            }
        }
        wr8(r29 + 0x8c1u, (u8)r4);
        r12 = rd32(r29 + 0x8a0u);
        if (r12 != 0u) {
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        }
    }
    return;
}
