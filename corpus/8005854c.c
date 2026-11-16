#include "tc_rt.h"

u32 fn_8005854c(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r31 = param_4;
    if (param_4 == 0u) {
        r3 = tc_call(0x80057a90u, &a);
        r31 = r3;
    }
    a.r[0] = rd32((u32)param_2 + 4u);
    a.r[1] = 0xffffffffu;
    r3 = tc_call(0x8003140cu, &a);
    r4 = r3;
    if (r3 == 0u) {
        r31 = 0u;
    } else {
        if (rd32(r31 + 0x10u) != 0u) {
            a.r[0] = rd32(r31);
            a.r[1] = r4;
            a.r[2] = rd32(r31 + 0xcu);
            a.r[3] = r31 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
        } else {
            if (rd32(r31 + 0x20u) != 0u) {
                a.r[0] = r31 + 0x24u;
                a.r[1] = 0x20u;
                a.r[2] = r3;
                r3 = tc_call(0x80094e80u, &a);
            } else {
                a.r[0] = rd32(r31);
                a.r[1] = r4;
                a.r[2] = rd32(r31 + 0xcu);
                a.r[3] = r31 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
            }
        }
        r31 = r3;
    }
    a.r[0] = rd32((u32)param_2 + 4u);
    a.r[1] = rd32((u32)param_2 + 8u);
    a.r[2] = 0xffffffffu;
    a.r[3] = r31;
    (void)tc_call(0x80031268u, &a);
    a.r[0] = r31;
    a.r[1] = rd32((u32)param_2 + 0xcu);
    a.r[2] = param_3;
    (void)tc_call(0x80040040u, &a);
    return r31;
}
