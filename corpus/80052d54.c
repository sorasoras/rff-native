#include "tc_rt.h"

void fn_80052d54(void)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x803cba90u;
    r30 = 0u;
    do {
        if (rd32(r31 + 0x73cu) != 0u) {
            a.r[0] = r31;
            (void)tc_call(0x800d431cu, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x740u;
    } while (r30 < 0xau);
    return;
}
