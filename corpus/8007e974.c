#include "tc_rt.h"

void fn_8007e974(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    f1 = tc_lastf();
    r5 = rd32(r3);
    r4 = 0x80470000u;
    r0 = rd32(r3 + 4u);
    r30 = rd32(0x8046ad74u);
    wr32(0x817fdfdcu, r5);
    wr32(0x817fdfe0u, r0);
    wr32(0x817fdfe4u, rd32(r3 + 8u));
    while (r30 != 0u) {
        r3 = r30;
        r30 = rd32(r30);
        r29 = rd32(r3 + 8u);
        if ((u32)((s32)rd32(r29 + 0x9cu) >> 31) != 0u) {
            a.r[0] = r29;
            a.r[1] = r4;
            a.r[2] = r5;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r29) + 0x140u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r5 = 0u;
            if (r3 == 0u && rd32(param_1 + 0x2f4u) != 0u) {
                a.r[0] = r29;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r29) + 0x28u), &a);
                r0 = rd32(r3 + 4u);
                wr32(0x817fdfd0u, rd32(r3));
                wr32(0x817fdfd4u, r0);
                wr32(0x817fdfd8u, rd32(r3 + 8u));
                a.r[0] = 0x817fdfdcu;
                a.r[1] = 0x817fdfd0u;
                f1 = tc_callf(0x802344e8u, &a);
                r4 = tc_lastr4();
                r5 = 0u;
                f0 = (f64)rdf32(rd32(param_1 + 0x2f4u) + 8u);
                if ((f0 > f1) || (f0 == f1)) {
                    wr32(param_1 + 0x2bcu, 0u);
                    return;
                }
            }
        }
    }
    r30 = rd32(0x804863d8u);
    a.r[0] = r30;
    a.r[1] = r4;
    a.r[2] = r5;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r30) + 0x28u), &a);
    r0 = rd32(r3 + 4u);
    f1 = (f64)rdf32(0x8057286cu);
    wr32(0x817fdfc4u, rd32(r3));
    wr32(0x817fdfc8u, r0);
    wr32(0x817fdfccu, rd32(r3 + 8u));
    r0 = rd32(r30 + 0x7cu);
    wr32(0x817fdfb8u, rd32(r30 + 0x78u));
    wr32(0x817fdfbcu, r0);
    wr32(0x817fdfc0u, rd32(r30 + 0x80u));
    a.f[0] = f1;
    a.r[0] = 0x817fdfb8u;
    a.r[1] = 0x817fdfb8u;
    (void)tc_call(0x802343c8u, &a);
    a.r[0] = 0x817fdfc4u;
    a.r[1] = 0x817fdfb8u;
    a.r[2] = 0x817fdfc4u;
    f1 = tc_callf(0x80234380u, &a);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfc4u;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
    return;
}
