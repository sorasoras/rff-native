#include "tc_rt.h"

void fn_8004b464(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x80571080u) != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x802525a8u, &a);
        if ((r3 & 0xffu) != 0u) {
            a.f[0] = (f64)rdf32(0x8057107cu);
            a.r[0] = param_1;
            (void)tc_call(0x802524d8u, &a);
            a.r[0] = param_1;
            a.r[1] = (u32)rd8(0x80571078u);
            (void)tc_call(0x8025252cu, &a);
            a.r[0] = param_1;
            a.r[1] = (u32)rd8(0x80571078u);
            (void)tc_call(0x8025253cu, &a);
        }
        if ((u32)param_2 != 0u) {
            a.r[0] = param_1;
            a.r[1] = 5u;
            a.r[2] = 1u;
            (void)tc_call(0x802524b0u, &a);
            return;
        }
        a.r[0] = param_1;
        a.r[1] = 5u;
        a.r[2] = 0u;
        (void)tc_call(0x802524b0u, &a);
    } else {
        if ((u32)param_2 != 0u) {
            a.r[0] = param_1;
            a.r[1] = 1u;
            a.r[2] = 1u;
            (void)tc_call(0x802524b0u, &a);
        } else {
            a.r[0] = param_1;
            a.r[1] = 1u;
            a.r[2] = 0u;
            (void)tc_call(0x802524b0u, &a);
        }
    }
    return;
}
