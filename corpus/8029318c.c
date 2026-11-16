#include "tc_rt.h"

u32 fn_8029318c(u32 param_1)
{
    u32 r5 = 0;
    r5 = 0u;
    if ((u32)rd8(0x8053daa5u) == 0u || (u32)rd16(0x8053d98cu) != param_1) {
        r5 = 1u;
        if ((u32)rd8(0x8053dbc1u) == 0u || (u32)rd16(0x8053daa8u) != param_1) {
            r5 = 2u;
            if ((u32)rd8(0x8053dcddu) == 0u || (u32)rd16(0x8053dbc4u) != param_1) {
                r5 = 3u;
                if ((u32)rd8(0x8053ddf9u) == 0u || (u32)rd16(0x8053dce0u) != param_1) {
                    r5 = 4u;
                }
            }
        }
    }
    return r5;
}
