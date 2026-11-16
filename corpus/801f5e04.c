#include "tc_rt.h"

void fn_801f5e04(u32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r8 = 0, r9 = 0, r10 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r31 = 0;
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
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = rd32(param_1);
    r8 = rd32(param_1 + 0x10u);
    r9 = rd32(param_1 + 0xcu);
    r5 = rd32(0x8033c2f4u);
    r4 = rd32(0x8033c2f8u);
    r3 = rd32(0x8033c2fcu);
    wr32(0x817fdfc8u, rd32(0x8033c2f0u));
    wr32(0x817fdfccu, r5);
    wr32(0x817fdfd0u, r4);
    wr32(0x817fdfd4u, r3);
    if ((s32)(r8 + r31) >= (s32)r9) {
        r31 = r9 - r8;
    }
    r26 = 0u;
    while ((s32)r26 < (s32)r31) {
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        a.r[0] = 0x804de14cu;
        a.r[1] = r26 + rd32(param_1 + 0x10u);
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        r3 = tc_call(0x801f35a4u, &a);
        f1 = tc_lastf();
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
        r4 = rd32(r3);
        if (r4 != 4u && r4 != 1u) {
            r5 = rd32(r3 + 8u);
            r24 = 0u;
            r25 = rd32(((r4 << 2u) & 0xfffffffcu) - 0x7e802038u) + ((((0u - r5) | r5) >> 0x1fu) & 1u);
            if (r4 == 2u && r5 != 0u) {
                r3 = rd32(r3 + 0x10u);
                a.r[0] = r3;
                r3 = tc_call(0x8013f6bcu, &a);
                r24 = 2u;
                if (r3 != 0u) {
                    r24 = 1u;
                }
            }
            r27 = rd32(0x80571298u);
            a.r[0] = param_1;
            a.r[1] = r26;
            r3 = tc_call(0x801894d8u, &a);
            a.r[0] = r27;
            a.r[1] = r3;
            a.r[2] = r25;
            a.r[3] = r24;
            f1 = tc_callf(0x801f2e78u, &a);
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
        r26 = r26 + 1u;
    }
    return;
}
