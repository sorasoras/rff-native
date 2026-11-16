#include "tc_rt.h"

u32 fn_802306b0(u32 param_1, u32 param_2)
{
    u32 ctr = 0, fl_ = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0;
    r3 = param_1;
    r6 = (u32)rd8(param_1);
    if (r6 != 0u) {
        r3 = param_1 + 1u;
    }
    if ((r6 & 0x80u) != 0u) {
        if ((r6 & 0xe0u) != 0xc0u) {
            if ((r6 & 0xf0u) != 0xe0u) {
                if ((r6 & 0xf8u) != 0xf0u) {
                    return 0u;
                }
                r6 = r6 & 7u;
                r7 = 3u;
            } else {
                r6 = r6 & 0xfu;
                r7 = 2u;
            }
        } else {
            r6 = r6 & 0x1fu;
            r7 = 1u;
        }
    } else {
        r7 = 0u;
    }
    ctr = r7;
    if (r7 > 0u) {
        for (;;) {
            r5 = (u32)rd8(r3);
            r6 = (r6 << 6u) & 0xffffffc0u;
            r3 = r3 + 1u;
            if ((r5 & 0xc0u) != 0x80u) {
                return 0u;
            }
            r6 = r6 | (r5 & 0x3fu);
            ctr = ctr - 1u;
            if (ctr == 0u) {
                fl_ = 1u;
                break;
            }
        }
        if (fl_ == 1u) {
            fl_ = 0u;
        }
    }
    if (r6 > 0x7fu) {
        if (r6 > 0x7ffu) {
            if (r6 <= 0xffffu && r7 != 2u) {
                return 0u;
            }
        } else if (r7 != 1u) {
            return 0u;
        }
    } else if (r7 != 0u) {
        return 0u;
    }
    if (r6 < 0xd800u || r6 > 0xdfffu) {
        wr32(param_2, r6);
        return r3;
    }
    return 0u;
}
