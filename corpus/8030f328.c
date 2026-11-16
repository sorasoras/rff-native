#include "tc_rt.h"

u32 fn_8030f328(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r3 = 0, r4 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    r7 = rd32(param_1 + 4u);
    r4 = r7 + (((u32)param_3 << 3u) & 0xfffffff8u);
    r3 = (u32)rd8(r4 + 0xcu);
    r4 = rd32(r4 + 0x10u);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = r7 + 8u;
    r3 = tc_call(0x8030e93cu, &a);
    r4 = r3;
    r3 = (u32)rd8(r3 + 0x10u);
    r4 = rd32(r4 + 0x14u);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = rd32(param_1 + 4u) + 8u;
    r3 = tc_call(0x8030e93cu, &a);
    r6 = r3 + (((u32)param_4 << 3u) & 0xfffffff8u);
    a.r[0] = (u32)rd8(r6 + 4u);
    a.r[1] = rd32(r6 + 8u);
    a.r[2] = rd32(param_1 + 4u) + 8u;
    r3 = tc_call(0x8030e93cu, &a);
    r4 = rd32(param_1);
    wr32(param_2, rd32(r3));
    wr8(param_2 + 4u, rd8(r3 + 4u));
    wr8(param_2 + 5u, rd8(r3 + 8u));
    wr8(param_2 + 6u, rd8(r3 + 5u));
    wr8(param_2 + 7u, rd8(r3 + 6u));
    wr8(param_2 + 8u, rd8(r3 + 7u));
    wr8(param_2 + 9u, rd8(r3 + 0xcu));
    wr8(param_2 + 0xcu, rd8(r3 + 0xdu));
    if ((u32)rd16(r4 + 6u) >= 0x101u) {
        wr8(param_2 + 0xau, rd8(r3 + 0xeu));
        wr8(param_2 + 0xbu, rd8(r3 + 0xfu));
        wrf32d(param_2 + 0x10u, (f64)rdf32(r3 + 0x10u));
    } else {
        f0 = (f64)rdf32(0x80577838u);
        wr8(param_2 + 0xau, 0x40u);
        wr8(param_2 + 0xbu, 0u);
        wrf32d(param_2 + 0x10u, f0);
    }
    return 1u;
}
