#include "tc_rt.h"

void fn_8020c768(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    f31 = (f64)rdf32(0x805767a8u);
    r24 = 0u;
    do {
        a.r[0] = param_r3 + 0x10u;
        a.r[1] = rd32(param_r3 + 4u);
        a.r[2] = r24;
        r3 = tc_call(0x8020bbacu, &a);
        if (r3 == 0u) break;
        a.r[0] = param_r3 + 0x10u;
        a.r[1] = rd32(param_r3 + 4u);
        a.r[2] = r24;
        r3 = tc_call(0x8020bc98u, &a);
        if ((s32)r3 > -1 && (s32)param_r4 >= (s32)r3) {
            r3 = rd32(param_r3 + 8u);
            r4 = ((r24 & 0x20u) != 0u) ? 0u : (1u << (r24 & 0x1fu));
            if ((r4 & r3) == 0u) {
                r0 = r3 | r4;
                r4 = rd32(param_r3 + 4u);
                wr32(param_r3 + 8u, r0);
                a.r[0] = param_r3 + 0x10u;
                a.r[1] = r4;
                a.r[2] = r24;
                r3 = tc_call(0x8020bc2cu, &a);
                r23 = r3;
                if (r3 != 0xffffffffu) {
                    a.r[0] = param_r3 + 0x10u;
                    a.r[1] = rd32(param_r3 + 4u);
                    a.r[2] = r24;
                    (void)tc_call(0x8020bd70u, &a);
                    a.r[0] = 0x817fdfb0u;
                    a.r[1] = param_r3 + 0x10u;
                    a.r[2] = rd32(param_r3 + 4u);
                    a.r[3] = r24;
                    (void)tc_call(0x8020bdf4u, &a);
                    wrf32d(0x817fdfacu, f31);
                    wrf32d(0x817fdfa8u, f31);
                    wrf32d(0x817fdfa4u, f31);
                    a.r[0] = param_r3 + 0x10u;
                    a.r[1] = rd32(param_r3 + 4u);
                    a.r[2] = r24;
                    r3 = tc_call(0x8020bd04u, &a);
                    r22 = r3;
                    r21 = 0u;
                    if (rd32(((r23 << 2u) & 0xfffffffcu) - 0x7fca9e94u) == 0u) {
                        a.f[0] = (f64)rdf32(0x805767c0u);
                        a.r[0] = r23;
                        a.r[1] = 0x817fdfa4u;
                        a.r[2] = 0x817fdfb0u;
                        a.r[3] = 0x804b15c0u;
                        r3 = tc_call(0x800d782cu, &a);
                        r23 = r3;
                    } else {
                        r7 = rd32(0x817fdfa8u);
                        r0 = rd32(0x817fdfacu);
                        wr32(0x817fdf98u, rd32(0x817fdfa4u));
                        f1 = (f64)rdf32(0x805767c0u);
                        wr32(0x817fdf9cu, r7);
                        wr32(0x817fdfa0u, r0);
                        a.f[0] = f1;
                        a.r[0] = r23;
                        a.r[1] = 0x817fdf98u;
                        a.r[2] = 0x817fdfb0u;
                        a.r[3] = 0x804b15c0u;
                        r3 = tc_call(0x800d7758u, &a);
                        r23 = r3;
                        r21 = 1u;
                    }
                    if (r3 != 0u) {
                        a.r[1] = 0xffffffffu;
                        r3 = tc_call(0x8010b43cu, &a);
                        wr32(r23 + 0x20u, r3);
                        wr32(r23 + 0x24u, 0u);
                        if (r22 == 0xffffffffu) {
                            if (r21 != 0u) {
                                a.r[0] = r23;
                                a.r[1] = 0x78u;
                                (void)tc_call(0x80157f70u, &a);
                            }
                        } else {
                            a.r[0] = r23;
                            a.r[1] = r22;
                            (void)tc_call(0x80157f70u, &a);
                        }
                    }
                }
            }
        }
        r24 = r24 + 1u;
    } while ((s32)r24 < 20);
    return;
}
