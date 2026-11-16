#include "tc_rt.h"

void fn_8019b00c(void)
{
    u32 c0lt = 0, r0 = 0, r4 = 0;
    TcArgs a = {0};
    r0 = rd32(0x8057117cu);
    r4 = 0u;
    c0lt = (s32)r0 < 3;
    if (r0 == 3u) {
        r4 = 0xd45u;
    } else if (!c0lt) {
        if ((s32)r0 < 9 && (s32)r0 < 5) {
            r4 = 0xd48u;
        }
    } else {
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            r4 = 0xd46u;
        } else if (!c0lt) {
            r4 = 0xd49u;
        } else if ((s32)r0 >= 0) {
            r4 = 0xd47u;
        }
    }
    a.r[0] = 0x804b9da0u;
    a.r[1] = r4;
    (void)tc_call(0x8010a74cu, &a);
    return;
}
