#include "tc_rt.h"

void fn_8028d71c(void)
{
    TcArgs a = {0};
    if ((u32)rd8(0x8053d534u) == 0u) {
        a.r[0] = 0x8053d520u;
        (void)tc_call(0x8028d85cu, &a);
        return;
    }
    return;
}
