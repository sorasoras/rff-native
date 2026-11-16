#include "tc_rt.h"

void fn_8007fd08(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
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
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x70u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 0u) {
        r0 = rd32(param_1 + 0x29cu);
        wr32(param_1 + 0x2a0u, 0xffffffffu);
        r27 = 0u;
        if ((s32)r0 <= 0) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            r6 = rd32(r3);
            f2 = (f64)rdf32(0x805728b0u);
            wr32(0x817fdfa8u, rd32(r3 + 4u));
            wr32(0x817fdfa4u, r6);
            f0 = (f64)rdf32(0x817fdfa8u);
            wr32(0x817fdfacu, rd32(r3 + 8u));
            f0 = ppc_fmadds(f2, (f64)rdf32(param_1 + 0xb4u), f0);
            wrf32d(0x817fdfa8u, f0);
            f2 = (f64)(f32)(f2 * (f64)rdf32(param_1 + 0xb4u));
            a.r[0] = param_3;
            a.r[1] = param_2;
            a.r[2] = 0x817fdfa4u;
            a.r[3] = r6;
            a.f[0] = (f64)rdf32(param_1 + 0xb0u);
            a.f[1] = f2;
            r3 = tc_call(rd32(rd32(param_3) + 0x24u), &a);
            f1 = tc_lastf();
            r27 = r3;
        } else {
            r28 = rd32(param_1 + 0x298u);
            r26 = 0u;
            f31 = (f64)rdf32(0x80572860u);
            while ((s32)r26 < (s32)rd32(param_1 + 0x29cu)) {
                f1 = (f64)rdf32(param_1 + 0x20u);
                f0 = (f64)rdf32(param_1 + 0x24u);
                if (!(f1 > f0)) {
                    f1 = f0;
                }
                f2 = (f64)rdf32(param_1 + 0x1cu);
                if (!(f2 > f1)) {
                    f2 = (f64)rdf32(param_1 + 0x20u);
                    f0 = (f64)rdf32(param_1 + 0x24u);
                    if (!(f2 > f0)) {
                        f2 = f0;
                    }
                }
                f0 = (f64)rdf32(r28 + 0x10u);
                wrf32d(0x817fdfb8u, f31);
                f30 = (f64)(f32)(f0 * f2);
                wrf32d(0x817fdfb4u, f31);
                wrf32d(0x817fdfb0u, f31);
                a.r[0] = param_1;
                a.r[1] = 0x817fdfb0u;
                a.r[2] = rd32(r28);
                a.r[3] = r28 + 4u;
                a.f[0] = f1;
                a.f[1] = f2;
                (void)tc_call(rd32(rd32(param_1) + 0x38u), &a);
                a.r[0] = param_3;
                a.r[1] = param_2;
                a.r[2] = 0x817fdfb0u;
                a.r[3] = 0u;
                a.f[0] = f30;
                a.f[1] = f30;
                r3 = tc_call(rd32(rd32(param_3) + 0x24u), &a);
                f1 = tc_lastf();
                if (r3 != 0u) {
                    wr32(param_1 + 0x2a0u, r26);
                    r27 = 1u;
                    break;
                }
                r26 = r26 + 1u;
                r28 = r28 + 0x14u;
            }
        }
        f0 = (f64)rdf32(0x80572860u);
        r26 = 0u;
        r28 = 0u;
        wrf32d(0x817fdfa0u, f0);
        wrf32d(0x817fdf9cu, f0);
        wrf32d(0x817fdf98u, f0);
        while (r26 < rd32(param_1 + 0x328u)) {
            r3 = rd32(rd32(param_1 + 0x324u) + r28);
            if (r3 != 0u && (u32)((s32)rd32(r3 + 0x9cu) >> 31) != 0u) {
                a.r[0] = r3;
                a.r[1] = 0x817fdf98u;
                a.r[2] = param_3;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0x7cu), &a);
                f1 = tc_lastf();
                if (r3 != 0u && r27 == 0u) {
                    r27 = 1u;
                    wrf32d(param_2, (f64)rdf32(0x817fdf98u));
                    wrf32d(param_2 + 4u, (f64)rdf32(0x817fdf9cu));
                    wrf32d(param_2 + 8u, (f64)rdf32(0x817fdfa0u));
                }
            }
            r28 = r28 + 4u;
            r26 = r26 + 1u;
        }
    }
    return;
}
