#include "tc_rt.h"

void fn_803013b4(void)
{
    TcArgs a = {0};
    a.r[0] = 0x805486f4u;
    (void)tc_call(0x80300c54u, &a);
    a.r[0] = 0x805486f4u;
    a.r[1] = 0x803010dcu;
    a.r[2] = 0x805486e8u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
