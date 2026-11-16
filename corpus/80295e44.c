#include "tc_rt.h"

void fn_80295e44(u32 param_1)
{
    TcArgs a = {0};
    if ((u32)rd8(param_1) == 0u) {
        wr8(0x8053df8eu, rd8(param_1 + 1u));
        wr16(0x8053df90u, (u16)((u32)rd8(param_1 + 2u) + (((u32)rd8(param_1 + 3u) << 8u) & 0xffffff00u)));
        wr8(0x8053df92u, rd8(param_1 + 4u));
        wr16(0x8053df94u, (u16)((u32)rd8(param_1 + 5u) + (((u32)rd8(param_1 + 6u) << 8u) & 0xffffff00u)));
        wr16(0x8053df96u, (u16)((u32)rd8(param_1 + 7u) + (((u32)rd8(param_1 + 8u) << 8u) & 0xffffff00u)));
    }
    wr8(0x8053dfa6u, 4u);
    wr8(0x8053dfa7u, 4u);
    a.r[0] = 0x8053deccu;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x8028d220u, &a);
    (void)tc_call(0x802a1accu, &a);
    return;
}
