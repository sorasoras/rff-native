#include "tc_rt.h"

s32 fn_800b6f88(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        r3 = (u32)param_1 + 0x1f34u;
        c0eq = r3 == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = r3;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80079f14u, &a);
        }
        a.r[0] = (u32)param_1 + 0x1e48u;
        a.r[1] = 0x80079f14u;
        a.r[2] = 0x74u;
        a.r[3] = 2u;
        (void)tc_call(0x8025571cu, &a);
        r3 = (u32)param_1 + 0x1db8u;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80079f14u, &a);
        }
        a.r[0] = (u32)param_1 + 0x16d8u;
        a.r[1] = 0x800b6ef4u;
        a.r[2] = 0x248u;
        a.r[3] = 3u;
        (void)tc_call(0x8025571cu, &a);
        r3 = (u32)param_1 + 0x1648u;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80079f14u, &a);
        }
        a.r[0] = (u32)param_1 + 0x1524u;
        a.r[1] = 0x800b6d34u;
        a.r[2] = 0x90u;
        a.r[3] = 2u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1 + 0x1400u;
        a.r[1] = 0x800b6d34u;
        a.r[2] = 0x90u;
        a.r[3] = 2u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1 + 0x12e0u;
        a.r[1] = 0x800b6d34u;
        a.r[2] = 0x90u;
        a.r[3] = 2u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1 + 0xf80u;
        a.r[1] = 0x800b6d34u;
        a.r[2] = 0x90u;
        a.r[3] = 6u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1 + 0xc20u;
        a.r[1] = 0x800b6d34u;
        a.r[2] = 0x90u;
        a.r[3] = 6u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1 + 0x81cu;
        a.r[1] = 0x800b6de8u;
        a.r[2] = 0xfcu;
        a.r[3] = 4u;
        (void)tc_call(0x8025571cu, &a);
        r3 = (u32)param_1 + 0x78cu;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80079f14u, &a);
        }
        r3 = (u32)param_1 + 0x6f8u;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80079f14u, &a);
        }
        a.r[0] = (u32)param_1 + 0x4a0u;
        a.r[1] = 0x800b6d34u;
        a.r[2] = 0x90u;
        a.r[3] = 4u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1 + 0x258u;
        a.r[1] = 0x800b6d34u;
        a.r[2] = 0x90u;
        a.r[3] = 4u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1 + 0x18u;
        a.r[1] = 0x800b6d34u;
        a.r[2] = 0x90u;
        a.r[3] = 4u;
        (void)tc_call(0x8025571cu, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
