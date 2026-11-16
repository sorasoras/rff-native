#include "tc_rt.h"

u32 fn_8023c478(u32 param_1, u32 param_2, u32 param_3, u32 param_4, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r11 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r11 = rd32(0x80571680u);
    wr8(0x80571678u, 1u);
    r10 = (r11 << 5u) & 0xffffffe0u;
    r8 = r10 - 0x7fb1a060u;
    r7 = (u32)rd8(r8 + 8u);
    if (((((0u - r7) | r7) >> 0x1fu) & 1u) == 1u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x80387c60u;
        a.r[1] = r11;
        a.r[2] = param_3;
        a.r[3] = param_4;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = 0x804e5fa0u;
        a.r[7] = r10;
        f1 = tc_callf(0x80228554u, &a);
        r3 = tc_lastr();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80387c98u;
        a.r[1] = tc_lastr4();
        a.r[2] = tc_junkr(5u);
        a.r[3] = tc_junkr(6u);
        a.r[4] = tc_junkr(7u);
        a.r[5] = tc_junkr(8u);
        a.r[6] = tc_junkr(9u);
        a.r[7] = tc_junkr(0xau);
        r3 = tc_call(0x80228554u, &a);
        f1 = tc_lastf();
        for (;;) {
        }
    }
    r7 = rd32(r8 + 0xcu);
    if ((r7 + 0x1150000u) != 0xdaedu) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x80387cc8u;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = param_4;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = 0x804e5fa0u;
        a.r[7] = r10;
        r3 = tc_call(0x80228554u, &a);
        f1 = tc_lastf();
        for (;;) {
        }
    }
    wr32(r10 - 0x7fb1a060u, param_4);
    r0 = r11 + 1u;
    wr32(r8 + 4u, 1u);
    wr8(r8 + 8u, 1u);
    wr32(0x80571680u, r0);
    if ((s32)r0 >= 4) {
        wr32(0x80571680u, 0u);
    }
    r0 = rd32(0x8057167cu) + 1u;
    wr32(0x8057167cu, r0);
    r30 = ((r11 << 5u) & 0xffffffe0u) - 0x7fb1a060u;
    if ((s32)r0 >= 4) {
        r0 = 0u;
        wr32(0x8057167cu, 0u);
    }
    r0 = (r0 << 5u) & 0xffffffe0u;
    wr8(rd32(0x80571694u) + r0, 0xa4u);
    r0 = (rd32(0x8057167cu) << 5u) & 0xffffffe0u;
    wr32(rd32(0x80571694u) + r0 + 4u, (param_2 >> 0x10u) & 0xffffu);
    r0 = (rd32(0x8057167cu) << 5u) & 0xffffffe0u;
    wr32(rd32(0x80571694u) + r0 + 8u, param_3);
    r0 = (rd32(0x8057167cu) << 5u) & 0xffffffe0u;
    r5 = rd32(0x80571694u) + r0;
    a.r[0] = rd32(0x80570af0u);
    a.r[1] = 0xa4u;
    a.r[2] = r5;
    a.r[3] = 0x20u;
    a.r[4] = param_1;
    a.r[5] = 0x20u;
    a.r[6] = 0x8023aae0u;
    a.r[7] = r30;
    r3 = tc_call(0x8026fd70u, &a);
    f1 = tc_lastf();
    r5 = tc_junkr(5u);
    r6 = tc_junkr(6u);
    r7 = tc_junkr(7u);
    r8 = tc_junkr(8u);
    r9 = tc_junkr(9u);
    r10 = tc_junkr(0xau);
    if (r3 != 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x803884b8u;
        a.r[1] = r3;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        r3 = tc_call(0x80228554u, &a);
        f1 = tc_lastf();
        r3 = 0u;
        wr8(r30 + 8u, 0u);
    } else {
        r3 = 1u;
    }
    return r3;
}
