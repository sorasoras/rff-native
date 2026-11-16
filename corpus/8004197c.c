#include "tc_rt.h"

void fn_8004197c(void)
{
    TcArgs a = {0};
    (void)tc_call(0x80046af0u, &a);
    (void)tc_call(0x800461a8u, &a);
    return;
}
