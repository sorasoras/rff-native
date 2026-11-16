#include "tc_rt.h"

void fn_800a7c60(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800a4500u, &a);
    r26 = r3;
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    f1 = tc_callf(0x800a7bb8u, &a);
    r4 = tc_lastr4();
    if (r26 != 0u) {
        a.r[0] = r26;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r26) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfdcu, rd32(r3));
        wr32(0x817fdfe0u, r0);
        wr32(0x817fdfe4u, rd32(r3 + 8u));
        r29 = (u32)rd8(r26 + 0x205u);
        if ((u32)param_2 != 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800a7c1cu, &a);
        } else {
            r3 = 0u;
        }
        if (r29 != r3) {
            if ((u32)param_1 != 0u) {
                a.r[0] = (u32)param_1;
                (void)tc_call(0x800a4580u, &a);
                a.r[0] = (u32)param_1;
                a.r[1] = 0x817fdfdcu;
                (void)tc_call(0x800a4340u, &a);
            } else {
                r3 = rd32(0x804863d8u);
                r31 = rd32(r3 + 0xa60u);
                wr32(r3 + 0xa60u, 0u);
                r3 = rd32(0x804863d8u);
                r28 = rd32(r3 + 0x88cu);
                wr32(r3 + 0x88cu, 0u);
                r3 = rd32(0x804863d8u);
                r7 = (u32)rd8(0x80499217u);
                r5 = (u32)rd16(0x80499214u);
                r0 = (rd32(r3 + 0x9cu) << 1u) & 0xc0000000u;
                wr8(0x817fdfdau, rd8(0x80499216u));
                r27 = (u32)((s32)r0 >> 31);
                r26 = (u32)rd16(0x8049908au);
                wr16(0x817fdfd8u, (u16)r5);
                wr8(0x817fdfdbu, (u8)r7);
                a.r[0] = r3;
                f1 = tc_callf(0x80065254u, &a);
                r3 = rd32(0x804863d8u);
                a.r[0] = r3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 0x18u), &a);
                if ((u32)param_2 == 0u) {
                    r4 = 0u;
                } else {
                    r4 = 1u;
                }
                r3 = rd32(0x804863d8u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0x817fdfdcu;
                a.r[3] = 0x804890c8u;
                a.r[4] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3) + 0x48u), &a);
                wr32(rd32(0x804863d8u) + 0xa60u, r31);
                wr32(rd32(0x804863d8u) + 0x88cu, r28);
                if (r26 >= 0xffffu) {
                    r26 = 0xffffu;
                }
                r3 = rd32(0x804863d8u);
                wr16(0x8049908au, (u16)r26);
                wr32(r3 + 0x9cu, (rd32(r3 + 0x9cu) & 0xbfffffffu) | ((r27 << 0x1eu) & 0x40000000u));
                if ((u32)rd16(0x817fdfd8u) != 0x2e8u) {
                    r26 = 1u;
                    if ((rd32(0x80499094u) & 0x40u) == 0u) {
                        a.r[0] = 0x8049e140u;
                        a.r[1] = 0x40u;
                        r3 = tc_call(0x801a8f18u, &a);
                        if (r3 == 0u) {
                            r26 = 0u;
                        }
                    }
                    if (r26 != 0u) {
                        a.r[0] = 0x817fdfd8u;
                        (void)tc_call(0x8008178cu, &a);
                        r3 = (u32)rd8(0x817fdfdau);
                        r0 = (u32)rd8(0x817fdfdbu);
                        wr16(0x80499214u, rd16(0x817fdfd8u));
                        wr8(0x80499216u, (u8)r3);
                        wr8(0x80499217u, (u8)r0);
                    }
                }
                r3 = rd32(rd32(0x804863d8u) + 0xa48u);
                if (r3 != 0u) {
                    wr32(r3 + 0x7cu, r31);
                }
            }
        }
    }
    return;
}
