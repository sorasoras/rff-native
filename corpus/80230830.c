#include "tc_rt.h"

u32 fn_80230830(u32 param_1)
{
    u32 ctr = 0, r4 = 0, r5 = 0;
    if (param_1 > 0xffu) {
        return 0u;
    }
    if (param_1 < 0x80u || param_1 > 0x9fu) {
        return param_1 & 0xffu;
    }
    if (param_1 >= 0x152u && param_1 <= 0x2122u) {
        r4 = 0x8037ab40u;
        r5 = 0u;
        ctr = 0x20u;
        do {
            if (param_1 == (u32)rd16(r4)) {
                return (r5 + 0x80u) & 0xffu;
            }
            r4 = r4 + 2u;
            r5 = r5 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return 0u;
}
