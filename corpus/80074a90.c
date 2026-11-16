#include "tc_rt.h"

void fn_80074a90(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    while (rd32(0x8046ad54u) != 0u) {
        a.r[0] = 0x8046ad4cu;
        r3 = tc_call(0x8007b09cu, &a);
        a.r[0] = r3;
        (void)tc_call(0x80070068u, &a);
    }
    return;
}
