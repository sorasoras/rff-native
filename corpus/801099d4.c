#include "tc_rt.h"

u32 fn_801099d4(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r5 = 0;
    TcArgs a = {0};
    r0 = rd32(rd32(0x80571398u) + 0x100u);
    c0lt = (s32)r0 < 7;
    if (r0 == 7u) {
        r5 = (u32)rd8(0x804990b5u);
    } else if (!c0lt) {
        if ((s32)r0 >= 9) {
            r5 = 0u;
        } else {
            r5 = (u32)rd8(0x804990b3u);
        }
    } else if ((s32)r0 >= 6) {
        r5 = (u32)rd8(0x804990b4u);
    } else if ((s32)r0 >= 0) {
        r5 = (u32)rd8(0x804990b2u);
    } else {
        r5 = 0u;
    }
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = r5;
    (void)tc_call(0x80100bb4u, &a);
    return 1u;
}
