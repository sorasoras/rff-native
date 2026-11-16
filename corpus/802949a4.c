#include "tc_rt.h"

void fn_802949a4(u32 param_1)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r29 = 0x8053d98cu;
    wr32(0x817fdff0u, 0u);
    r30 = rd32(0x8053df38u);
    a.r[0] = 0x8053df20u;
    f1 = tc_callf(0x8028d290u, &a);
    r4 = tc_lastr4();
    r5 = 0u;
    wr32(0x8053df38u, 0u);
    if (r30 != 0u) {
        r6 = (u32)rd8(param_1);
        wr8(0x817fdfd9u, (u8)r6);
        if (r6 != 0u) {
            wr8(0x817fdfd8u, 0xau);
        } else {
            wr8(0x817fdfd8u, 0u);
            r4 = (u32)rd8(param_1 + 1u);
            c0lt = (u32)rd8(0x80540118u) < 4u;
            r5 = (u32)rd8(param_1 + 3u);
            r0 = r4 + (((u32)rd8(param_1 + 2u) << 8u) & 0xffffff00u);
            wr8(0x817fdfdau, (u8)r5);
            r31 = r0 & 0xffffu;
            if (!c0lt) {
                r5 = (u32)(s8)r5;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xd0003u;
                a.r[1] = 0x8039394cu;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x8028cc84u, &a);
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
            }
            r3 = 0u;
            ctr = 4u;
            do {
                if ((u32)rd8(r29 + 0x119u) != 0u && r31 == (u32)rd16(r29)) {
                    a.r[0] = 0x817fdfdbu;
                    a.r[1] = r29 + 8u;
                    a.r[2] = 6u;
                    f1 = tc_callf(0x80004338u, &a);
                    r4 = tc_lastr4();
                    r5 = 0u;
                    r6 = 0u;
                    break;
                }
                r3 = r3 + 1u;
                r29 = r29 + 0x11cu;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
        a.r[0] = 0x817fdfd8u;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.f[0] = f1;
        (void)tc_call(r30, &a);
    }
    return;
}
