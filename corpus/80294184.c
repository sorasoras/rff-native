#include "tc_rt.h"

void fn_80294184(u32 param_1, u32 param_2)
{
    u32 r6 = 0;
    r6 = 0u;
    if ((u32)rd8(0x8053daa5u) == 0u || (u32)rd16(0x8053d98cu) != param_1) {
        r6 = 1u;
        if ((u32)rd8(0x8053dbc1u) == 0u || (u32)rd16(0x8053daa8u) != param_1) {
            r6 = 2u;
            if ((u32)rd8(0x8053dcddu) == 0u || (u32)rd16(0x8053dbc4u) != param_1) {
                r6 = 3u;
                if ((u32)rd8(0x8053ddf9u) == 0u || (u32)rd16(0x8053dce0u) != param_1) {
                    r6 = 4u;
                }
            }
        }
    }
    if (r6 < 4u) {
        wr16((r6 * 0x11cu) - 0x7fac266eu, (u16)param_2);
        return;
    }
    return;
}
