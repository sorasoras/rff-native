#include "tc_rt.h"

u32 fn_800810d8(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((s32)rd32(0x80492c3cu) > 0) {
        wr8(param_1, 0u);
        r3 = 1u;
    } else {
        if ((s32)rd32(0x80492c44u) > 0) {
            r3 = tc_call(0x80081034u, &a);
            if ((r3 & 0xffu) == 3u) {
                wr8(param_1, 2u);
            } else {
                wr8(param_1, 1u);
            }
            r3 = 1u;
        } else {
            r3 = 0u;
        }
    }
    return r3;
}
