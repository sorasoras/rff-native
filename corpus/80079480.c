#include "tc_rt.h"

u32 fn_80079480(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    r4 = (u32)rd8(param_1);
    r0 = 0u;
    r3 = (u32)rd8(param_1 + 1u);
    if (r4 < 0x81u || r4 > 0x9fu) {
        if (r4 < 0xe0u || r4 > 0xfcu) {
            return r0;
        }
    }
    if (r3 < 0x40u || r3 > 0x7eu) {
        if (r3 < 0x80u || r3 > 0xfdu) {
            return r0;
        }
    }
    r0 = 1u;
    return r0;
}
