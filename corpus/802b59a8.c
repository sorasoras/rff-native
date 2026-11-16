#include "tc_rt.h"

void fn_802b59a8(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r8 = 0, r9 = 0, r10 = 0, r24 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    u32 r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r10 = ((u32)rd8(param_4) << 0x18u) & 0xff000000u;
    r9 = (u32)rd8(param_4 + 3u);
    r8 = r10 + (((u32)rd8(param_4 + 1u) << 0x10u) & 0xffff0000u);
    r27 = r8 + (r9 + (((u32)rd8(param_4 + 2u) << 8u) & 0xffffff00u));
    if ((param_4 + 4u) <= param_5) {
        r30 = ((((u32)rd8(param_4 + 4u) << 8u) & 0xffffff00u) + (u32)rd8(param_4 + 5u)) & 0xffffu;
        r0 = (u32)rd16(param_1 + 0x20u) - 0xau;
        if ((s32)r30 > (s32)r0) {
            r30 = r0 & 0xffffu;
        }
        a.r[0] = param_4 + 6u;
        a.r[1] = param_3;
        a.r[2] = 0x817fdf98u;
        r3 = tc_call(0x802b6a40u, &a);
        f1 = tc_lastf();
        r28 = r3;
        if (r3 == 0u || (u32)rd16(0x817fdf98u) == 0u || r3 > param_5) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = 3u;
            a.r[3] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802b65b4u, &a);
        } else {
            a.r[0] = r27;
            r3 = tc_call(0x802b2ba8u, &a);
            f1 = tc_lastf();
            r27 = r3;
            if (r3 != 0u) {
                r0 = (u32)rd8(r28);
                if (r0 == 0u) {
                    r29 = param_1 + 0x29u;
                    wr16(param_1 + 0x476u, 0u);
                    r28 = 0u;
                    while ((r28 & 0xffffu) < (u32)rd16(0x817fdf98u)) {
                        r31 = ((r28 << 2u) & 0x3fffcu) - 0x7e802068u;
                        a.r[0] = r27;
                        a.r[1] = (u32)rd16(r31 + 2u);
                        a.r[2] = (u32)rd16(r31 + 4u);
                        r3 = tc_call(0x802b2c04u, &a);
                        r24 = r3;
                        if (r3 != 0u) {
                            if (rd32(r3) > (((0x3e8u - ((r29 - (param_1 + 0x26u)) & 0xffffu)) & 0xffffu) - 6u)) break;
                            a.r[0] = r29;
                            a.r[1] = r24;
                            r3 = tc_call(0x802b6460u, &a);
                            r29 = r3;
                            if ((u32)rd16(r31 + 2u) != (u32)rd16(r31 + 4u)) {
                                r28 = r28 - 1u;
                                wr16(r31 + 2u, (u16)((u32)rd16(r24 + 8u) + 1u));
                            }
                        }
                        r28 = r28 + 1u;
                    }
                    r0 = r29 - (param_1 + 0x26u);
                    r4 = r0 & 0xffffu;
                    wr16(param_1 + 0x24u, (u16)r0);
                    if (r4 <= 0xffu) {
                        wr16(param_1 + 0x476u, 1u);
                        wr8(param_1 + 0x27u, 0x35u);
                        wr8(param_1 + 0x28u, (u8)(r4 - 3u));
                        wr16(param_1 + 0x24u, (u16)(r4 - 1u));
                    } else {
                        r3 = r4 - 3u;
                        wr8(param_1 + 0x26u, 0x36u);
                        wr8(param_1 + 0x27u, (u8)((s32)r3 >> 8));
                        wr8(param_1 + 0x28u, (u8)r3);
                    }
                } else {
                    if (r0 != 2u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = param_1;
                        a.r[1] = param_2;
                        a.r[2] = 5u;
                        a.r[3] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x802b65b4u, &a);
                        return;
                    }
                    if ((((((u32)rd8(r28 + 1u) << 8u) & 0xffffff00u) + (u32)rd8(r28 + 2u)) & 0xffffu) != (u32)rd16(param_1 + 0x476u)) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = param_1;
                        a.r[1] = param_2;
                        a.r[2] = 5u;
                        a.r[3] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x802b65b4u, &a);
                        return;
                    }
                }
                a.r[0] = 2u;
                r3 = tc_call(0x8028a274u, &a);
                f1 = tc_lastf();
                r27 = r3;
                if (r3 != 0u) {
                    r29 = r3 + 0x11u;
                    wr16(r3 + 4u, 9u);
                    r31 = r29 + 3u;
                    wr8(r29, 5u);
                    r28 = r31;
                    wr8(r29 + 1u, (u8)((param_2 >> 8u) & 0xffu));
                    wr8(r29 + 2u, (u8)param_2);
                    r0 = (u32)rd16(param_1 + 0x24u);
                    if (r0 <= r30) {
                        r30 = r0;
                    }
                    wr8(r31 + 2u, (u8)((r30 >> 8u) & 0xffu));
                    wr8(r31 + 3u, (u8)r30);
                    r31 = r31 + 4u;
                    a.r[0] = r31;
                    a.r[1] = param_1 + (u32)rd16(param_1 + 0x476u) + 0x26u;
                    a.r[2] = r30 & 0xffffu;
                    f1 = tc_callf(0x80004338u, &a);
                    r31 = r31 + (r30 & 0xffffu);
                    r4 = (u32)rd16(param_1 + 0x476u);
                    r3 = (u32)rd16(param_1 + 0x24u) - r30;
                    wr16(param_1 + 0x24u, (u16)r3);
                    wr16(param_1 + 0x476u, (u16)(r4 + r30));
                    if ((r3 & 0xffffu) == 0u) {
                        wr8(r31, 0u);
                        r31 = r31 + 1u;
                    } else {
                        wr8(r31, 2u);
                        wr8(r31 + 1u, (u8)((s32)rd16(param_1 + 0x476u) >> 8));
                        wr8(r31 + 2u, (u8)rd16(param_1 + 0x476u));
                        r31 = r31 + 3u;
                    }
                    r5 = r31 - r28 - 2u;
                    wr8(r28, (u8)((r5 >> 8u) & 0xffu));
                    wr8(r28 + 1u, (u8)r5);
                    wr16(r27 + 2u, (u16)(r31 - r29));
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = (u32)rd16(param_1 + 0x22u);
                    a.r[1] = r27;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802a5e34u, &a);
                } else if ((u32)rd8(0x80545c50u) >= 1u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0xa0000u;
                    a.r[1] = 0x80397e9cu;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc54u, &a);
                }
            } else {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = 2u;
                a.r[3] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802b65b4u, &a);
            }
        }
    } else {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = 2u;
        a.r[3] = 0u;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        (void)tc_call(0x802b65b4u, &a);
    }
    return;
}
