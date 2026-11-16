#include "tc_rt.h"

u32 fn_80081324(void)
{
    u32 r4 = 0, r5 = 0;
    r4 = (u32)rd8(0x80492821u);
    r5 = (u32)rd8(0x80492824u);
    if (r5 >= (u32)rd8(((r4 << 2u) & 0xfffffffcu) - 0x7fcaf010u) && r5 < (u32)rd8(((r4 << 2u) & 0x3fcu) - 0x7fcaf00fu)) {
        return 1u;
    }
    return 0u;
}
