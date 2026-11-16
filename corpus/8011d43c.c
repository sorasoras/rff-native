#include "tc_rt.h"

void fn_8011d43c(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0u;
    (void)tc_call(0x80044e28u, &a);
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 3u;
    (void)tc_call(0x80044e3cu, &a);
    a.r[0] = 0u;
    (void)tc_call(0x8004e22cu, &a);
    a.r[0] = 0u;
    (void)tc_call(0x8004ca7cu, &a);
    a.r[0] = (u32)param_1 + 0x840u;
    (void)tc_call(0x8004d6a8u, &a);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8011d7dcu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = r3;
    (void)tc_call(0x8011dbb0u, &a);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8011d7dcu, &a);
    r31 = r3;
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8011d534u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = r31;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3) + 0x30u), &a);
    return;
}
