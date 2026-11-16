#include "tc_rt.h"

u32 fn_802b2ba8(s32 param_1)
{
    u32 ctr = 0, r5 = 0, r6 = 0;
    r6 = 0x80542844u;
    r5 = ((u32)rd16(0x80542842u) * 0x298u) - 0x7fabd7bcu;
    ctr = ppc_divwu(r5 + 0x7fabda53u, 0x298u);
    if (r5 > 0x80542844u) {
        do {
            if (rd32(r6) == (u32)param_1) {
                return r6;
            }
            r6 = r6 + 0x298u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return 0u;
}
