#include "tc_rt.h"

void fn_80291f24(void)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r12 = 0, r27 = 0, r28 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    a.r[0] = 0x817fdfc8u;
    a.r[1] = 0u;
    a.r[2] = 0x1eu;
    f1 = tc_callf(0x8000443cu, &a);
    r27 = 0u;
    do {
        r3 = ((r27 << 5u) & 0x1fe0u) - 0x7fac28d8u;
        if ((u32)rd8(r3 + 0x28u) != 0u && (u32)rd8(r3 + 0x2cu) == 3u) {
            r4 = (u32)rd8(r3 + 0x26u);
            r28 = ((r31 & 0xffu) * 6u) - 0x7e802038u;
            wr8(r28 + 6u, (u8)r4);
            r4 = (r4 * 0x34u) - 0x7fabf9e8u;
            r4 = (u32)rd16(r4 + 0x16u);
            a.r[0] = 0u;
            a.r[1] = r4;
            r3 = tc_call(0x802aae88u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                r3 = rd32(r3 + 0x10u);
                if (r3 != 0u && (u32)rd8(r3) != 0u) {
                    wr16(r28 + 8u, rd16(r3 + 0x4cu));
                    wr16(r28 + 0xau, rd16(r3 + 0x38u));
                }
            }
            r31 = r31 + 1u;
        }
        r27 = r27 + 1u;
    } while (r27 < 0x10u);
    r6 = (u32)rd16(0x80540a24u);
    r5 = (u32)rd16(0x80540a22u);
    r12 = rd32(0x8053d94cu);
    wr16(0x817fdfc8u, (u16)r6);
    wr16(0x817fdfcau, (u16)r5);
    wr16(0x817fdfccu, (u16)(r31 & 0xffu));
    a.r[0] = 0xfu;
    a.r[1] = 0x817fdfc8u;
    a.r[2] = r5;
    a.r[3] = r6;
    a.f[0] = f1;
    (void)tc_call(r12, &a);
    return;
}
