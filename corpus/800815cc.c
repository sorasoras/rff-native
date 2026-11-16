#include "tc_rt.h"

u32 fn_800815cc(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)rd16(param_3);
    r3 = tc_call(0x800cd704u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r31 = r3 & 0xffu;
    if ((u32)rd16(param_3) != 0x2e8u && (s32)r31 > 1) {
        r30 = 0u;
        while (r30 < param_2) {
            a.r[0] = r30;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            r3 = tc_call(param_1, &a);
            f1 = tc_lastf();
            r4 = (u32)rd16(r3);
            if (r4 == (u32)rd16(param_3)) {
                r4 = (u32)rd8(r3 + 3u);
                if (r4 == (u32)rd8(param_3 + 3u)) {
                    r4 = (u32)rd8(param_3 + 2u);
                    if ((s32)r31 >= (s32)(r4 + (u32)rd8(r3 + 2u))) {
                        return r3;
                    }
                }
            }
            r30 = r30 + 1u;
        }
    }
    r30 = 0u;
    while (r30 < param_2) {
        a.r[0] = r30;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        r3 = tc_call(param_1, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if ((u32)rd16(r3) == 0x2e8u) {
            return r3;
        }
        r30 = r30 + 1u;
    }
    r3 = 0u;
    return r3;
}
