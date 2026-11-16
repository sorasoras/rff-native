#include "tc_rt.h"

void fn_80089654(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r8 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    f29 = (f64)rdf32(0x80572908u);
    r5 = rd32(0x804863d8u);
    r0 = rd32(0x805710e0u) * 0x6d0u;
    wrf32d(0x817fdf88u, f29);
    r5 = (u32)rd16(r5 + 0x140u);
    r8 = r0 - 0x7fc2e738u;
    r26 = r5 & 8u;
    r6 = rd32(r8 + 0x138u);
    r28 = param_r3 + 0x730u;
    r5 = rd32(r8 + 0x13cu);
    r27 = param_r3;
    r4 = rd32(r8 + 0x140u);
    r25 = 0u;
    r3 = rd32(r8 + 0x144u);
    r0 = rd32(r8 + 0x148u);
    wr32(0x817fdf98u, rd32(r8 + 0x134u));
    f30 = (f64)rdf32(0x80572938u);
    wr32(0x817fdf9cu, r6);
    f31 = (f64)rdf32(0x8057290cu);
    wr32(0x817fdfa0u, r5);
    wr32(0x817fdf8cu, r4);
    wr32(0x817fdf90u, r3);
    wr32(0x817fdf94u, r0);
    wrf32d(0x817fdf6cu, f29);
    wrf32d(0x817fdf74u, f29);
    while ((s32)r25 < (s32)rd32(param_r3 + 0x2288u)) {
        do {
            if (r26 != 0u) {
                a.f[0] = (f64)rdf32(0x8057290cu);
                a.r[0] = r28;
                a.r[1] = 0x817fdf98u;
                a.r[2] = 0x817fdf8cu;
                r3 = tc_call(0x800cb688u, &a);
                if (r3 != 0u) {
                    f0 = (f64)(f32)((f64)rdf32(r27 + 0x7b0u) - f30);
                    if (f29 > f0) {
                        f0 = f29;
                    }
                    wrf32d(r27 + 0x7b0u, f0);
                    wr32(r27 + 0x7b4u, 1u);
                    a.r[0] = rd32(r27 + 0x7a8u);
                    a.r[1] = 0u;
                    (void)tc_call(0x8007b16cu, &a);
                    break;
                }
            }
            f1 = (f64)(f32)(f30 + (f64)rdf32(r27 + 0x7b0u));
            if (f31 < f1) {
                f1 = f31;
            }
            wrf32d(r27 + 0x7b0u, f1);
            if (f31 != (f64)(f32)f1) {
                wr32(r27 + 0x7b4u, 1u);
                a.r[0] = rd32(r27 + 0x7a8u);
                a.r[1] = 0u;
                (void)tc_call(0x8007b16cu, &a);
            } else {
                wr32(r27 + 0x7b4u, 0u);
                a.r[0] = rd32(r27 + 0x7a8u);
                a.r[1] = 1u;
                (void)tc_call(0x8007b16cu, &a);
            }
        } while (0);
        r28 = r28 + 0x8cu;
        r27 = r27 + 0x8cu;
        r25 = r25 + 1u;
    }
    return;
}
