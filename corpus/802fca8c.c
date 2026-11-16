#include "tc_rt.h"

void fn_802fca8c(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x802fce20u, &a);
    a.r[0] = r3;
    a.r[1] = param_1;
    r3 = tc_call(0x802fceb8u, &a);
    f1 = tc_lastf();
    c0lt = param_2 < -1;
    r31 = r3;
    if ((u32)param_2 == 0xffffffffu) {
        wr32(r3 + 8u, 0u);
    } else if (!c0lt) {
        if (param_2 >= 1) {
            wr32(r3 + 8u, 0u);
        } else {
            wr8(r3 + 3u, 1u);
            r3 = r3 + 0x14u;
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = 0x20u;
            f1 = tc_callf(0x8000443cu, &a);
            wr32(r31 + 8u, 2u);
            wr32(r31 + 0x10u, 2u);
        }
    } else {
        c0lt = param_2 < -3;
        if ((u32)param_2 == 0xfffffffdu) {
            wr32(r3 + 8u, 0u);
        } else if (!c0lt) {
            wr32(r3 + 0x10u, 1u);
        } else {
            wr32(r3 + 8u, 0u);
        }
    }
    if ((u32)param_2 != 0u && (u32)param_2 != 0xfffffffeu && (u32)rd8(r31 + 4u) != 0u) {
        r12 = rd32(r31 + 0x38u);
        if (r12 != 0u) {
            a.r[0] = param_1;
            a.r[1] = (u32)param_2;
            a.r[2] = 0u;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
            wr32(r31 + 0x38u, 0u);
        }
    }
    wr8(r31 + 5u, 0u);
    return;
}
