#include "tc_rt.h"

void fn_8011e100(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804bc3b0u;
    a.r[1] = 0x8011e158u;
    a.r[2] = 0x8011e190u;
    a.r[3] = 0x9bcu;
    a.r[4] = 4u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = 0u;
    a.r[1] = 0x8011e1f8u;
    a.r[2] = 0x804bc3a0u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
