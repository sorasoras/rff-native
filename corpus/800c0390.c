#include "tc_rt.h"

void fn_800c0390(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r25 = 0, r26 = 0, r27 = 0;
    f64 f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r4 = param_r4;
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    if ((s32)rd32(param_r3 + 0xa08u) < 33) {
        f30 = (f64)rdf32(0x80572e90u);
        f31 = (f64)rdf32(0x80572ea0u);
        r26 = 0u;
        r27 = 0u;
        do {
            r3 = r27 + (rd32(param_r3 + 0xa08u) * 0x58u) - 0x7fb97210u;
            r25 = (u32)(s16)rd16(r3 + 0x24u);
            if (r25 != 0xffffffffu && param_r4 == (u32)rd8(r3 + 0x26u)) {
                wrf32d(0x817fdfb0u, f30);
                wrf32d(0x817fdfacu, f30);
                wrf32d(0x817fdfa8u, f30);
                if ((u32)rd8(r27 + (rd32(param_r3 + 0xa08u) * 0x58u) - 0x7fb971e9u) == 0u) {
                    a.r[0] = param_r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
                    wrf32d(0x817fdfa8u, (f64)rdf32(r3));
                    f1 = (f64)rdf32(r3 + 4u);
                    wrf32d(0x817fdfacu, f1);
                    wrf32d(0x817fdfb0u, (f64)rdf32(r3 + 8u));
                    wrf32d(0x817fdfacu, ppc_fmadds(f31, (f64)rdf32(param_r3 + 0xb4u), f1));
                } else {
                    a.r[0] = param_r3 + 0x54cu;
                    a.r[1] = 0x817fdfa8u;
                    a.r[2] = 0xc8u;
                    a.r[3] = 0x804890c8u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(param_r3 + 0x54cu) + 0x34u), &a);
                    f1 = tc_lastf();
                    if (r3 == 0u) {
                        a.r[0] = param_r3;
                        a.r[1] = 0x817fdfa8u;
                        a.r[2] = 0x15u;
                        a.r[3] = 0x804890c8u;
                        a.f[0] = f1;
                        (void)tc_call(rd32(rd32(param_r3) + 0x34u), &a);
                    }
                }
                a.r[0] = param_r3;
                a.r[1] = r25;
                a.r[2] = 0x817fdfa8u;
                a.r[3] = 0x804890c8u;
                f1 = tc_callf(0x8019fc4cu, &a);
                r4 = tc_lastr4();
            }
            r26 = r26 + 1u;
            r27 = r27 + 4u;
        } while (r26 < 4u);
        r3 = (rd32(param_r3 + 0xa08u) * 0x58u) - 0x7fb97210u;
        r4 = (u32)(s16)rd16(r3 + 0x34u);
        if (r4 != 0xffffffffu) {
            r0 = (u32)rd8(r3 + 0x36u);
            r3 = (u32)rd8(r3 + 0x37u);
            if (r0 == param_r4) {
                a.r[0] = param_r3;
                a.r[1] = r4;
                (void)tc_call(0x801a0220u, &a);
            } else {
                if (r3 == param_r4) {
                    r3 = rd32(param_r3 + 0x15c8u);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        (void)tc_call(0x80157e6cu, &a);
                        wr32(param_r3 + 0x15c8u, 0u);
                    }
                }
            }
        }
    }
    return;
}
