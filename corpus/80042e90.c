#include "tc_rt.h"

void fn_80042e90(void)
{
    u32 c0lt = 0, r0 = 0;
    TcArgs a = {0};
    r0 = rd32(0x803c1c74u);
    c0lt = (s32)r0 < 6;
    if (r0 != 6u) {
        if (!c0lt) {
            return;
        }
        if (r0 != 3u) {
            return;
        }
    }
    (void)tc_call(0x80278eacu, &a);
    wr32(0x803c1c74u, 4u);
    return;
}
