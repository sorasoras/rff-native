#include "tc_rt.h"

u32 fn_801930cc(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r3 = rd32(param_1);
    r5 = rd32(rd32(0x80571398u) + 0x38u);
    r4 = rd32(r5 + 0x194u);
    r30 = rd32(r5 + 0x118u) - r4;
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = r5;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x68u), &a);
    c0lt = (s32)r30 < 0;
    r0 = (u32)rd16(r3 + 0x1au);
    r31 = r3;
    wr16(0x817fdfe8u, rd16(r3 + 0x18u));
    wr16(0x817fdfeau, (u16)r0);
    r0 = (u32)rd16(r3 + 0x1eu);
    wr16(0x817fdfecu, rd16(r3 + 0x1cu));
    wr16(0x817fdfeeu, (u16)r0);
    if ((s32)r30 > 0) {
        a.r[0] = 0x817fdfe8u;
        a.r[1] = 0x805753b0u;
        a.r[2] = 8u;
        (void)tc_call(0x80004338u, &a);
    } else {
        if (c0lt) {
            r30 = r30 - ((r30 << 1u) & 0xfffffffeu);
            a.r[0] = 0x817fdfe8u;
            a.r[1] = 0x805753a8u;
            a.r[2] = 8u;
            (void)tc_call(0x80004338u, &a);
        }
    }
    wr16(r31 + 0x18u, rd16(0x817fdfe8u));
    wr16(r31 + 0x1au, rd16(0x817fdfeau));
    wr16(r31 + 0x1cu, rd16(0x817fdfecu));
    wr16(r31 + 0x1eu, rd16(0x817fdfeeu));
    if (r30 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = r30;
        (void)tc_call(0x80100bb4u, &a);
    }
    return 1u;
}
