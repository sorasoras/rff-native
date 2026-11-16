#include "tc_rt.h"

void fn_8006e308(void)
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
    a.r[1] = 0x368u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    r31 = r3;
    a.r[0] = r3;
    a.r[1] = 0u;
    (void)tc_call(0x800510bcu, &a);
    r3 = r31;
    r4 = 0x80468df0u;
    ctr = 0x21u;
    do {
        r0 = 1u;
        wr8(r4, rd8(r3 + 1u));
        wr8(r4 + 1u, rd8(r3 + 2u));
        r6 = (u32)rd8(r3 + 3u);
        if (r6 >= 1u) {
            r0 = r6;
        }
        wr8(r4 + 2u, (u8)r0);
        wr8(r4 + 3u, rd8(r3 + 4u));
        wr16(r4 + 4u, rd16(r3 + 0x10u));
        wr16(r4 + 6u, rd16(r3 + 0x12u));
        wr16(r4 + 8u, rd16(r3 + 0x14u));
        wr16(r4 + 0xau, rd16(r3 + 0x16u));
        wr8(r4 + 0xcu, rd8(r3 + 5u));
        wr8(r4 + 0x10u, rd8(r3 + 9u));
        wr8(r4 + 0xdu, rd8(r3 + 6u));
        wr8(r4 + 0x11u, rd8(r3 + 0xau));
        wr8(r4 + 0xeu, rd8(r3 + 7u));
        wr8(r4 + 0x12u, rd8(r3 + 0xbu));
        wr8(r4 + 0xfu, rd8(r3 + 8u));
        wr8(r4 + 0x13u, rd8(r3 + 0xcu));
        wr8(r4 + 0x14u, rd8(r3 + 0x18u));
        wr8(r4 + 0x15u, rd8(r3 + 0x19u));
        wr8(r4 + 0x16u, rd8(r3 + 0x1au));
        wr8(r4 + 0x17u, rd8(r3 + 0x1bu));
        wr8(r4 + 0x18u, rd8(r3 + 0x1cu));
        wr8(r4 + 0x19u, rd8(r3 + 0x1du));
        wr8(r4 + 0x1au, rd8(r3 + 0x1eu));
        wr8(r4 + 0x1bu, rd8(r3 + 0x1fu));
        wr8(r4 + 0x1cu, rd8(r3 + 0x20u));
        wr8(r4 + 0x1du, rd8(r3 + 0x21u));
        wr8(r4 + 0x1eu, rd8(r3 + 0x22u));
        wr8(r4 + 0x1fu, (u8)rd32(r3 + 0x24u));
        wr32(r4 + 0x20u, rd32(r3 + 0x28u));
        wr16(r4 + 0x24u, rd16(r3 + 0x2cu));
        wr8(r4 + 0x26u, rd8(r3 + 0x2eu));
        wr8(r4 + 0x27u, rd8(r3 + 0x2fu));
        wr16(r4 + 0x28u, rd16(r3 + 0x30u));
        wr8(r4 + 0x2au, rd8(r3 + 0x32u));
        wr8(r4 + 0x2bu, rd8(r3 + 0x33u));
        wr16(r4 + 0x2cu, rd16(r3 + 0x34u));
        wr8(r4 + 0x2eu, rd8(r3 + 0x36u));
        wr8(r4 + 0x2fu, rd8(r3 + 0x37u));
        wr16(r4 + 0x30u, rd16(r3 + 0x38u));
        wr8(r4 + 0x32u, rd8(r3 + 0x3au));
        wr8(r4 + 0x33u, rd8(r3 + 0x3bu));
        wr16(r4 + 0x34u, rd16(r3 + 0x3cu));
        wr8(r4 + 0x36u, rd8(r3 + 0x3eu));
        wr8(r4 + 0x37u, rd8(r3 + 0x3fu));
        wr16(r4 + 0x38u, rd16(r3 + 0x40u));
        wr8(r4 + 0x3au, (u8)rd16(r3 + 0x42u));
        wr8(r4 + 0x3bu, 0u);
        wr16(r4 + 0x3cu, rd16(r3 + 0x44u));
        wr8(r4 + 0x3eu, (u8)rd16(r3 + 0x46u));
        wr8(r4 + 0x3fu, 0u);
        wr16(r4 + 0x40u, rd16(r3 + 0x48u));
        wr8(r4 + 0x42u, (u8)rd16(r3 + 0x4au));
        wr8(r4 + 0x43u, 0u);
        wr16(r4 + 0x44u, rd16(r3 + 0x4cu));
        wr8(r4 + 0x46u, (u8)rd16(r3 + 0x4eu));
        wr8(r4 + 0x47u, 0u);
        wr16(r4 + 0x48u, rd16(r3 + 0x50u));
        wr8(r4 + 0x4au, (u8)rd16(r3 + 0x52u));
        wr8(r4 + 0x4bu, 0u);
        wr16(r4 + 0x4cu, rd16(r3 + 0x54u));
        wr8(r4 + 0x4eu, (u8)rd16(r3 + 0x56u));
        wr8(r4 + 0x4fu, 0u);
        wr16(r4 + 0x50u, rd16(r3 + 0x58u));
        wr8(r4 + 0x52u, (u8)rd16(r3 + 0x5au));
        wr8(r4 + 0x53u, 0u);
        r0 = rd32(r3 + 0x5cu);
        r3 = r3 + 0x60u;
        wr32(r4 + 0x54u, r0);
        r4 = r4 + 0x58u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
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
