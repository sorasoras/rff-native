#include "tc_rt.h"

void fn_8010c69c(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((rd32(0x8057118cu) & 0x1000u) != 0u || rd32((u32)param_1 + 0x180cu) != 0u) {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3);
        a.r[0] = r3;
        r3 = tc_call(0x800a3590u, &a);
        if (r3 == 1u) {
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = param_4;
            a.r[3] = 1u;
            (void)tc_call(0x800a2b74u, &a);
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3);
            a.r[0] = r3;
            (void)tc_call(0x800a3460u, &a);
        } else {
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            a.r[0] = r3;
            (void)tc_call(0x800abe6cu, &a);
            r3 = tc_call(0x80097da4u, &a);
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
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x80097c5cu, &a);
            if (r3 == 0u) {
                r3 = tc_call(0x80097da4u, &a);
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = param_2;
                a.r[2] = param_4;
                a.r[3] = 1u;
                (void)tc_call(0x800a2b74u, &a);
                r3 = tc_call(0x80097da4u, &a);
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
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x80097c5cu, &a);
                if (r3 == 0u) {
                    r3 = tc_call(0x80097da4u, &a);
                    r3 = rd32(r3 + 0x4cu);
                    a.r[0] = r3;
                    (void)tc_call(0x800abeecu, &a);
                    return;
                }
                r3 = tc_call(0x80097da4u, &a);
                r3 = rd32(r3 + 0x4cu);
                a.r[0] = r3;
                (void)tc_call(0x800ac03cu, &a);
            } else {
                r3 = tc_call(0x80097da4u, &a);
                r3 = rd32(r3 + 0x4cu);
                a.r[0] = r3;
                (void)tc_call(0x800ac03cu, &a);
                a.r[0] = (u32)param_1 + 0xcu;
                a.r[1] = 0x18u;
                a.r[2] = 0x100u;
                a.r[3] = 0x8010c2f0u;
                r3 = tc_call(0x800a7710u, &a);
                r31 = r3;
                if (r3 != 0u) {
                    wr32(r3, param_2);
                    wr32(r3 + 8u, param_3);
                    wr32(r3 + 0xcu, param_4);
                    r3 = tc_call(0x80097da4u, &a);
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = param_2;
                    r3 = tc_call(0x800a2cf8u, &a);
                    wr32(r31 + 4u, r3);
                    a.r[0] = (u32)param_1;
                    a.r[1] = r31;
                    (void)tc_call(0x802de7f4u, &a);
                }
            }
        }
    }
    return;
}
