#include "tc_rt.h"

void fn_80183818(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804d9028u;
    (void)tc_call(0x80183100u, &a);
    wr16(0x80571330u, 0x2e8u);
    wr8(0x80571332u, 1u);
    wr8(0x80571333u, 1u);
    return;
}
