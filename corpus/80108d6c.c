#include "tc_rt.h"

u32 fn_80108d6c(u32 param_1)
{
    u32 c0gt = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r6 = (u32)rd8(0x804990a2u);
    r5 = rd32(rd32(0x80571398u) + 0x38u);
    r4 = rd32(r5 + 0xb0u);
    r29 = r4 + r6;
    r30 = r29 - (rd32(r5 + 0x34u) + r6);
    if ((s32)r29 < 0) {
        r29 = 0u;
    } else {
        if ((s32)r29 > 99) {
            r29 = 0x63u;
        }
    }
    r3 = rd32(param_1);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = r6;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x68u), &a);
    c0lt = (s32)r30 < 0;
    c0gt = (s32)r30 > 0;
    r5 = (u32)rd16(r3 + 0x1au);
    r30 = r3;
    r4 = (u32)rd16(r3 + 0x1cu);
    r0 = (u32)rd16(r3 + 0x1eu);
    wr16(0x817fdfe0u, rd16(r3 + 0x18u));
    wr16(0x817fdfe2u, (u16)r5);
    r3 = rd32(0x817fdfe0u);
    wr16(0x817fdfe4u, (u16)r4);
    wr16(0x817fdfe6u, (u16)r0);
    r0 = rd32(0x817fdfe4u);
    wr32(0x817fdfd8u, r3);
    wr32(0x817fdfdcu, r0);
    wr32(0x817fdfe8u, r3);
    wr32(0x817fdfecu, r0);
    if (c0gt) {
        a.r[0] = 0x817fdfe8u;
        a.r[1] = 0x805740b8u;
        a.r[2] = 8u;
        (void)tc_call(0x80004338u, &a);
    } else {
        if (c0lt) {
            a.r[0] = 0x817fdfe8u;
            a.r[1] = 0x805740b0u;
            a.r[2] = 8u;
            (void)tc_call(0x80004338u, &a);
        } else {
            a.r[0] = 0x817fdfe8u;
            a.r[1] = 0x805740c0u;
            a.r[2] = 8u;
            (void)tc_call(0x80004338u, &a);
        }
    }
    wr16(r30 + 0x18u, rd16(0x817fdfe8u));
    wr16(r30 + 0x1au, rd16(0x817fdfeau));
    wr16(r30 + 0x1cu, rd16(0x817fdfecu));
    wr16(r30 + 0x1eu, rd16(0x817fdfeeu));
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = r29;
    (void)tc_call(0x80100bb4u, &a);
    return 1u;
}
