#include "tc_rt.h"

void fn_80060710(void)
{
    TcArgs a = {0};
    a.r[0] = 0x80468ae8u;
    (void)tc_call(0x800506fcu, &a);
    a.r[0] = 0x80468b40u;
    (void)tc_call(0x800506fcu, &a);
    a.r[0] = 0x80468b98u;
    (void)tc_call(0x800506fcu, &a);
    a.r[0] = 0x80468bf0u;
    (void)tc_call(0x800506fcu, &a);
    a.r[0] = 0x80468c48u;
    (void)tc_call(0x800506fcu, &a);
    a.r[0] = 0x80468ca0u;
    (void)tc_call(0x800506fcu, &a);
    a.r[0] = 0x80468cf8u;
    (void)tc_call(0x800506fcu, &a);
    a.r[0] = 0x80468d50u;
    (void)tc_call(0x800506fcu, &a);
    a.r[0] = 0x80468da8u;
    (void)tc_call(0x800506fcu, &a);
    return;
}
