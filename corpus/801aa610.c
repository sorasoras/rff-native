#include "tc_rt.h"

u32 fn_801aa610(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_2;
    f1 = tc_callf(0x801c1998u, &a);
    r4 = tc_lastr4();
    r29 = param_1 + 0xf18u;
    r28 = 0u;
    r30 = r29;
    do {
        a.r[0] = r30;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r30) + 0xcu), &a);
        a.r[0] = r30;
        f1 = tc_callf(0x801c1964u, &a);
        r4 = tc_lastr4();
        r28 = r28 + 1u;
        r30 = r30 + 0xfcu;
    } while ((s32)r28 < 32);
    f1 = tc_callf(0x801c1588u, &a);
    r4 = tc_lastr4();
    r30 = param_1 + 0x2e98u;
    r28 = 0u;
    do {
        a.r[0] = r29;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r29) + 0xcu), &a);
        a.r[0] = r30;
        f1 = tc_callf(0x801c1554u, &a);
        r4 = tc_lastr4();
        r28 = r28 + 1u;
        r30 = r30 + 0x100u;
        r29 = r29 + 0xfcu;
    } while ((s32)r28 < 16);
    a.r[0] = param_1;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = param_5;
    (void)tc_call(0x801e7148u, &a);
    a.r[0] = rd32(param_1 + 0x70u);
    a.r[1] = 0x8033b15cu;
    r3 = tc_call(0x80031be0u, &a);
    f1 = tc_lastf();
    r28 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x801aa230u;
        f1 = tc_callf(0x8007b13cu, &a);
        wr32(r28 + 0x60u, param_1);
    }
    a.r[0] = param_1;
    a.r[1] = rd32(param_1 + 0x1bcu);
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0xc8u), &a);
    r3 = rd32(param_1 + 0x9cu);
    wr32(param_1 + 0xcf8u, 0u);
    r3 = r3 | 0x8000000u;
    wr32(param_1 + 0x9cu, r3);
    if ((u32)(s8)rd8(0x80571341u) == 0u) {
        wr32(0x80571348u, 0x80371e90u);
        a.r[0] = 0x80571348u;
        r3 = tc_call(0x801c38acu, &a);
        wr32(0x8057134cu, r3);
        wr32(0x80571348u, 0x80373150u);
        wr8(0x80571341u, 1u);
    }
    a.r[0] = param_1 + 0xcfcu;
    a.r[1] = rd32(0x8057134cu);
    (void)tc_call(0x801c3608u, &a);
    a.r[0] = param_1;
    a.r[1] = 0x13u;
    a.r[2] = 0x80371a60u;
    f1 = tc_callf(0x801c2c98u, &a);
    wr32(param_1 + 0x3e9cu, 0u);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0xcu), &a);
    return 1u;
}
