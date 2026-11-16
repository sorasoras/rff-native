#include "tc_rt.h"

u32 fn_802f5418(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_3;
    a.r[2] = param_4;
    a.r[3] = param_5;
    r3 = tc_call(0x802f530cu, &a);
    if (r3 != 0u) {
        r0 = (u32)rd8(r3 + 9u);
        if (r0 != 0u) {
            if (r0 != 1u) {
                if (r0 != 2u) {
                    r3 = 0u;
                    return r3;
                }
                if (rd32(r3) == 0u) {
                    r3 = 0u;
                    return r3;
                }
                wr32(param_2, 2u);
                wr32(param_2 + 4u, rd32(r3));
            } else {
                if (rd32(r3) == 0u) {
                    r3 = 0u;
                    return r3;
                }
                wr32(param_2, 1u);
                wr32(param_2 + 4u, rd32(r3));
            }
        } else {
            if ((s32)rd32(r3) < 0) {
                r3 = 0u;
                return r3;
            }
            wr32(param_2, 0u);
            wr32(param_2 + 4u, rd32(r3));
        }
        r4 = rd32(param_1);
        wr8(param_2 + 8u, rd8(r3 + 4u));
        wr8(param_2 + 9u, rd8(r3 + 8u));
        wr8(param_2 + 0xau, rd8(r3 + 5u));
        wr8(param_2 + 0xbu, rd8(r3 + 6u));
        wr8(param_2 + 0xcu, rd8(r3 + 7u));
        wr8(param_2 + 0x15u, rd8(r3 + 0xcu));
        wr8(param_2 + 0x16u, rd8(r3 + 0xeu));
        if ((u32)rd16(r4 + 6u) < 0x101u) {
            f0 = (f64)rdf32(0x80577598u);
            wr8(param_2 + 0x17u, 0x7fu);
            wrf32d(param_2 + 0x18u, f0);
        } else {
            wr8(param_2 + 0x17u, rd8(r3 + 0xdu));
            wrf32d(param_2 + 0x18u, (f64)rdf32(r3 + 0x10u));
        }
        r0 = (u32)rd8(r3 + 0xau);
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            wr32(param_2 + 0x10u, 1u);
        } else {
            if (!c0lt) {
                r3 = 0u;
                return r3;
            }
            if ((s32)r0 < 0) {
                r3 = 0u;
                return r3;
            }
            wr32(param_2 + 0x10u, 0u);
        }
        r0 = (u32)rd8(r3 + 0xbu);
        r3 = 1u;
        wr8(param_2 + 0x14u, (u8)r0);
    } else {
        r3 = 0u;
    }
    return r3;
}
