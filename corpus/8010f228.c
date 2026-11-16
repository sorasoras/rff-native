#include "tc_rt.h"

u32 fn_8010f228(s32 param_1)
{
    u32 r3 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = rd32((u32)param_1 + 0xcu);
    a.r[0] = r30;
    r3 = tc_call(0x800a41b0u, &a);
    a.r[0] = 0x80361cfcu;
    a.r[1] = r3;
    (void)tc_call(0x800a78bcu, &a);
    a.r[0] = r30;
    r3 = tc_call(0x800cd6f4u, &a);
    f1 = tc_lastf();
    if ((r3 & 0xffu) != 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 1u;
        a.r[1] = 0x4du;
        a.r[2] = 0x8010f068u;
        a.r[3] = 1u;
        a.r[4] = r30;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x800a7328u, &a);
        f1 = tc_lastf();
        wr32((u32)param_1 + 0x18u, r3);
        if (r3 != 0u) {
            a.r[0] = r30;
            (void)tc_call(0x8010f1a8u, &a);
            r3 = 0u;
            return r3;
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x8010f5bcu, &a);
        if (r3 == 0u) {
            a.r[0] = 0u;
            a.r[1] = 0x4eu;
            (void)tc_call(0x800a6d5cu, &a);
        }
        r3 = 1u;
    } else {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x8010f5bcu, &a);
        if (r3 == 0u) {
            a.r[0] = r30;
            (void)tc_call(0x8010f1a8u, &a);
            r3 = 0u;
        } else {
            r3 = 1u;
        }
    }
    return r3;
}
