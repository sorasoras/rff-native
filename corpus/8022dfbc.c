#include "tc_rt.h"

void fn_8022dfbc(void)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0u;
    f1 = tc_callf(0x8022debcu, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x8037a858u;
    a.r[1] = 0x348u;
    a.r[2] = 0x8037a890u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x802285e4u, &a);
    return;
}
