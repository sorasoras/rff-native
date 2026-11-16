#include "tc_rt.h"

void fn_8015f434(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0x369u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    r31 = r3;
    a.r[0] = r3;
    a.r[1] = 0u;
    (void)tc_call(0x800510bcu, &a);
    r3 = r31;
    r4 = param_1;
    r5 = 0u;
    ctr = 6u;
    do {
        r5 = r5 + 0x10u;
        wr16(r4, rd16(r3));
        wr16(r4 + 2u, rd16(r3 + 2u));
        wr16(r4 + 4u, rd16(r3 + 4u));
        wr16(r4 + 6u, rd16(r3 + 6u));
        wr16(r4 + 8u, rd16(r3 + 8u));
        wr16(r4 + 0xau, rd16(r3 + 0xau));
        wr16(r4 + 0xcu, rd16(r3 + 0xcu));
        wr16(r4 + 0xeu, rd16(r3 + 0xeu));
        wr16(r4 + 0x10u, rd16(r3 + 0x10u));
        wr16(r4 + 0x12u, rd16(r3 + 0x12u));
        wr16(r4 + 0x14u, rd16(r3 + 0x14u));
        wr16(r4 + 0x16u, rd16(r3 + 0x16u));
        wr16(r4 + 0x18u, rd16(r3 + 0x18u));
        wr16(r4 + 0x1au, rd16(r3 + 0x1au));
        wr16(r4 + 0x1cu, rd16(r3 + 0x1cu));
        wr16(r4 + 0x1eu, rd16(r3 + 0x1eu));
        wr16(r4 + 0x20u, rd16(r3 + 0x20u));
        wr16(r4 + 0x22u, rd16(r3 + 0x22u));
        wr16(r4 + 0x24u, rd16(r3 + 0x24u));
        wr16(r4 + 0x26u, rd16(r3 + 0x26u));
        wr16(r4 + 0x28u, rd16(r3 + 0x28u));
        wr16(r4 + 0x2au, rd16(r3 + 0x2au));
        wr16(r4 + 0x2cu, rd16(r3 + 0x2cu));
        wr16(r4 + 0x2eu, rd16(r3 + 0x2eu));
        wr16(r4 + 0x30u, rd16(r3 + 0x30u));
        wr16(r4 + 0x32u, rd16(r3 + 0x32u));
        wr16(r4 + 0x34u, rd16(r3 + 0x34u));
        wr16(r4 + 0x36u, rd16(r3 + 0x36u));
        wr16(r4 + 0x38u, rd16(r3 + 0x38u));
        wr16(r4 + 0x3au, rd16(r3 + 0x3au));
        wr16(r4 + 0x3cu, rd16(r3 + 0x3cu));
        r0 = (u32)rd16(r3 + 0x3eu);
        r3 = r3 + 0x40u;
        wr16(r4 + 0x3eu, (u16)r0);
        r4 = r4 + 0x40u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r4 = (r5 << 2u) & 0xfffffffcu;
    wr16(r4 + param_1, rd16(r3));
    r4 = r4 + param_1;
    wr16(r4 + 2u, rd16(r3 + 2u));
    wr16(r4 + 4u, rd16(r3 + 4u));
    wr16(r4 + 6u, rd16(r3 + 6u));
    wr16(r4 + 8u, rd16(r3 + 8u));
    wr16(r4 + 0xau, rd16(r3 + 0xau));
    r3 = tc_call(0x800545e4u, &a);
    r6 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = r31;
        a.r[2] = r5;
        a.r[3] = r6;
        (void)tc_call(0x80040e98u, &a);
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = r31;
            (void)tc_call(0x80094ec0u, &a);
        } else {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r31;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        }
    }
    return;
}
