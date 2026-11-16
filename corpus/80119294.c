#include "tc_rt.h"

void fn_80119294(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804bc118u;
    a.r[1] = 0x801192ecu;
    a.r[2] = 0x8011931cu;
    a.r[3] = 0x18u;
    a.r[4] = 0x10u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = 0u;
    a.r[1] = 0x80119374u;
    a.r[2] = 0x804bc108u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
