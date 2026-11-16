#include "tc_rt.h"

void fn_802a3e18(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r28 = 0, r30 = 0;
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
    r8 = param_r8;
    r5 = 0u;
    r6 = 0x80540618u;
    r9 = 0u;
    r30 = 0u;
    ctr = 4u;
    do {
        r0 = (r30 & 0xffu) * 0x34u;
        r7 = r0 - 0x7fabf9e8u;
        r0 = (u32)rd8(r0 - 0x7fabf9e8u);
        if (r0 != 0u && (u32)rd8(r7 + 0x10u) != 0u && (param_1 == (u32)rd16(r7 + 0x14u) || param_1 == (u32)rd16(r7 + 0x16u))) break;
        r30 = r30 + 1u;
        r0 = (r30 & 0xffu) * 0x34u;
        r7 = r0 - 0x7fabf9e8u;
        r0 = (u32)rd8(r0 - 0x7fabf9e8u);
        if (r0 != 0u && (u32)rd8(r7 + 0x10u) != 0u && (param_1 == (u32)rd16(r7 + 0x14u) || param_1 == (u32)rd16(r7 + 0x16u))) break;
        r30 = r30 + 1u;
        r0 = (r30 & 0xffu) * 0x34u;
        r7 = r0 - 0x7fabf9e8u;
        r0 = (u32)rd8(r0 - 0x7fabf9e8u);
        if (r0 != 0u && (u32)rd8(r7 + 0x10u) != 0u && (param_1 == (u32)rd16(r7 + 0x14u) || param_1 == (u32)rd16(r7 + 0x16u))) break;
        r30 = r30 + 1u;
        r0 = (r30 & 0xffu) * 0x34u;
        r7 = r0 - 0x7fabf9e8u;
        r0 = (u32)rd8(r0 - 0x7fabf9e8u);
        if (r0 != 0u && (u32)rd8(r7 + 0x10u) != 0u && (param_1 == (u32)rd16(r7 + 0x14u) || param_1 == (u32)rd16(r7 + 0x16u))) break;
        r30 = r30 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r0 = r30 & 0xffu;
    if (r0 != 0x10u) {
        r0 = r0 * 0x34u;
        r9 = r0 - 0x7fabf9e8u;
        r5 = r9 + 0x10u;
    }
    if (r5 != 0u && ((u32)rd8(r5 + 1u) & 1u) != 0u) {
        r6 = (u32)rd16(r5 + 4u);
        if ((param_1 != r6 || (u32)rd8(r5) == 1u) && (param_1 != (u32)rd16(r5 + 6u) || (u32)rd8(r5) == 2u)) {
            if (param_2 == 0u) {
                if (param_1 != r6) {
                    wr8(r5, 3u);
                } else {
                    wr8(r5, 6u);
                    wr16(r5 + 0xau, 0x100u);
                    a.r[0] = r9 + 1u;
                    a.r[1] = 0x11u;
                    a.r[2] = 1u;
                    a.r[3] = 6u;
                    a.r[4] = 0u - (((u32)rd16(r9 + 8u) >> 0xfu) & 1u) + 2u;
                    a.r[5] = 0x802a3c04u;
                    a.r[6] = r9;
                    f1 = tc_callf(0x8029b4c0u, &a);
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
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = param_1;
                a.r[1] = 0x8054095cu;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                f1 = tc_callf(0x802a5b64u, &a);
                if ((u32)rd8(0x80540a19u) < 4u) {
                    return;
                }
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x1e0003u;
                a.r[1] = 0x803953b0u;
                a.r[2] = param_1;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc6cu, &a);
                return;
            }
            if (param_1 != r6) {
                wr16(r5 + 6u, 0u);
            } else {
                wr16(r5 + 4u, 0u);
            }
            r28 = ((r30 & 0xffu) * 0x34u) - 0x7fabf9e8u;
            if ((u32)rd8(0x80540a19u) >= 4u) {
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                a.r[0] = 0x1e0003u;
                a.r[1] = 0x8039520cu;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = param_r8;
                a.r[6] = r9;
                a.r[7] = param_r10;
                f1 = tc_callf(0x8028cc54u, &a);
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
            if ((u32)rd16(r28 + 0x14u) != 0u || (u32)rd16(r28 + 0x16u) != 0u) {
                wr8(r28 + 0x10u, 5u);
                r3 = (u32)rd16(r28 + 0x16u);
                if (r3 != 0u) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = r3;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    f1 = tc_callf(0x802a5cecu, &a);
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
                r3 = (u32)rd16(r28 + 0x14u);
                if (r3 != 0u) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = r3;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    f1 = tc_callf(0x802a5cecu, &a);
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
            } else {
                wr8(r28 + 0x10u, 0u);
            }
            a.r[0] = r30 & 0xffu;
            a.r[1] = 1u;
            a.r[2] = param_2 | 0x100u;
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
            return;
        }
    }
    if ((u32)rd8(0x80540a19u) >= 2u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x1e0001u;
        a.r[1] = 0x80395384u;
        a.r[2] = param_1;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = param_r8;
        a.r[6] = r9;
        a.r[7] = param_r10;
        (void)tc_call(0x8028cc6cu, &a);
    }
    return;
}
