#include "tc_rt.h"

void fn_800d9c50(void)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x805739e0u);
    wrf32d(0x804b15c0u, f0);
    wrf32d(0x804b15c8u, f0);
    wrf32d(0x804b15c4u, f0);
    a.r[0] = 0x804b1df8u;
    a.r[1] = 0x80157d94u;
    a.r[2] = 0x80157e18u;
    a.r[3] = 0x54u;
    a.r[4] = 0x140u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = 0u;
    a.r[1] = 0x800d9cc4u;
    a.r[2] = 0x804b1de8u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
