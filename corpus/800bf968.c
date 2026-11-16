#include "tc_rt.h"

void fn_800bf968(u32 param_1, s32 param_2)
{
    u32 c0lt = 0;
    TcArgs a = {0};
    c0lt = param_2 < 6;
    if ((u32)param_2 == 6u) {
        a.r[0] = param_1;
        a.r[1] = 0x17u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.f[0] = (f64)rdf32(0x80572e78u);
        (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
    } else {
        if (!c0lt) {
            if (param_2 >= 8) {
                return;
            }
        } else {
            c0lt = param_2 < 2;
            if ((u32)param_2 == 2u) {
                a.r[0] = param_1;
                a.r[1] = 0x16u;
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.f[0] = (f64)rdf32(0x80572e78u);
                (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
                return;
            }
            if (!c0lt) {
                a.r[0] = param_1;
                a.r[1] = 0x15u;
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.f[0] = (f64)rdf32(0x80572e90u);
                (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
                a.r[0] = param_1;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = (f64)rdf32(0x80572e78u);
                (void)tc_call(rd32(rd32(param_1) + 0x50u), &a);
                return;
            }
            if (param_2 < 0) {
                return;
            }
        }
        a.r[0] = param_1;
        a.r[1] = 0x15u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.f[0] = (f64)rdf32(0x80572e78u);
        (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
    }
    return;
}
