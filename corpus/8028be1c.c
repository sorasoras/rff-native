#include "tc_rt.h"

void fn_8028be1c(void)
{
    TcArgs a = {0};
    wr8(0x80539ba6u, 0u);
    (void)tc_call(0x8028c9c4u, &a);
    (void)tc_call(0x8028ca70u, &a);
    return;
}
