#include "tc_rt.h"

void fn_80090640(s32 param_1)
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
    a.r[1] = 0x371u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    r31 = r3;
    a.r[0] = 1u;
    (void)tc_call(0x80050b14u, &a);
    a.r[0] = r31;
    a.r[1] = 0u;
    (void)tc_call(0x800510bcu, &a);
    r4 = r31;
    r3 = (u32)param_1;
    r5 = 0u;
    ctr = 0x12u;
    do {
        r5 = r5 + 8u;
        wr8(r3 + 0xc60u, rd8(r4));
        wr8(r3 + 0xc61u, rd8(r4 + 1u));
        wr8(r3 + 0xc62u, rd8(r4 + 2u));
        wr8(r3 + 0xc63u, rd8(r4 + 3u));
        wr8(r3 + 0xc64u, rd8(r4 + 4u));
        wr8(r3 + 0xc65u, rd8(r4 + 5u));
        wr8(r3 + 0xc66u, rd8(r4 + 6u));
        wr8(r3 + 0xc67u, rd8(r4 + 7u));
        wr8(r3 + 0xc68u, rd8(r4 + 8u));
        wr8(r3 + 0xc69u, rd8(r4 + 9u));
        wr8(r3 + 0xc6au, rd8(r4 + 0xau));
        wr8(r3 + 0xc6bu, rd8(r4 + 0xbu));
        wr8(r3 + 0xc6cu, rd8(r4 + 0xcu));
        wr8(r3 + 0xc6du, rd8(r4 + 0xdu));
        wr8(r3 + 0xc6eu, rd8(r4 + 0xeu));
        wr8(r3 + 0xc6fu, rd8(r4 + 0xfu));
        wr8(r3 + 0xc70u, rd8(r4 + 0x10u));
        wr8(r3 + 0xc71u, rd8(r4 + 0x11u));
        wr8(r3 + 0xc72u, rd8(r4 + 0x12u));
        wr8(r3 + 0xc73u, rd8(r4 + 0x13u));
        wr8(r3 + 0xc74u, rd8(r4 + 0x14u));
        wr8(r3 + 0xc75u, rd8(r4 + 0x15u));
        wr8(r3 + 0xc76u, rd8(r4 + 0x16u));
        wr8(r3 + 0xc77u, rd8(r4 + 0x17u));
        wr8(r3 + 0xc78u, rd8(r4 + 0x18u));
        wr8(r3 + 0xc79u, rd8(r4 + 0x19u));
        wr8(r3 + 0xc7au, rd8(r4 + 0x1au));
        wr8(r3 + 0xc7bu, rd8(r4 + 0x1bu));
        wr8(r3 + 0xc7cu, rd8(r4 + 0x1cu));
        wr8(r3 + 0xc7du, rd8(r4 + 0x1du));
        wr8(r3 + 0xc7eu, rd8(r4 + 0x1eu));
        r0 = (u32)rd8(r4 + 0x1fu);
        r4 = r4 + 0x20u;
        wr8(r3 + 0xc7fu, (u8)r0);
        r3 = r3 + 0x20u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r3 = (u32)param_1 + ((r5 << 2u) & 0xfffffffcu);
    wr8(r3 + 0xc60u, rd8(r4));
    wr8(r3 + 0xc61u, rd8(r4 + 1u));
    wr8(r3 + 0xc62u, rd8(r4 + 2u));
    wr8(r3 + 0xc63u, rd8(r4 + 3u));
    wr8(r3 + 0xc64u, rd8(r4 + 4u));
    wr8(r3 + 0xc65u, rd8(r4 + 5u));
    wr8(r3 + 0xc66u, rd8(r4 + 6u));
    wr8(r3 + 0xc67u, rd8(r4 + 7u));
    wr8(r3 + 0xc68u, rd8(r4 + 8u));
    wr8(r3 + 0xc69u, rd8(r4 + 9u));
    wr8(r3 + 0xc6au, rd8(r4 + 0xau));
    wr8(r3 + 0xc6bu, rd8(r4 + 0xbu));
    wr8(r3 + 0xc6cu, rd8(r4 + 0xcu));
    wr8(r3 + 0xc6du, rd8(r4 + 0xdu));
    wr8(r3 + 0xc6eu, rd8(r4 + 0xeu));
    wr8(r3 + 0xc6fu, rd8(r4 + 0xfu));
    wr8(r3 + 0xc70u, rd8(r4 + 0x10u));
    wr8(r3 + 0xc71u, rd8(r4 + 0x11u));
    wr8(r3 + 0xc72u, rd8(r4 + 0x12u));
    wr8(r3 + 0xc73u, rd8(r4 + 0x13u));
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
