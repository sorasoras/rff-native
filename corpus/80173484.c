#include "tc_rt.h"

s32 fn_80173484(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1 + 0x1818u;
        a.r[1] = 0x8016e214u;
        a.r[2] = 0x1b0u;
        a.r[3] = 3u;
        (void)tc_call(0x8025571cu, &a);
        r3 = (u32)param_1 + 0x1704u;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80079f14u, &a);
        }
        a.r[0] = (u32)param_1 + 0x1024u;
        a.r[1] = 0x8016e108u;
        a.r[2] = 0x1b0u;
        a.r[3] = 4u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1 + 0xd54u;
        a.r[1] = 0x8016e028u;
        a.r[2] = 0x90u;
        a.r[3] = 5u;
        (void)tc_call(0x8025571cu, &a);
        r3 = (u32)param_1 + 0xcc0u;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80079f14u, &a);
        }
        a.r[0] = (u32)param_1 + 0xba0u;
        a.r[1] = 0x8016e028u;
        a.r[2] = 0x90u;
        a.r[3] = 2u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x8016df74u;
        a.r[2] = 0x174u;
        a.r[3] = 8u;
        (void)tc_call(0x8025571cu, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
