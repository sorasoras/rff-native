#include "tc_rt.h"

void fn_80293bd8(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r29 = 0x8053d98cu;
    wr32(0x817fdff0u, 0u);
    r30 = rd32(0x8053df1cu);
    a.r[0] = 0x8053df04u;
    f1 = tc_callf(0x8028d290u, &a);
    r4 = tc_lastr4();
    r5 = 0u;
    r6 = 0u;
    r7 = 0u;
    wr32(0x8053df1cu, 0u);
    if (r30 != 0u) {
        r0 = (u32)rd8(param_1);
        wr8(0x817fdfd9u, (u8)r0);
        if (r0 != 0u) {
            wr8(0x817fdfd8u, 0xau);
        } else {
            wr8(0x817fdfd8u, 0u);
            r7 = 0u;
            r6 = (u32)rd8(param_1 + 1u);
            r4 = (u32)rd8(param_1 + 3u);
            r5 = r6 + (((u32)rd8(param_1 + 2u) << 8u) & 0xffffff00u);
            wr16(0x817fdfe0u, (u16)(r4 + (((u32)rd8(param_1 + 4u) << 8u) & 0xffffff00u)));
            r3 = r5 & 0xffffu;
            ctr = 4u;
            do {
                if ((u32)rd8(r29 + 0x119u) != 0u && r3 == (u32)rd16(r29)) {
                    a.r[0] = 0x817fdfdau;
                    a.r[1] = r29 + 8u;
                    a.r[2] = 6u;
                    f1 = tc_callf(0x80004338u, &a);
                    r4 = tc_lastr4();
                    r5 = 0u;
                    r6 = 0u;
                    r7 = 0u;
                    break;
                }
                r7 = r7 + 1u;
                r29 = r29 + 0x11cu;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
        a.r[0] = 0x817fdfd8u;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.f[0] = f1;
        (void)tc_call(r30, &a);
    }
    return;
}
