#include "tc_rt.h"

u32 fn_802a6120(s32 param_1)
{
    if ((u32)param_1 != 0xffu) {
        wr8(0x80540a20u, (u8)param_1);
    }
    return (u32)rd8(0x80540a20u);
}
