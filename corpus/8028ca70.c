#include "tc_rt.h"

void fn_8028ca70(void)
{
    TcArgs a = {0};
    (void)tc_call(0x802b73e0u, &a);
    (void)tc_call(0x8028b7a8u, &a);
    wr8(0x80539be9u, 5u);
    wr8(0x80539be8u, 0u);
    wr8(0x80571b51u, 0u);
    (void)tc_call(0x8028b784u, &a);
    return;
}
