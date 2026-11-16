#include "tc_rt.h"

u32 fn_80081370(void)
{
    u32 r5 = 0, r6 = 0;
    r5 = (u32)rd8(0x80492821u);
    r6 = (u32)rd8(0x80492824u);
    if (r6 >= (u32)rd8(((r5 << 2u) & 0xfffffffcu) - 0x7fcaf00fu) && r6 < (u32)rd8(((r5 << 2u) & 0x3fcu) - 0x7fcaf00eu)) {
        return 1u;
    }
    return 0u;
}
