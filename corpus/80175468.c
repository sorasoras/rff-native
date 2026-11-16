#include "tc_rt.h"

void fn_80175468(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    a.r[0] = param_r3;
    f1 = tc_callf(0x801751f4u, &a);
    r4 = tc_lastr4();
    r0 = rd32(param_r3 + 0x174u) - 1u;
    wr32(param_r3 + 0x174u, r0);
    if (r0 == 0u) {
        (void)tc_call(0x80040a00u, &a);
        f1 = tc_callf(0x80040a00u, &a);
        a.r[0] = param_r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfc4u, rd32(r3));
        wr32(0x817fdfc8u, r0);
        wr32(0x817fdfccu, rd32(r3 + 8u));
        if (rd32(((rd32(param_r3 + 0x15cu) << 2u) & 0xfffffffcu) - 0x7fca9e94u) == 0u) {
            a.f[0] = (f64)rdf32(0x80574f0cu);
            a.r[0] = 0x1cu;
            a.r[1] = 0x817fdfc4u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d783cu, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
        } else {
            a.f[0] = (f64)rdf32(0x80574f0cu);
            a.r[0] = 0x1cu;
            a.r[1] = 0x817fdfc4u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d7768u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
        }
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0x3cu;
            f1 = tc_callf(0x80157f70u, &a);
            r4 = tc_lastr4();
        }
        wr32(param_r3 + 0x174u, 0x46u);
    }
    f31 = (f64)rdf32(0x80574f38u);
    r28 = param_r3;
    r27 = 0u;
    do {
        r26 = 0u;
        if (r27 != 0u) {
            if (r27 == 1u) {
                r26 = rd32(0x80571140u);
            }
        } else {
            r26 = rd32(0x804863d8u);
        }
        if (r26 != 0u) {
            a.r[0] = r26;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r26) + 0x28u), &a);
            r0 = rd32(r3 + 4u);
            wr32(0x817fdfb8u, rd32(r3));
            wr32(0x817fdfbcu, r0);
            wr32(0x817fdfc0u, rd32(r3 + 8u));
            a.f[0] = (f64)rdf32(r26 + 0xb0u);
            a.r[0] = param_r3 + 0x26cu;
            a.r[1] = 0x817fdfb8u;
            r3 = tc_call(0x80093428u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 == 0u) {
                wr32(r28 + 0x178u, 0u);
            } else {
                r0 = rd32(r28 + 0x178u) - 1u;
                wr32(r28 + 0x178u, r0);
                if ((s32)r0 <= 0) {
                    wrf32d(0x817fdfbcu, (f64)(f32)((f64)rdf32(0x817fdfbcu) + f31));
                    a.r[0] = r26;
                    a.r[1] = param_r3 + 0x184u;
                    a.r[2] = 0x817fdfb8u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32(r26) + 0x74u), &a);
                    r4 = tc_lastr4();
                    wr32(r28 + 0x178u, rd32(param_r3 + 0x180u));
                }
            }
        }
        r27 = r27 + 1u;
        r28 = r28 + 4u;
    } while ((s32)r27 < 2);
    return;
}
