#include "tc_rt.h"

void fn_8008059c(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
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
    a.r[1] = 0x36fu;
    a.r[2] = 0xffffffffu;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    r31 = r3;
    a.r[0] = r3;
    a.r[1] = 0u;
    (void)tc_call(0x800510bcu, &a);
    r4 = rd32(r31);
    wr16(0x80499080u, rd16(r4));
    wr16(0x80499082u, rd16(r4 + 2u));
    wr16(0x80499084u, rd16(r4 + 4u));
    wr16(0x80499086u, rd16(r4 + 6u));
    wr16(0x80499088u, rd16(r4 + 8u));
    wr16(0x8049908au, rd16(r4 + 0xau));
    wr16(0x8049908cu, rd16(r4 + 0xcu));
    wr16(0x8049908eu, rd16(r4 + 0xeu));
    wr32(0x80499090u, rd32(r4 + 0x10u));
    wr32(0x80499094u, rd32(r4 + 0x14u));
    wr8(0x80499098u, rd8(r4 + 0x18u));
    wr8(0x80499099u, rd8(r4 + 0x19u));
    wr8(0x8049909au, rd8(r4 + 0x1au));
    wr8(0x8049909bu, rd8(r4 + 0x1bu));
    wr8(0x8049909cu, rd8(r4 + 0x1cu));
    wr8(0x8049909du, rd8(r4 + 0x1du));
    wr8(0x8049909eu, rd8(r4 + 0x1eu));
    wr8(0x8049909fu, rd8(r4 + 0x1fu));
    r4 = rd32(r31 + 4u);
    wr8(0x804990a0u, rd8(r4));
    wr8(0x804990a1u, rd8(r4 + 1u));
    wr8(0x804990a2u, rd8(r4 + 2u));
    wr8(0x804990a3u, rd8(r4 + 3u));
    wr8(0x804990a4u, rd8(r4 + 4u));
    wr8(0x804990a5u, rd8(r4 + 5u));
    wr8(0x804990a6u, rd8(r4 + 6u));
    wr8(0x804990a7u, rd8(r4 + 7u));
    wr8(0x804990a8u, rd8(r4 + 8u));
    wr8(0x804990a9u, rd8(r4 + 9u));
    wr8(0x804990aau, rd8(r4 + 0xau));
    wr8(0x804990abu, rd8(r4 + 0xbu));
    r5 = rd32(r31 + 8u);
    r0 = (u32)rd8(r5 + 1u);
    wr8(0x804990acu, rd8(r5));
    wr8(0x804990adu, (u8)r0);
    r0 = (u32)rd8(r5 + 3u);
    wr8(0x804990aeu, rd8(r5 + 2u));
    wr8(0x804990afu, (u8)r0);
    r0 = (u32)rd8(r5 + 5u);
    wr8(0x804990b0u, rd8(r5 + 4u));
    wr8(0x804990b1u, (u8)r0);
    r0 = (u32)rd8(r5 + 7u);
    wr8(0x804990b2u, rd8(r5 + 6u));
    wr8(0x804990b3u, (u8)r0);
    wr8(0x804990b4u, rd8(r5 + 8u));
    wr8(0x804990b5u, rd8(r5 + 9u));
    wr8(0x804990b6u, rd8(r5 + 0xau));
    wr8(0x804990b7u, rd8(r5 + 0xbu));
    r0 = (u32)rd16(r5 + 0xeu);
    wr16(0x804990b8u, rd16(r5 + 0xcu));
    wr16(0x804990bau, (u16)r0);
    r0 = (u32)rd16(r5 + 0x12u);
    wr16(0x804990bcu, rd16(r5 + 0x10u));
    wr16(0x804990beu, (u16)r0);
    r0 = (u32)rd16(r5 + 0x16u);
    wr16(0x804990c0u, rd16(r5 + 0x14u));
    wr16(0x804990c2u, (u16)r0);
    r0 = (u32)rd16(r5 + 0x1au);
    wr16(0x804990c4u, rd16(r5 + 0x18u));
    wr16(0x804990c6u, (u16)r0);
    wr16(0x804990c8u, rd16(r5 + 0x1cu));
    wr16(0x804990cau, rd16(r5 + 0x1eu));
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
    a.r[1] = 0x370u;
    a.r[2] = 0xffffffffu;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    r31 = r3;
    a.r[0] = r3;
    a.r[1] = 0u;
    (void)tc_call(0x800510bcu, &a);
    r5 = rd32(r31 + 4u);
    r6 = 0u;
    if (r5 != 0u) {
        r7 = r5 - 8u;
        if (r5 > 8u) {
            r4 = 0u;
            r3 = 0x80499240u;
            ctr = ((r7 + 7u) >> 3u) & 0x1fffffffu;
            if (r7 > 0u) {
                do {
                    wr16(r3, rd16(rd32(rd32(r31) + r4)));
                    wr8(r3 + 2u, rd8(rd32(rd32(r31) + r4) + 2u));
                    wr8(r3 + 3u, rd8(rd32(rd32(r31) + r4) + 3u));
                    wr16(r3 + 4u, rd16(rd32(rd32(r31) + r4 + 4u)));
                    wr8(r3 + 6u, rd8(rd32(rd32(r31) + r4 + 4u) + 2u));
                    wr8(r3 + 7u, rd8(rd32(rd32(r31) + r4 + 4u) + 3u));
                    wr16(r3 + 8u, rd16(rd32(rd32(r31) + r4 + 8u)));
                    wr8(r3 + 0xau, rd8(rd32(rd32(r31) + r4 + 8u) + 2u));
                    wr8(r3 + 0xbu, rd8(rd32(rd32(r31) + r4 + 8u) + 3u));
                    wr16(r3 + 0xcu, rd16(rd32(rd32(r31) + r4 + 0xcu)));
                    wr8(r3 + 0xeu, rd8(rd32(rd32(r31) + r4 + 0xcu) + 2u));
                    wr8(r3 + 0xfu, rd8(rd32(rd32(r31) + r4 + 0xcu) + 3u));
                    wr16(r3 + 0x10u, rd16(rd32(rd32(r31) + r4 + 0x10u)));
                    wr8(r3 + 0x12u, rd8(rd32(rd32(r31) + r4 + 0x10u) + 2u));
                    wr8(r3 + 0x13u, rd8(rd32(rd32(r31) + r4 + 0x10u) + 3u));
                    wr16(r3 + 0x14u, rd16(rd32(rd32(r31) + r4 + 0x14u)));
                    wr8(r3 + 0x16u, rd8(rd32(rd32(r31) + r4 + 0x14u) + 2u));
                    wr8(r3 + 0x17u, rd8(rd32(rd32(r31) + r4 + 0x14u) + 3u));
                    wr16(r3 + 0x18u, rd16(rd32(rd32(r31) + r4 + 0x18u)));
                    wr8(r3 + 0x1au, rd8(rd32(rd32(r31) + r4 + 0x18u) + 2u));
                    r6 = r6 + 8u;
                    wr8(r3 + 0x1bu, rd8(rd32(rd32(r31) + r4 + 0x18u) + 3u));
                    wr16(r3 + 0x1cu, rd16(rd32(rd32(r31) + r4 + 0x1cu)));
                    wr8(r3 + 0x1eu, rd8(rd32(rd32(r31) + r4 + 0x1cu) + 2u));
                    r7 = rd32(r31) + r4;
                    r4 = r4 + 0x20u;
                    r7 = rd32(r7 + 0x1cu);
                    wr8(r3 + 0x1fu, rd8(r7 + 3u));
                    r3 = r3 + 0x20u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        r7 = (r6 << 2u) & 0xfffffffcu;
        r4 = r7 - 0x7fb66dc0u;
        ctr = r5 - r6;
        if (r6 < r5) {
            do {
                wr16(r4, rd16(rd32(rd32(r31) + r7)));
                wr8(r4 + 2u, rd8(rd32(rd32(r31) + r7) + 2u));
                r3 = rd32(rd32(r31) + r7);
                r7 = r7 + 4u;
                wr8(r4 + 3u, rd8(r3 + 3u));
                r4 = r4 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
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
