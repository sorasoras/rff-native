#include "tc_rt.h"

u32 fn_800a0720(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r7 = 0, r23 = 0, r24 = 0, r25 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = 0u;
    r7 = rd32(param_4);
    wr32(0x817fdfd4u, r7);
    r31 = r7 + 1u;
    r0 = (u32)rd8(r7);
    r24 = (r0 >> 2u) & 3u;
    wr32(0x817fdfd4u, r31);
    r25 = r0 & 3u;
    wr32(0x817fdfd0u, r31);
    a.r[0] = 0x817fdfd0u;
    a.r[1] = r24;
    r3 = tc_call(0x8009f9a8u, &a);
    if ((u32)(s8)r3 != 0u) {
        wr32(0x817fdfd4u, rd32(0x817fdfd0u));
        a.r[0] = 0x817fdfd4u;
        a.r[1] = r25;
        r3 = tc_call(0x8009f9a8u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if ((u32)(s8)r3 != 0u) {
            c0lt = (s32)r24 < 3;
            if (r24 == 3u) {
                r23 = (u32)rd8(r31);
                if ((r23 & 0x80u) == 0u) {
                    r24 = 0u;
                    wr8(0x817fdfc8u, 1u);
                } else {
                    r24 = 1u;
                    wr8(0x817fdfc8u, 0xffu);
                }
                r0 = ((r23 >> 5u) & 3u) + 1u;
                c0lt = (s32)r0 < 3;
                if (r0 == 3u) {
                    a.r[0] = r31 + 1u;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(param_3 + 4u), &a);
                    r31 = r3;
                } else if (!c0lt) {
                    if ((s32)r0 >= 5) {
                        r31 = (u32)rd8(r31 + 1u);
                    } else {
                        a.r[0] = r31 + 1u;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(rd32(param_3 + 8u), &a);
                        r31 = r3;
                    }
                } else {
                    c0lt = (s32)r0 < 1;
                    if (r0 == 1u) {
                        r31 = (u32)rd8(r31 + 1u);
                    } else if (!c0lt) {
                        a.r[0] = r31 + 1u;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(rd32(param_3), &a);
                        r31 = r3 & 0xffffu;
                    } else {
                        r31 = (u32)rd8(r31 + 1u);
                    }
                }
                r23 = (r23 & 0x1fu) + 1u;
            } else if (c0lt && (s32)r24 >= 2) {
                wr8(0x817fdfc8u, 0xffu);
                r24 = 1u;
                a.r[0] = r31;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(param_3), &a);
                r31 = r3 & 0xffffu;
                r23 = 0u;
            }
            a.r[0] = 0x817fdfccu;
            a.r[1] = 0x817fdfc8u;
            a.r[2] = param_2;
            a.r[3] = param_3;
            a.r[4] = rd32(0x817fdfd0u);
            a.r[5] = r25;
            a.r[6] = 0u;
            r3 = tc_call(0x8009fa14u, &a);
            if ((u32)(s8)r3 != 0u) {
                r30 = 1u;
                wr8(param_1, rd8(0x817fdfc8u));
                wr8(param_1 + 1u, (u8)r24);
                wr32(param_1 + 4u, r31);
                wr32(param_1 + 8u, r23);
                wr32(param_1 + 0xcu, rd32(0x817fdfccu));
            }
        }
    }
    wr32(param_4, rd32(0x817fdfd4u));
    return r30;
}
