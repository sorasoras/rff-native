#include "tc_rt.h"

void fn_80198118(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0xc4u), &a);
    r31 = r3;
    if (r3 != 0xffffffffu) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = r3;
        a.r[2] = param_3;
        f1 = tc_callf(0x8010a794u, &a);
        r4 = tc_lastr4();
        if ((s32)r31 >= 1000 && (s32)r31 <= 1039) {
            r3 = (r31 >> 0x1fu) & 1u;
            r0 = ((r31 << 0x1eu) & 0xc0000000u) - r3;
            r0 = (r0 << 2u) | (r0 >> 0x1eu);
            r3 = r0 + r3;
            if ((r3 - 2u) <= 1u) {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                f0 = (f64)rdf32(0x80575630u);
                wrf32d(0x817fdfe4u, f1);
                wrf32d(0x817fdfe0u, f0);
                wrf32d(0x817fdfe8u, f0);
                a.r[0] = param_1;
                a.r[1] = 0x18u;
                a.r[2] = param_3;
                a.r[3] = 0x817fdfe0u;
                (void)tc_call(0x8019fc4cu, &a);
            }
            r5 = (u32)rd8(param_1 + 0x142u);
            r3 = 1u;
            r4 = 1u;
            r0 = (u32)(s8)r5;
            if (r0 != 0xau && r0 != 0xbu) {
                r4 = 0u;
            }
            if (r4 == 0u && (u32)(s8)r5 != 9u) {
                r3 = 0u;
            }
            r28 = 0xffffffffu;
            if (r3 != 0u) {
                r28 = 0x47u;
            }
            if (r28 != 0xffffffffu) {
                f3 = (f64)rdf32(0x80575630u);
                f2 = (f64)rdf32(0x804890c8u);
                wrf32d(0x817fdfd0u, f3);
                f0 = (f64)rdf32(0x804890d0u);
                wrf32d(0x817fdfccu, f3);
                f1 = (f64)rdf32(0x804890ccu);
                wrf32d(0x817fdfdcu, f3);
                wrf32d(0x817fdfd8u, f3);
                wrf32d(0x817fdfd4u, f3);
                wrf32d(0x817fdfc8u, f2);
                wrf32d(0x817fdfccu, f1);
                wrf32d(0x817fdfd0u, f0);
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                r3 = (r31 >> 0x1fu) & 1u;
                wrf32d(0x817fdfccu, f1);
                if ((((r31 & 1u) ^ r3) - r3) == 0u) {
                    a.r[0] = param_1;
                    a.r[1] = 0x817fdfd4u;
                    a.r[2] = 7u;
                    a.r[3] = 0x804890c8u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    (void)tc_call(rd32(rd32(param_1) + 0x34u), &a);
                } else {
                    a.r[0] = param_1;
                    a.r[1] = 0x817fdfd4u;
                    a.r[2] = 8u;
                    a.r[3] = 0x804890c8u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    (void)tc_call(rd32(rd32(param_1) + 0x34u), &a);
                }
                a.r[0] = param_1;
                a.r[1] = r28;
                a.r[2] = 0x817fdfd4u;
                a.r[3] = 0x817fdfc8u;
                (void)tc_call(0x8019fc4cu, &a);
            }
        }
    }
    return;
}
