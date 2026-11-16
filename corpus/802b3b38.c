#include "tc_rt.h"

void fn_802b3b38(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r4, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r25 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
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
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    r27 = param_r4;
    r29 = 0u;
    if (param_r4 != 0u) {
        r27 = param_r4 + 6u;
        r5 = (u32)rd16(param_r3 + 0x24u);
        r25 = ((((u32)rd8(param_r4 + 4u) << 8u) & 0xffffff00u) + (u32)rd8(param_r4 + 5u)) & 0xffffu;
        if ((s32)(r5 + r25) > 1000) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = param_r3;
            a.r[1] = 4u;
            a.r[3] = param_r6;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            (void)tc_call(0x802b5264u, &a);
            return;
        }
        a.r[0] = param_r3 + r5 + 0x26u;
        a.r[1] = r27;
        a.r[2] = r25;
        f1 = tc_callf(0x80004338u, &a);
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
        r0 = (u32)rd16(param_r3 + 0x24u) + r25;
        wr16(param_r3 + 0x24u, (u16)r0);
        r27 = r27 + r25;
        r3 = (u32)rd8(r27);
        if (r3 != 0u) {
            if (r3 > 0x10u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = param_r3;
                a.r[1] = 5u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802b5264u, &a);
                return;
            }
            r29 = 1u;
        } else {
            r0 = r0 & 0xffffu;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = param_r3;
            a.r[1] = param_r3 + 0x26u;
            a.r[2] = param_r3 + r0 + 0x26u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x802b40b4u, &a);
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
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = param_r3;
                a.r[1] = 0xfff4u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802b5264u, &a);
                return;
            }
            r3 = (u32)rd16(param_r3 + 0x46eu);
            wr16(param_r3 + 0x24u, 0u);
            wr16(param_r3 + 0x46eu, (u16)(r3 + 1u));
        }
    }
    if ((u32)rd16(param_r3 + 0x46eu) < (u32)rd16(param_r3 + 0x46cu)) {
        a.r[0] = 2u;
        r3 = tc_call(0x8028a274u, &a);
        f1 = tc_lastf();
        r28 = r3;
        if (r3 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = param_r3;
            a.r[1] = 6u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802b5264u, &a);
            return;
        }
        wr16(r3 + 4u, 9u);
        r31 = r3 + 0x11u;
        wr8(r31, 4u);
        r3 = r31 + 3u;
        r30 = r3;
        r3 = r3 + 8u;
        wr8(r31 + 1u, (u8)((s32)rd16(param_r3 + 0x470u) >> 8));
        wr8(r31 + 2u, (u8)rd16(param_r3 + 0x470u));
        r0 = ((u32)rd16(param_r3 + 0x46eu) << 2u) & 0xfffffffcu;
        wr16(param_r3 + 0x470u, (u16)((u32)rd16(param_r3 + 0x470u) + 1u));
        r0 = rd32(param_r3 + r0 + 0x418u);
        r0 = (r0 >> 0x18u) & 0xffu;
        wr8(r31 + 5u, (u8)r0);
        wr8(r31 + 6u, (u8)((rd32(param_r3 + (((u32)rd16(param_r3 + 0x46eu) << 2u) & 0xfffffffcu) + 0x418u) >> 0x10u) & 0xffu));
        wr8(r31 + 7u, (u8)((rd32(param_r3 + (((u32)rd16(param_r3 + 0x46eu) << 2u) & 0xfffffffcu) + 0x418u) >> 8u) & 0xffu));
        wr8(r31 + 8u, (u8)rd32(param_r3 + (((u32)rd16(param_r3 + 0x46eu) << 2u) & 0xfffffffcu) + 0x418u));
        wr8(r31 + 9u, (u8)((s32)rd16(0x80545c4cu) >> 8));
        wr8(r31 + 0xau, (u8)rd16(0x80545c4cu));
        r4 = rd32(param_r3 + 0x410u);
        r5 = (u32)rd16(r4 + 0x4cu);
        if (r5 != 0u) {
            r4 = r4 + 0x4eu;
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            r3 = tc_call(0x802b6290u, &a);
            f1 = tc_lastf();
            r25 = r3;
        } else {
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = 0u;
            r3 = tc_call(0x802b6290u, &a);
            f1 = tc_lastf();
            r25 = r3;
        }
        if (r29 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            a.r[1] = r27;
            a.r[2] = (u32)rd8(r27) + 1u;
            f1 = tc_callf(0x80004338u, &a);
            r4 = (u32)rd8(r27) + r25 + 1u;
        } else {
            r4 = r3 + 1u;
            wr8(r3, 0u);
        }
        r5 = r4 - r30 - 2u;
        wr8(r30, (u8)((r5 >> 8u) & 0xffu));
        wr8(r30 + 1u, (u8)r5);
        wr16(r28 + 2u, (u16)(r4 - r31));
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)rd16(param_r3 + 0x22u);
        a.r[1] = r28;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802a5e34u, &a);
        a.r[0] = param_r3 + 8u;
        a.r[1] = 5u;
        a.r[2] = 0x1eu;
        (void)tc_call(0x8028d220u, &a);
    } else {
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        a.r[0] = param_r3;
        a.r[1] = 0u;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        (void)tc_call(0x802b5264u, &a);
    }
    return;
}
