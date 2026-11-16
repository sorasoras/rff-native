#include "tc_rt.h"

void fn_80052c48(void)
{
    u32 r29 = 0, r30 = 0;
    TcArgs a = {0};
    (void)tc_call(0x800d3568u, &a);
    r29 = 0u;
    r30 = 0x803cba90u;
    do {
        a.r[0] = r30;
        (void)tc_call(0x800d3704u, &a);
        r29 = r29 + 1u;
        wr32(r30 + 0x73cu, 0u);
        r30 = r30 + 0x740u;
    } while (r29 < 0xau);
    return;
}
