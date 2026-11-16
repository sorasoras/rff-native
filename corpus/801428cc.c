#include "tc_rt.h"

void fn_801428cc(u32 param_1)
{
    wr16(param_1, (u16)rd32(0x804beb60u));
    wr8(param_1 + 3u, (u8)rd32(0x804beb64u));
    wr8(param_1 + 2u, 1u);
    return;
}
