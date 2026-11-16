#include "tc_rt.h"

s32 fn_8026d950(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0eq = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r5 = param_r5;
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    r31 = 0u;
    if (rd32(0x80571a58u) == 0u) {
        r3 = tc_call(0x8026ed38u, &a);
        wr32(0x80571a64u, r3);
        r3 = tc_call(0x8026ed30u, &a);
        f1 = tc_lastf();
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        r9 = 0u;
        r10 = 0u;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        f5 = 0.0;
        f6 = 0.0;
        f7 = 0.0;
        f8 = 0.0;
        wr32(0x80571a68u, r3);
    }
    r3 = (rd32(0x80571a64u) + 0x1fu) & 0xffffffe0u;
    c0eq = rd32(0x80571a58u) == 0u;
    wr32(0x80571a5cu, r3);
    if (c0eq) {
        r4 = r3 + 0x40u;
        if (r4 > rd32(0x80571a68u)) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0x8038f4e0u;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            (void)tc_call(0x80228554u, &a);
            r31 = 0xffffffeau;
            return (s32)r31;
        }
    }
    a.r[0] = r3;
    a.r[1] = 0x80570c30u;
    (void)tc_call(0x8025bd34u, &a);
    a.r[0] = rd32(0x80571a5cu);
    a.r[1] = 0u;
    r3 = tc_call(0x8026f5f8u, &a);
    f1 = tc_lastf();
    wr32(0x80570c28u, r3);
    if ((s32)r3 < 0) {
        r31 = r3;
    } else {
        r4 = rd32(0x80571a58u);
        r30 = rd32(0x80571a5cu);
        if (r4 == 0u && (r30 + 0x1540u) > rd32(0x80571a68u)) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x8038f4e0u;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80228554u, &a);
            r31 = 0xffffffeau;
        } else {
            if (r4 == 0u) {
                a.r[0] = r30 + 0x1540u;
                (void)tc_call(0x8026ed40u, &a);
                wr32(0x80571a58u, 1u);
            }
            a.r[0] = r30;
            a.r[1] = 0x1540u;
            r3 = tc_call(0x802705d0u, &a);
            wr32(0x80571a6cu, r3);
            if ((s32)r3 < 0) {
                r31 = 0xffffffeau;
            }
        }
    }
    return (s32)r31;
}
