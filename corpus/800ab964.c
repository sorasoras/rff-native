#include "tc_rt.h"

void fn_800ab964(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32(param_1 + 0xcu);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (!c0lt) {
            if ((s32)r0 >= 3) {
                return;
            }
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
            if (r3 != 0u) {
                return;
            }
            if (rd32(param_1 + 0x38u) == 0u) {
                return;
            }
            r31 = rd32(param_1);
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = r31;
            (void)tc_call(0x800a2d2cu, &a);
            wr32(param_1 + 0x38u, 0u);
            return;
        }
        if ((s32)r0 < 0) {
            return;
        }
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3);
        a.r[0] = r3;
        r3 = tc_call(0x800a35f8u, &a);
        if (r3 == 0u) {
            return;
        }
        wr32(param_1 + 0xcu, 1u);
    }
    r3 = tc_call(0x800a7854u, &a);
    if (r3 == 0u) {
        wr32(param_1 + 0xcu, 2u);
        wr32(param_1 + 0x4cu, 1u);
        a.r[0] = param_1;
        (void)tc_call(0x800ac03cu, &a);
    } else {
        r3 = tc_call(0x800ab81cu, &a);
        if (r3 == 0u) {
            (void)tc_call(0x800ab90cu, &a);
            wr32(param_1 + 0xcu, 2u);
            wr32(param_1 + 0x4cu, 1u);
            a.r[0] = param_1;
            (void)tc_call(0x800ac03cu, &a);
        }
    }
    return;
}
