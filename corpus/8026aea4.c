#include "tc_rt.h"

void fn_8026aea4(void)
{
    TcArgs a = {0};
    a.r[0] = 0x802250acu;
    a.r[1] = 0x8033db88u;
    a.r[2] = 4u;
    (void)tc_call(0x8000449cu, &a);
    a.r[0] = 0x802250acu;
    a.r[1] = 4u;
    (void)tc_call(0x802277f0u, &a);
    a.r[0] = 0x802250acu;
    a.r[1] = 4u;
    (void)tc_call(0x80227738u, &a);
    return;
}
