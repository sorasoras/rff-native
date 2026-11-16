#include "tc_rt.h"

void fn_802a4714(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r4, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r29 = 0, r30 = 0, r31 = 0;
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
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    r30 = 0u;
    r29 = 0u;
    r31 = 0u;
    ctr = 4u;
    do {
        r0 = (r31 & 0xffu) * 0x34u;
        r6 = r0 - 0x7fabf9e8u;
        r0 = (u32)rd8(r0 - 0x7fabf9e8u);
        if (r0 != 0u && (u32)rd8(r6 + 0x10u) != 0u && (param_r3 == (u32)rd16(r6 + 0x14u) || param_r3 == (u32)rd16(r6 + 0x16u))) break;
        r31 = r31 + 1u;
        r0 = (r31 & 0xffu) * 0x34u;
        r6 = r0 - 0x7fabf9e8u;
        r0 = (u32)rd8(r0 - 0x7fabf9e8u);
        if (r0 != 0u && (u32)rd8(r6 + 0x10u) != 0u && (param_r3 == (u32)rd16(r6 + 0x14u) || param_r3 == (u32)rd16(r6 + 0x16u))) break;
        r31 = r31 + 1u;
        r0 = (r31 & 0xffu) * 0x34u;
        r6 = r0 - 0x7fabf9e8u;
        r0 = (u32)rd8(r0 - 0x7fabf9e8u);
        if (r0 != 0u && (u32)rd8(r6 + 0x10u) != 0u && (param_r3 == (u32)rd16(r6 + 0x14u) || param_r3 == (u32)rd16(r6 + 0x16u))) break;
        r31 = r31 + 1u;
        r0 = (r31 & 0xffu) * 0x34u;
        r6 = r0 - 0x7fabf9e8u;
        r0 = (u32)rd8(r0 - 0x7fabf9e8u);
        if (r0 != 0u && (u32)rd8(r6 + 0x10u) != 0u && (param_r3 == (u32)rd16(r6 + 0x14u) || param_r3 == (u32)rd16(r6 + 0x16u))) break;
        r31 = r31 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r0 = r31 & 0xffu;
    if (r0 != 0x10u) {
        r0 = r0 * 0x34u;
        r30 = r0 - 0x7fabf9d8u;
    }
    if (r30 != 0u) {
        if (param_r4 != 0u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = param_r3;
            a.r[3] = r6;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            f1 = tc_callf(0x802a5d90u, &a);
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
        }
        if ((u32)rd8(0x80540a19u) >= 4u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0x1e0003u;
            a.r[1] = 0x80395494u;
            a.r[2] = param_r3;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            f1 = tc_callf(0x8028cc6cu, &a);
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
        }
        wr8(r30, 5u);
        if (param_r3 != (u32)rd16(r30 + 4u)) {
            wr16(r30 + 6u, 0u);
        } else {
            wr16(r30 + 4u, 0u);
        }
        if ((u32)rd16(r30 + 4u) == 0u && (u32)rd16(r30 + 6u) == 0u) {
            wr8(((r31 & 0xffu) * 0x34u) - 0x7fabf9deu, 0u);
            wr8(r30, 0u);
            if (param_r4 == 0u) {
                r3 = tc_call(0x802940d8u, &a);
                f1 = tc_lastf();
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
                r29 = r3;
            }
            r0 = r29 & 0xffffu;
            r5 = (u32)rd16(r30 + 0xau);
            if (r0 == 5u || r0 == 6u || r0 == 0xeu || r0 == 0x18u || r0 == 0x26u || r0 == 0x29u || r0 == 0x25u || r0 == 0x17u) {
                r5 = 0xfu;
            }
            a.r[0] = r31 & 0xffu;
            a.r[1] = 1u;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            (void)tc_call(rd32(0x80540958u), &a);
        }
    } else if ((u32)rd8(0x80540a19u) >= 2u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x1e0001u;
        a.r[1] = 0x80395468u;
        a.r[2] = param_r3;
        a.r[3] = r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x8028cc6cu, &a);
    }
    return;
}
