#include "tc_rt.h"

u32 fn_802307c0(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0;
    r3 = param_1;
    r5 = (u32)rd16(param_1);
    if (r5 != 0u) {
        r3 = param_1 + 2u;
    }
    if (r5 < 0xd800u || r5 > 0xdfffu) {
        r6 = r5;
    } else {
        if (r5 <= 0xdbffu) {
            r0 = (u32)rd16(r3);
            r3 = r3 + 2u;
            if (r0 >= 0xdc00u && r0 <= 0xdfffu) {
                r6 = ((r0 & 0x3ffu) | ((r5 << 0xau) & 0xffc00u)) + 0x10000u;
                wr32(param_2, r6);
                return r3;
            }
            return 0u;
        }
        return 0u;
    }
    wr32(param_2, r6);
    return r3;
}
