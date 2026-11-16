#include "tc_rt.h"

void fn_802b3de0(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r4, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r26 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0, r31 = 0;
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
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r28 = param_r4;
    r29 = 0u;
    if (param_r4 != 0u) {
        r28 = param_r4 + 6u;
        r5 = (u32)rd16(param_r3 + 0x24u);
        r26 = ((((u32)rd8(param_r4 + 4u) << 8u) & 0xffffff00u) + (u32)rd8(param_r4 + 5u)) & 0xffffu;
        if ((s32)(r5 + r26) > 1000) {
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
        a.r[1] = r28;
        a.r[2] = r26;
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
        wr16(param_r3 + 0x24u, (u16)((u32)rd16(param_r3 + 0x24u) + r26));
        r28 = r28 + r26;
        r0 = (u32)rd8(r28);
        if (r0 != 0u) {
            if (r0 > 0x10u) {
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
        }
    }
    if (r29 != 0u || r28 == 0u) {
        a.r[0] = 2u;
        r3 = tc_call(0x8028a274u, &a);
        f1 = tc_lastf();
        r30 = r3;
        if (r3 != 0u) {
            r31 = r3 + 0x11u;
            wr16(r3 + 4u, 9u);
            r29 = r31 + 3u;
            wr8(r3 + 0x11u, 6u);
            wr8(r31 + 1u, (u8)((s32)rd16(param_r3 + 0x470u) >> 8));
            wr8(r31 + 2u, (u8)rd16(param_r3 + 0x470u));
            r6 = rd32(param_r3 + 0x410u);
            wr16(param_r3 + 0x470u, (u16)((u32)rd16(param_r3 + 0x470u) + 1u));
            a.r[0] = r29 + 2u;
            a.r[1] = (u32)rd16(r6 + 0xcu);
            a.r[2] = r6 + 0x10u;
            r3 = tc_call(0x802b3660u, &a);
            r6 = r3 + 2u;
            wr8(r3, (u8)((s32)rd16(0x80545c4cu) >> 8));
            wr8(r3 + 1u, (u8)rd16(0x80545c4cu));
            r4 = rd32(param_r3 + 0x410u);
            r5 = (u32)rd16(r4 + 0x4cu);
            if (r5 == 0u) {
                a.r[0] = r6;
                a.r[1] = 0u;
                a.r[2] = 0u;
                r3 = tc_call(0x802b6290u, &a);
                f1 = tc_lastf();
                r26 = r3;
            } else {
                r4 = r4 + 0x4eu;
                a.r[0] = r6;
                a.r[1] = r4;
                a.r[2] = r5;
                r3 = tc_call(0x802b6290u, &a);
                f1 = tc_lastf();
                r26 = r3;
            }
            if (r28 == 0u) {
                r4 = r3 + 1u;
                wr8(r3, 0u);
            } else {
                r3 = r3;
                a.r[0] = r3;
                a.r[1] = r28;
                a.r[2] = (u32)rd8(r28) + 1u;
                f1 = tc_callf(0x80004338u, &a);
                r4 = (u32)rd8(r28) + r26 + 1u;
            }
            r5 = r4 - r29 - 2u;
            wr8(r29, (u8)((r5 >> 8u) & 0xffu));
            wr8(r29 + 1u, (u8)r5);
            wr16(r30 + 2u, (u16)(r4 - r31));
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)rd16(param_r3 + 0x22u);
            a.r[1] = r30;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802a5e34u, &a);
            a.r[0] = param_r3 + 8u;
            a.r[1] = 5u;
            a.r[2] = 0x1eu;
            (void)tc_call(0x8028d220u, &a);
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
    r5 = (u32)rd8(param_r3 + 0x26u);
    r3 = param_r3 + 0x27u;
    if ((u32)((s32)r5 >> 3) == 6u) {
        a.r[0] = r3;
        a.r[1] = r5;
        a.r[2] = 0x817fdfd8u;
        r3 = tc_call(0x802b6c90u, &a);
        f1 = tc_lastf();
        r26 = param_r3 + (u32)rd16(param_r3 + 0x24u) + 0x26u;
        if ((r3 + rd32(0x817fdfd8u)) == r26) {
            do {
                if (r3 >= r26) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = param_r3;
                    a.r[1] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802b5264u, &a);
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
                a.r[0] = param_r3;
                a.r[1] = r3;
                a.r[2] = param_r3 + (u32)rd16(param_r3 + 0x24u) + 0x26u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x802b40b4u, &a);
                f1 = tc_lastf();
            } while (r3 != 0u);
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
    if ((u32)rd8(0x80545c50u) < 2u) {
        return;
    }
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = f5;
    a.f[5] = f6;
    a.f[6] = f7;
    a.f[7] = f8;
    a.r[0] = 0xa0001u;
    a.r[1] = 0x80397a08u;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    (void)tc_call(0x8028cc6cu, &a);
    return;
}
