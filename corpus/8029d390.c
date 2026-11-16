#include "tc_rt.h"

u32 fn_8029d390(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r6 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    r6 = 0u;
    if (((u32)rd8(param_1 + 0x76u) & 8u) != 0u || (u32)rd16(param_1 + 0x18u) == 0xffffu) {
        if (rd32(0x8053f264u) == 0u) {
            r3 = 4u;
            return r3;
        }
        r4 = rd32(param_1);
        if (r4 != 0u) {
            if ((u32)rd8(param_1 + 0x80u) != 0u) {
                r6 = r4 + 0x10u;
            } else {
                r6 = r4 + 0x26u;
            }
            r7 = (u32)rd8(r4 + 0xfu);
        } else {
            r7 = 0u;
        }
        wr8(param_1 + 0x7fu, 4u);
        a.r[0] = param_1 + 0x1cu;
        a.r[1] = param_1 + 0x22u;
        a.r[2] = param_1 + 0x35u;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = (u32)rd8(param_1 + 0x80u);
        a.f[0] = 0.0;
        r3 = tc_call(rd32(0x8053f264u), &a);
        if ((r3 & 0xffu) != 0u) {
            return r3;
        }
        r4 = (u32)rd8(param_1 + 0x76u);
        wr8(param_1 + 0x7fu, 0u);
        wr8(param_1 + 0x76u, (u8)(r4 | 1u));
    } else {
        r31 = (u32)rd8(param_1 + 0x7fu);
        wr8(param_1 + 0x7fu, 3u);
        a.r[0] = param_1 + 0x1cu;
        a.r[1] = 0u;
        a.r[2] = 2u;
        a.r[3] = 0x1eu;
        a.r[4] = 0u;
        r3 = tc_call(0x802987ecu, &a);
        if ((r3 & 0xffu) != 1u) {
            wr8(param_1 + 0x7fu, (u8)r31);
        }
        r3 = 1u;
    }
    return r3;
}
