#include "tc_rt.h"

u32 fn_802965c8(u32 param_1)
{
    u32 r0 = 0;
    if ((u32)rd8(0x8053dfa6u) < 4u) {
        return 0xcu;
    }
    r0 = (u32)rd16(0x8053df90u);
    wr16(param_1, rd16(0x8053df8eu));
    wr16(param_1 + 2u, (u16)r0);
    r0 = (u32)rd16(0x8053df94u);
    wr16(param_1 + 4u, rd16(0x8053df92u));
    wr16(param_1 + 6u, (u16)r0);
    wr16(param_1 + 8u, rd16(0x8053df96u));
    return 0u;
}
