#include "tc_rt.h"

u32 fn_8030f208(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = rd32(param_1 + 4u);
    r4 = r6 + (((u32)param_3 << 3u) & 0xfffffff8u);
    r3 = (u32)rd8(r4 + 0xcu);
    r4 = rd32(r4 + 0x10u);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = r6 + 8u;
    r3 = tc_call(0x8030e93cu, &a);
    r4 = r3;
    r3 = (u32)rd8(r3);
    r4 = rd32(r4 + 4u);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = rd32(param_1 + 4u) + 8u;
    r3 = tc_call(0x8030e93cu, &a);
    r0 = (u32)rd16(rd32(param_1) + 6u);
    if (r0 >= 0x102u) {
        wrf32d(param_2, (f64)rdf32(r3));
        wr8(param_2 + 4u, rd8(r3 + 4u));
        wr8(param_2 + 5u, rd8(r3 + 5u));
        wr8(param_2 + 6u, rd8(r3 + 6u));
        wr8(param_2 + 7u, rd8(r3 + 7u));
        wr8(param_2 + 8u, rd8(r3 + 8u));
        wr8(param_2 + 9u, rd8(r3 + 9u));
    } else {
        if (r0 >= 0x101u) {
            wrf32d(param_2, (f64)rdf32(r3));
            wr8(param_2 + 4u, rd8(r3 + 4u));
            r3 = (u32)rd8(r3 + 5u);
            wr8(param_2 + 5u, (u8)r3);
            wr8(param_2 + 6u, 0u);
            wr8(param_2 + 7u, 0u);
            wr8(param_2 + 8u, 0u);
            wr8(param_2 + 9u, 0x7fu);
        } else {
            wrf32d(param_2, (f64)rdf32(0x80577838u));
            wr8(param_2 + 4u, 0x40u);
            wr8(param_2 + 5u, 0u);
            wr8(param_2 + 6u, 0u);
            wr8(param_2 + 7u, 0u);
            wr8(param_2 + 8u, 0u);
            wr8(param_2 + 9u, 0x7fu);
        }
    }
    return 1u;
}
