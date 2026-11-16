#include "tc_rt.h"

void fn_8022ecec(void)
{
    TcArgs a = {0};
    a.r[0] = 0x80000c00u;
    a.r[1] = 0x8022ecccu;
    a.r[2] = 0x1cu;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = 0x80000c00u;
    a.r[1] = 0x100u;
    (void)tc_call(0x80227798u, &a);
    a.r[0] = 0x80000c00u;
    a.r[1] = 0x100u;
    (void)tc_call(0x802277f0u, &a);
    return;
}
