#include "tc_rt.h"

void fn_802ffba0(s32 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    f1 = tc_callf(0x8022d56cu, &a);
    c0lt = param_2 < 1;
    if ((u32)param_2 != 1u) {
        if (!c0lt) {
            if (param_2 < 3) {
                a.r[0] = (u32)param_1;
                f1 = tc_callf(0x802f8588u, &a);
            }
        } else if (param_2 >= 0) {
            a.r[0] = (u32)param_1;
            f1 = tc_callf(0x802f8588u, &a);
        }
    }
    r3 = rd32((u32)param_3 + 0xecu);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = (u32)param_1;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x58u), &a);
    }
    r3 = rd32((u32)param_3 + 0xf0u);
    if (r3 != (u32)param_1) {
        for (;;) {
            r0 = rd32(r3 + 0xf0u);
            if (r0 == 0u) {
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d648u, &a);
                return;
            }
            if (r0 == (u32)param_1) break;
            r3 = r0;
        }
        wr32(r3 + 0xf0u, rd32((u32)param_1 + 0xf0u));
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        return;
    }
    wr32((u32)param_3 + 0xf0u, rd32((u32)param_1 + 0xf0u));
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return;
}
