#include "tc_rt.h"

void fn_800cf8bc(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804b14d4u;
    (void)tc_call(0x8007ae0cu, &a);
    a.r[0] = 0x804b14d4u;
    a.r[1] = 0x800cf93cu;
    a.r[2] = 0x804b14c8u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x804b14fcu;
    (void)tc_call(0x8007ae0cu, &a);
    a.r[0] = 0x804b14fcu;
    a.r[1] = 0x800cf93cu;
    a.r[2] = 0x804b14f0u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x804b1524u;
    (void)tc_call(0x8007ae0cu, &a);
    a.r[0] = 0x804b1524u;
    a.r[1] = 0x800cf93cu;
    a.r[2] = 0x804b1518u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
