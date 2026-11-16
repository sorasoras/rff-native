#include "tc_rt.h"

u32 fn_8008722c(u32 param_1, s32 param_2, s32 param_3, u32 param_4)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = rd32((u32)param_3 + 4u);
    a.r[1] = 0xffffffffu;
    r3 = tc_call(0x8003140cu, &a);
    r31 = r3;
    r3 = tc_call(0x80083e38u, &a);
    r6 = r3;
    if (r31 == 0u) {
        r31 = 0u;
    } else {
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r31;
            a.r[2] = r5;
            a.r[3] = r6;
            r3 = tc_call(0x80040db8u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = r31;
                r3 = tc_call(0x80094e80u, &a);
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r31;
                a.r[2] = r5;
                a.r[3] = r6;
                r3 = tc_call(0x80040cd8u, &a);
            }
        }
        r31 = r3;
    }
    a.r[0] = rd32((u32)param_3 + 4u);
    a.r[1] = rd32((u32)param_3 + 8u);
    a.r[2] = 0xffffffffu;
    a.r[3] = r31;
    (void)tc_call(0x80031268u, &a);
    a.r[0] = r31;
    a.r[1] = rd32((u32)param_3 + 0xcu);
    a.r[2] = param_4;
    (void)tc_call(0x80040040u, &a);
    a.r[0] = (u32)param_2;
    a.r[1] = r31;
    a.r[2] = (u32)param_3;
    a.r[3] = param_4;
    (void)tc_call(0x80084350u, &a);
    if (rd32((u32)param_3 + 0x20u) != 0u) {
        r3 = rd32((u32)param_2 + 0x80u) | 0x20000000u;
        wr32((u32)param_2 + 0x80u, r3);
        if ((u32)((s32)((r3 << 2u) & 0xc0000000u) >> 31) != 0u) {
            wr32((u32)param_2 + 0x80u, r3 | 0x8000000u);
        }
        r3 = rd32((u32)param_2 + 0x70u);
        if (r3 != 0u) {
            wrf32d(r3 + 0x58u, (f64)rdf32(0x8057290cu));
        }
        a.f[0] = (f64)rdf32(0x80572930u);
        a.r[0] = r31;
        a.r[1] = rd32((u32)param_3 + 0x20u);
        a.r[2] = 1u;
        (void)tc_call(0x80035740u, &a);
    }
    return r31;
}
