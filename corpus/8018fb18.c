#include "tc_rt.h"

void fn_8018fb18(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r30 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = param_1 + (param_2 * 0x54u) + 0xc8u;
    a.r[0] = r31;
    r3 = tc_call(0x80320fe4u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        a.r[0] = r31;
        f1 = tc_callf(0x80157e6cu, &a);
        r4 = tc_lastr4();
    }
    if ((u32)param_4 != 0u) {
        r30 = 0xffffffffu;
        if (param_3 <= 8u) {
            r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7fc8ffc0u);
            sw_ = r3;
            switch (sw_) {
            case 0x8018fbccu:
                break;
            case 0x8018fb90u:
                r30 = 0xa5u;
                break;
            case 0x8018fb98u:
                r30 = 0xa4u;
                break;
            case 0x8018fba0u:
                r30 = 0x33u;
                break;
            case 0x8018fba8u:
                r30 = 0x3eu;
                break;
            case 0x8018fbb0u:
                r30 = 0x3eu;
                break;
            case 0x8018fbb8u:
                r30 = 0xa2u;
                break;
            case 0x8018fbc0u:
                r30 = 0x32u;
                break;
            case 0x8018fbc8u:
                r30 = 0xa3u;
                break;
            default:
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(sw_, &a);
                r0 = 0u;
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                r11 = 0u;
                r12 = 0u;
                f0 = 0.0;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
                f9 = 0.0;
                f10 = 0.0;
                f11 = 0.0;
                f12 = 0.0;
                f13 = 0.0;
                ctr = 0u;
                return;
            }
        }
        if (r30 != 0xffffffffu) {
            a.r[0] = param_1;
            a.r[1] = rd32(param_1 + ((param_2 << 2u) & 0xfffffffcu) + 4u);
            r3 = tc_call(0x80190000u, &a);
            if (r3 != 0u) {
                r3 = rd32(r3 + 0x70u);
                if (r3 != 0u) {
                    f1 = (f64)rdf32(0x80575330u);
                    f0 = (f64)rdf32(0x8057533cu);
                    wrf32d(0x817fdfdcu, f1);
                    wrf32d(0x817fdfe0u, f0);
                    wrf32d(0x817fdfe4u, f1);
                    a.r[0] = r3;
                    a.r[1] = 0xdu;
                    r3 = tc_call(0x80031cf8u, &a);
                    f0 = (f64)rdf32(0x80575330u);
                    wrf32d(0x817fdfd8u, f0);
                    r0 = rd32(((r30 << 2u) & 0xfffffffcu) - 0x7fca9e94u);
                    wrf32d(0x817fdfd4u, f0);
                    wrf32d(0x817fdfd0u, f0);
                    r3 = rd32(r3 + 0x50u);
                    wrf32d(0x817fdfd0u, (f64)rdf32(r3 + 0xcu));
                    wrf32d(0x817fdfd4u, (f64)rdf32(r3 + 0x1cu));
                    wrf32d(0x817fdfd8u, (f64)rdf32(r3 + 0x2cu));
                    if (r0 == 0u) {
                        a.r[0] = r30;
                        a.r[1] = 0x817fdfd0u;
                        a.r[2] = r31;
                        r3 = tc_call(0x800d7900u, &a);
                        if (r3 != 0u) {
                            r5 = rd32(0x817fdfe0u);
                            r0 = rd32(0x817fdfe4u);
                            wr32(0x817fdfb8u, rd32(0x817fdfdcu));
                            wr32(0x817fdfbcu, r5);
                            wr32(0x817fdfc0u, r0);
                            a.r[0] = r31;
                            a.r[1] = 0x817fdfb8u;
                            (void)tc_call(0x801581ccu, &a);
                        }
                    } else {
                        a.r[0] = r30;
                        a.r[1] = 0x817fdfd0u;
                        a.r[2] = r31;
                        r3 = tc_call(0x800d7908u, &a);
                        if (r3 != 0u) {
                            r5 = rd32(0x817fdfe0u);
                            r0 = rd32(0x817fdfe4u);
                            wr32(0x817fdfc4u, rd32(0x817fdfdcu));
                            wr32(0x817fdfc8u, r5);
                            wr32(0x817fdfccu, r0);
                            a.r[0] = r31;
                            a.r[1] = 0x817fdfc4u;
                            (void)tc_call(0x801581ccu, &a);
                        }
                    }
                    if ((u32)param_5 != 0u) {
                        a.r[0] = r31;
                        a.r[1] = 0x3cu;
                        (void)tc_call(0x80157f70u, &a);
                    }
                }
            }
        }
    }
    return;
}
