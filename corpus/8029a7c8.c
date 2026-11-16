#include "tc_rt.h"

void fn_8029a7c8(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, s32 param_6, s32 param_7, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8)
{
    u32 r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    r6 = param_4;
    r7 = param_5;
    r8 = (u32)param_6;
    r9 = (u32)param_7;
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = 0x8053d958u;
    r28 = 0xffffu;
    r30 = 0x8053f2e8u;
    r27 = 0u;
    r29 = 0u;
    do {
        if (((u32)rd8(r30 + 0xeu) & 0x80u) == 0u) {
            if (r27 == 0u) {
                r27 = 1u;
                r28 = r29;
            }
        } else if ((u32)rd16(r30 + 0xcu) == param_5 && rd32(r30) == (u32)param_6 && param_3 == (u32)rd8(r30 + 0xfu)) {
            a.r[0] = param_2;
            a.r[1] = r30 + 0x10u;
            a.r[2] = 0x15u;
            r3 = tc_call(0x8025bfccu, &a);
            f1 = tc_lastf();
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
            if (r3 == 0u) {
                r27 = 1u;
                break;
            }
            a.r[0] = param_2;
            a.r[1] = r30 + 0x26u;
            a.r[2] = 0x15u;
            r3 = tc_call(0x8025bfccu, &a);
            f1 = tc_lastf();
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
            if (r3 == 0u) {
                r27 = 1u;
                break;
            }
        }
        r29 = r29 + 1u;
        r30 = r30 + 0x3cu;
    } while (r29 < 0x18u);
    if (r27 == 0u) {
        if ((u32)rd8(0x80540118u) >= 2u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0xd0001u;
            a.r[1] = 0x80394370u;
            a.r[2] = 0x18u;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            (void)tc_call(0x8028cc6cu, &a);
        }
    } else {
        if ((r29 & 0xffffu) >= 0x18u) {
            r29 = r28;
            r30 = ((r28 & 0xffffu) * 0x3cu) - 0x7fac0d18u;
        }
        wr16(r30 + 0xcu, (u16)param_5);
        wr8(r30 + 0xfu, (u8)param_3);
        wr32(r30, (u32)param_6);
        if (param_1 == 0u) {
            wr32(r30 + 8u, (u32)param_7);
            wr8(r30 + 0xeu, (u8)((u32)rd8(r30 + 0xeu) & 0xf8u));
            a.r[0] = r30 + 0x26u;
            a.r[1] = param_2;
            a.r[2] = 0x15u;
            f1 = tc_callf(0x8025bdf4u, &a);
        } else {
            wr32(r30 + 4u, (u32)param_7);
            wr8(r30 + 0xeu, (u8)((u32)rd8(r30 + 0xeu) & 0xffffffc7u));
            a.r[0] = r30 + 0x10u;
            a.r[1] = param_2;
            a.r[2] = 0x15u;
            f1 = tc_callf(0x8025bdf4u, &a);
        }
        wr8(r30 + 0xeu, (u8)((u32)rd8(r30 + 0xeu) | (param_4 | 0x80u)));
        if ((u32)rd8(0x80540118u) >= 3u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0xd0002u;
            a.r[1] = 0x803942e0u;
            a.r[2] = r29 & 0xffffu;
            a.r[3] = param_3;
            a.r[4] = param_1;
            a.r[5] = param_5;
            a.r[6] = (u32)param_6;
            a.r[7] = (u32)param_7;
            f1 = tc_callf(0x8028cce4u, &a);
        }
        if ((u32)rd8(0x80540118u) >= 3u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0xd0002u;
            a.r[1] = 0x80394328u;
            a.r[2] = (u32)rd8(r30 + 0xeu);
            a.r[3] = param_2;
            a.r[4] = 0x15u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc9cu, &a);
        }
    }
    return;
}
