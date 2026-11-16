#include "tc_rt.h"

u32 fn_8005df50(void)
{
    u32 r0 = 0;
    r0 = (u32)rd8(0x80492825u);
    if ((u32)rd8(0x80492824u) == 4u) {
        if (r0 != 0x3bu) {
            return 0u;
        }
        return 1u;
    }
    return 0u;
}
