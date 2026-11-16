#include "tc_rt.h"

void fn_802fec18(s32 param_1)
{
    u32 r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r3 = rd32((u32)param_1 + 0x10u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    f1 = tc_callf(rd32(rd32(r3) + 0x44u), &a);
    r3 = rd32((u32)param_1 + 0x10u);
    a.r[0] = r3;
    a.r[1] = rd32((u32)param_1 + 0x14u);
    a.r[2] = rd32((u32)param_1 + 0x18u);
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3) + 0x14u), &a);
    f1 = tc_lastf();
    wr32((u32)param_1 + 0x10u, 0u);
    if (r3 == 0xfffffffdu) {
        r12 = rd32((u32)param_1 + 0x1cu);
        if (r12 == 0u) {
            return;
        }
        a.r[0] = 0u;
        a.r[1] = 0u;
        a.r[2] = rd32((u32)param_1 + 0x20u);
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    } else {
        if (r3 != rd32((u32)param_1 + 0x18u)) {
            r12 = rd32((u32)param_1 + 0x1cu);
            if (r12 == 0u) {
                return;
            }
            a.r[0] = 0u;
            a.r[1] = 0u;
            a.r[2] = rd32((u32)param_1 + 0x20u);
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        } else {
            a.r[0] = 0x817fdfe8u;
            a.r[1] = rd32((u32)param_1 + 0x14u);
            (void)tc_call(0x802fd05cu, &a);
            a.r[0] = 0x817fdfe8u;
            r3 = tc_call(0x802fd0c8u, &a);
            f1 = tc_lastf();
            r12 = rd32((u32)param_1 + 0x1cu);
            if (r12 != 0u) {
                a.r[0] = 1u;
                a.r[1] = r3;
                a.r[2] = rd32((u32)param_1 + 0x20u);
                a.f[0] = f1;
                (void)tc_call(r12, &a);
            }
        }
    }
    return;
}
