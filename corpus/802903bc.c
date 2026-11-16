#include "tc_rt.h"

void fn_802903bc(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r23 = 0, r24 = 0, r29 = 0, r30 = 0, r31 = 0;
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
    a.r[0] = 0x817fdfccu;
    r3 = tc_call(0x802965c8u, &a);
    f1 = tc_lastf();
    if ((r3 & 0xffu) == 0u && (u32)rd16(0x817fdfd2u) == 0xfu && (u32)rd8(0x817fdfccu) < 3u) {
        if (param_1 != 4u) {
            if (param_1 == 5u) {
                wr16(0x817fdfc8u, rd16(0x80348134u));
                a.r[0] = param_4;
                a.r[1] = 0x817fdfc8u;
                f1 = tc_callf(0x802939d8u, &a);
            }
        } else {
            wr16(0x817fdfc8u, (u16)((u32)rd16(0x80348134u) & 0xbu));
            a.r[0] = param_4;
            a.r[1] = 0x817fdfc8u;
            f1 = tc_callf(0x802939d8u, &a);
        }
    }
    r5 = rd32(0x80570de8u);
    r30 = 1u;
    r4 = (u32)rd8(r5 + 1u);
    while ((r30 & 0xffu) <= r4) {
        r0 = ((r30 << 2u) & 0x3fcu) - (r30 & 0xffu);
        r3 = r5 + r0;
        r0 = (u32)rd8(r5 + r0);
        if (param_2 == r0) {
            r0 = (u32)rd8(r3 + 1u);
            if (r0 == 0xffu || param_3 == r0) break;
        }
        r30 = r30 + 1u;
    }
    if ((r30 & 0xffu) <= (u32)rd8(r5 + 1u)) {
        r31 = 0u;
        do {
            r24 = ((r31 << 5u) & 0x1fe0u) - 0x7fac2a0cu;
            if ((u32)rd8(r24 + 0xb6u) != 0u) {
                a.r[0] = r24 + 0xb0u;
                a.r[1] = param_4;
                r3 = tc_call(0x8028d2d8u, &a);
                f1 = tc_lastf();
                r5 = 0u;
                if (r3 == 0u) {
                    a.r[0] = r24 + 0x98u;
                    f1 = tc_callf(0x8028d78cu, &a);
                    r5 = 0u;
                    wr8(r24 + 0xb6u, 0u);
                    break;
                }
            }
            r31 = r31 + 1u;
        } while (r31 < 3u);
        r30 = ((r30 << 2u) & 0x3fcu) - (r30 & 0xffu);
        r31 = (param_1 << 3u) & 0x7f8u;
        if ((u32)rd8(rd32(0x80570decu) + ((u32)rd8(rd32(0x80570de8u) + r30 + 2u) * 0x4au) + r31 + 2u) != 0u) {
            r29 = 0u;
            while ((r29 & 0xffu) < (u32)rd8(0x8053d6f8u)) {
                r3 = ((r29 << 3u) & 0x7f8u) + (r29 & 0xffu) - 0x7fac2908u;
                if (param_2 == (u32)rd8(r3 + 7u) && param_3 == (u32)rd8(r3 + 8u)) {
                    r3 = r3 + 1u;
                    a.r[0] = r3;
                    a.r[1] = param_4;
                    r3 = tc_call(0x8028d2d8u, &a);
                    f1 = tc_lastf();
                    r5 = 0u;
                    if (r3 == 0u) break;
                }
                r29 = r29 + 1u;
            }
            if ((u32)rd8(rd32(0x80570decu) + ((u32)rd8(rd32(0x80570de8u) + r30 + 2u) * 0x4au) + r31 + 2u) != 0x10u) {
                r4 = r29 & 0xffu;
                r0 = (u32)rd8(0x8053d6f8u);
                if (r4 == r0) {
                    if (r0 == 5u) {
                        if ((u32)rd8(0x80571b80u) < 2u) {
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
                        a.r[0] = 0x501u;
                        a.r[1] = 0x80392b18u;
                        a.r[2] = r5;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8028cc54u, &a);
                        return;
                    }
                    r5 = ((r29 << 3u) & 0x7f8u) + r4 - 0x7fac2908u;
                    wr8(r5 + 7u, (u8)param_2);
                    wr8(r5 + 8u, (u8)param_3);
                    a.r[0] = r5 + 1u;
                    a.r[1] = param_4;
                    f1 = tc_callf(0x8028d2a4u, &a);
                    wr8(0x8053d6f8u, (u8)((u32)rd8(0x8053d6f8u) + 1u));
                }
            } else if ((r29 & 0xffu) != (u32)rd8(0x8053d6f8u)) {
                for (;;) {
                    r3 = (u32)rd8(0x8053d6f8u);
                    if ((r29 & 0xffu) >= r3) break;
                    r6 = r29 & 0xffu;
                    r3 = r6 + 1u;
                    a.r[0] = ((r29 << 3u) & 0x7f8u) + r6 - 0x7fac2907u;
                    a.r[1] = ((r3 << 3u) & 0xfffffff8u) + r3 - 0x7fac2907u;
                    a.r[2] = 9u;
                    f1 = tc_callf(0x80004338u, &a);
                    r29 = r29 + 1u;
                }
                wr8(0x8053d6f8u, (u8)(r3 - 1u));
            }
            r24 = 0u;
            while ((r24 & 0xffu) < (u32)rd8(0x8053d641u)) {
                r23 = (r24 & 0xffu) * 0xbu;
                a.r[0] = r23 - 0x7fac2a0cu;
                a.r[1] = param_4;
                r3 = tc_call(0x8028d2d8u, &a);
                f1 = tc_lastf();
                if (r3 == 0u) {
                    r3 = r23 - 0x7fac2a0cu;
                    wr8(r3 + 9u, 0u);
                    wr8(r3 + 0xau, 0u);
                    break;
                }
                r24 = r24 + 1u;
            }
            wr8(((r29 << 3u) & 0x7f8u) + (r29 & 0xffu) - 0x7fac28ffu, (u8)param_1);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = param_4;
            a.r[1] = 0u;
            a.r[3] = 0x8053d6f8u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8029073cu, &a);
        }
    }
    return;
}
