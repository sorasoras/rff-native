#include "tc_rt.h"

u32 fn_8006c6c0(s32 param_1, s32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_2 == 0x2e8u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        r3 = tc_call(0x800693a8u, &a);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        a.r[3] = param_3;
        a.r[4] = param_4;
        r3 = tc_call(0x80069260u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            if (rd32((u32)param_1 + 0x144u) != 0u) {
                a.r[0] = (u32)param_1;
                a.r[1] = 0u;
                a.r[2] = 0u;
                (void)tc_call(0x80069494u, &a);
            } else {
                a.r[0] = (u32)param_1;
                a.r[1] = 0u;
                a.r[2] = 0x15u;
                (void)tc_call(0x80069494u, &a);
            }
            if ((u32)param_5 != 0u) {
                a.f[0] = (f64)rdf32(0x80572600u);
                a.r[0] = (u32)param_1;
                a.r[1] = 1u;
                a.r[2] = 1u;
                (void)tc_call(0x800bf1d4u, &a);
            }
            a.r[0] = 0x804b9da0u;
            a.r[1] = (u32)param_2;
            (void)tc_call(0x8010a568u, &a);
            r3 = 1u;
        }
    }
    return r3;
}
