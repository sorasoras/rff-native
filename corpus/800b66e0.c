#include "tc_rt.h"

void fn_800b66e0(void)
{
    TcArgs a = {0};
    a.r[0] = 0x805711d4u;
    (void)tc_call(0x8016cfe4u, &a);
    a.r[0] = 0x805711d4u;
    a.r[1] = 0x8016d490u;
    a.r[2] = 0x8049e600u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x8049e610u;
    a.r[1] = 0x800b673cu;
    a.r[2] = 0u;
    a.r[3] = 0x10u;
    a.r[4] = 0xb4u;
    (void)tc_call(0x80255624u, &a);
    return;
}
