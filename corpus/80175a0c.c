#include "tc_rt.h"

void fn_80175a0c(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    f30 = (f64)rdf32(0x80574f50u);
    f31 = (f64)rdf32(0x80574f54u);
    r29 = param_r3;
    r28 = 0u;
    do {
        r27 = 0u;
        if (r28 == 0u) {
            r27 = rd32(0x804863d8u);
        } else {
            if (r28 == 1u) {
                r27 = rd32(0x80571140u);
            }
        }
        if (r27 != 0u) {
            a.r[0] = r27;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r27) + 0x28u), &a);
            f1 = tc_lastf();
            r4 = rd32(r3);
            r0 = rd32(r3 + 4u);
            wr32(0x817fdfb4u, r4);
            wr32(0x817fdfb8u, r0);
            wr32(0x817fdfbcu, rd32(r3 + 8u));
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
            r0 = rd32(r3 + 4u);
            wr32(0x817fdfa8u, rd32(r3));
            wr32(0x817fdfacu, r0);
            wr32(0x817fdfb0u, rd32(r3 + 8u));
            a.r[0] = 0x817fdfa8u;
            a.r[1] = 0x817fdfb4u;
            a.r[2] = 0x817fdfa8u;
            (void)tc_call(0x802343a4u, &a);
            wrf32d(0x817fdfacu, f30);
            a.r[0] = 0x817fdfa8u;
            f1 = tc_callf(0x80234440u, &a);
            r4 = tc_lastr4();
            if (f1 > (f64)rdf32(param_r3 + 0x12cu)) {
                wr32(r29 + 0x140u, 0u);
            } else {
                r0 = rd32(r29 + 0x140u) - 1u;
                wr32(r29 + 0x140u, r0);
                if ((s32)r0 <= 0) {
                    wr32(r29 + 0x140u, rd32(param_r3 + 0x148u));
                    wrf32d(0x817fdfb8u, (f64)(f32)((f64)rdf32(0x817fdfb8u) + f31));
                    a.r[0] = param_r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(param_r3) + 0xbcu), &a);
                    f1 = tc_lastf();
                    a.r[0] = r27;
                    a.r[1] = r3;
                    a.r[2] = 0x817fdfb4u;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32(r27) + 0x74u), &a);
                    r4 = tc_lastr4();
                }
            }
        }
        r28 = r28 + 1u;
        r29 = r29 + 4u;
    } while ((s32)r28 < 2);
    return;
}
