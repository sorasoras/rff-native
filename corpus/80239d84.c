#include "tc_rt.h"

void fn_80239d84(s32 param_1)
{
    u32 r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_1 == (((rd32(0x8057165cu) + 1u) << 7u) & 0xffffff80u)) {
        a.r[0] = 0x804e5e80u;
        a.r[1] = 0x80u;
        (void)tc_call(0x80227738u, &a);
        a.r[0] = 0x804e5d20u;
        a.r[1] = 0x804e5e80u;
        a.r[2] = 0x80u;
        a.r[3] = 0x80239d28u;
        a.r[4] = 0x804e5dacu;
        r3 = tc_call(0x80271290u, &a);
        if (r3 == 0u) {
            return;
        }
        a.r[0] = 0x804e5d20u;
        a.r[1] = 0x80239cfcu;
        a.r[2] = 0x804e5dacu;
        r3 = tc_call(0x80271d50u, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            return;
        }
        r12 = rd32(0x80571660u);
        if (r12 == 0u) {
            return;
        }
        a.r[0] = 2u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    } else {
        r12 = rd32(0x80571660u);
        if (r12 != 0u) {
            a.r[0] = 2u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = 0.0;
            (void)tc_call(r12, &a);
        }
    }
    return;
}
