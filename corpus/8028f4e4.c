#include "tc_rt.h"

void fn_8028f4e4(s32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r5 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fded0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = (u32)param_1 + 0xbu;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if ((u32)rd8((u32)param_1 + 0xau) == 0u) {
        r29 = 0u;
        while ((r29 & 0xffu) < (u32)rd8(0x8053d641u)) {
            a.r[0] = ((r29 & 0xffu) * 0xbu) - 0x7fac2a0cu;
            a.r[1] = r31;
            r3 = tc_call(0x8028d2d8u, &a);
            if (r3 == 0u) {
                while ((r29 & 0xffu) < (u32)rd8(0x8053d641u)) {
                    r3 = r29 & 0xffu;
                    r0 = r3 + 1u;
                    r3 = r3 * 0xbu;
                    r0 = r0 * 0xbu;
                    r3 = r3 - 0x7fac2a0cu;
                    a.r[0] = r3;
                    a.r[1] = r0 - 0x7fac2a0cu;
                    a.r[2] = 0xbu;
                    (void)tc_call(0x80004338u, &a);
                    r29 = r29 + 1u;
                }
                break;
            }
            r29 = r29 + 1u;
        }
        c0eq = (u32)rd8(0x8053d5f0u) == 0u;
        wr8(0x8053d641u, (u8)((u32)rd8(0x8053d641u) - 1u));
        if (!c0eq) {
            a.r[0] = 0x8053d592u;
            a.r[1] = r31;
            r3 = tc_call(0x8028d2d8u, &a);
            f1 = tc_lastf();
            if (r3 == 0u) {
                r0 = (u32)rd8(0x8053d5f1u);
                wr8(0x8053d5f0u, 0u);
                if (r0 != 0u) {
                    if ((u32)rd8(0x80571b80u) >= 4u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x503u;
                        a.r[1] = 0x80392a58u;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8028cc54u, &a);
                    }
                    a.r[0] = 0x8053d5b8u;
                    (void)tc_call(0x8028d78cu, &a);
                    (void)tc_call(0x8028ebe0u, &a);
                }
            }
        }
        if ((u32)rd8(0x8053d666u) != 0u) {
            r3 = tc_call(0x8029407cu, &a);
            if ((r3 & 0xffffu) == 0u) {
                wr8(0x8053d666u, 0u);
                a.r[0] = 0x8053d668u;
                (void)tc_call(0x8028d78cu, &a);
                wr32(0x8053d670u, 0x8028f764u);
                a.r[0] = 0x8053d668u;
                a.r[1] = 0u;
                a.r[2] = 0x3e8u;
                (void)tc_call(0x8028d76cu, &a);
            }
        }
        a.r[0] = 0x817fded8u;
        a.r[1] = r31;
        (void)tc_call(0x8028d2a4u, &a);
        r3 = tc_call(0x802940d8u, &a);
        f1 = tc_lastf();
        wr8(0x817fdedeu, (u8)r3);
        a.r[0] = 6u;
        a.r[1] = 0x817fded8u;
        a.r[2] = 0x8053d5f4u;
        a.f[0] = f1;
        (void)tc_call(rd32(0x8053d644u), &a);
    } else {
        r29 = 0u;
        while ((r29 & 0xffu) < (u32)rd8(0x8053d641u)) {
            a.r[0] = ((r29 & 0xffu) * 0xbu) - 0x7fac2a0cu;
            a.r[1] = r31;
            r3 = tc_call(0x8028d2d8u, &a);
            if (r3 == 0u) break;
            r29 = r29 + 1u;
        }
        r3 = (u32)rd8(0x8053d641u);
        if ((r29 & 0xffu) == r3) {
            r3 = (r3 * 0xbu) - 0x7fac2a0cu;
            a.r[0] = r3;
            a.r[1] = r31;
            (void)tc_call(0x8028d2a4u, &a);
            wr8(0x8053d641u, (u8)((u32)rd8(0x8053d641u) + 1u));
        }
        r5 = ((r29 & 0xffu) * 0xbu) - 0x7fac2a0cu;
        wr8(r5 + 6u, 1u);
        wr8(r5 + 7u, 0u);
        a.r[0] = 0x817fded8u;
        a.r[1] = r31;
        f1 = tc_callf(0x8028d2a4u, &a);
        a.r[0] = 5u;
        a.r[1] = 0x817fded8u;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(0x8053d644u), &a);
    }
    return;
}
