#include "tc_rt.h"

u32 fn_801598a0(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800efd28u, &a);
    wr32(param_1, 0x80368f78u);
    a.r[0] = param_1 + 0xcu;
    a.r[1] = 0x8015a738u;
    a.r[2] = 0x801599a0u;
    a.r[3] = 0x24u;
    a.r[4] = 4u;
    (void)tc_call(0x80255624u, &a);
    r30 = param_1 + 0x9cu;
    r31 = param_1 + 0x68cu;
    do {
        a.r[0] = r30;
        (void)tc_call(0x8015b9fcu, &a);
        r30 = r30 + 0x17cu;
    } while (r30 < r31);
    a.r[0] = r31;
    (void)tc_call(0x800a5f50u, &a);
    r30 = param_1 + 0x6acu;
    r31 = param_1 + 0x79cu;
    do {
        a.r[0] = r30;
        (void)tc_call(0x80159028u, &a);
        r30 = r30 + 0x3cu;
    } while (r30 < r31);
    r3 = tc_call(0x80097e5cu, &a);
    a.r[0] = param_1 + 0x68cu;
    a.r[1] = r3;
    a.r[2] = 0x399u;
    (void)tc_call(0x800a6034u, &a);
    a.r[0] = param_1 + 0x68cu;
    r3 = tc_call(0x800a63e4u, &a);
    a.r[0] = r3;
    a.r[1] = 0u;
    r3 = tc_call(0x800510bcu, &a);
    wr32(param_1 + 0x7a0u, r3);
    r3 = tc_call(0x80097e5cu, &a);
    a.r[0] = r3;
    a.r[1] = 0x39au;
    a.r[2] = 0x8033a68au;
    a.r[3] = 0x8033a68fu;
    a.r[4] = 0x32000u;
    (void)tc_call(0x8011de94u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x80159b14u, &a);
    return param_1;
}
