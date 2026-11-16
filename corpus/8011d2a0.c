#include "tc_rt.h"

s32 fn_8011d2a0(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800545e4u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x1cu;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x1cu;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x1cu;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        }
    }
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8011c1ccu, &a);
    }
    a.r[0] = param_1;
    r3 = tc_call(0x8011d534u, &a);
    r31 = r3;
    a.r[0] = param_1;
    r3 = tc_call(0x8011dba8u, &a);
    a.r[0] = r30;
    a.r[1] = param_2;
    a.r[2] = r3;
    a.r[3] = r31;
    (void)tc_call(0x8011c3e0u, &a);
    return (s32)r30;
}
