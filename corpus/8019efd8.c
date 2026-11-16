#include "tc_rt.h"

void fn_8019efd8(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5, u32 param_6, s32 param_7, s32 param_8, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r23 = 0, r24 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    if (param_2 != 0xffffffffu) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = 1u;
        r3 = tc_call(0x8019ee58u, &a);
        if (r3 == 0u) {
            return;
        }
    }
    r6 = rd32(param_5 + 4u);
    r0 = rd32(param_5 + 8u);
    wr32(0x817fdfb4u, rd32(param_5));
    wr32(0x817fdfb8u, r6);
    wr32(0x817fdfbcu, r0);
    a.r[0] = param_1;
    a.r[1] = param_4;
    a.r[2] = 0x817fdfb4u;
    (void)tc_call(0x8019eea0u, &a);
    if (rd32((((u32)param_3 << 2u) & 0xfffffffcu) - 0x7fca9e94u) != 0u) {
        r7 = rd32(0x817fdfb8u);
        r0 = rd32(0x817fdfbcu);
        wr32(0x817fdfa8u, rd32(0x817fdfb4u));
        wr32(0x817fdfacu, r7);
        wr32(0x817fdfb0u, r0);
        a.f[0] = param_f1;
        a.r[0] = (u32)param_3;
        a.r[1] = 0x817fdfa8u;
        a.r[2] = 0x804890c8u;
        a.r[3] = 0x804b15c0u;
        r3 = tc_call(0x800d7758u, &a);
        r23 = r3;
    } else {
        a.f[0] = param_f1;
        a.r[0] = (u32)param_3;
        a.r[1] = 0x817fdfb4u;
        a.r[2] = 0x804890c8u;
        a.r[3] = 0x804b15c0u;
        r3 = tc_call(0x800d782cu, &a);
        r23 = r3;
    }
    if (r3 != 0u) {
        r24 = rd32(r3 + 0x24u);
        a.r[1] = param_6;
        r3 = tc_call(0x8010b43cu, &a);
        wr32(r23 + 0x20u, r3);
        wr32(r23 + 0x24u, r24);
        if ((u32)param_8 == 0u) {
            wr32(param_1 + (param_2 * 0x14u) + 0xcu, r23);
        }
        if ((u32)param_7 != 0u) {
            f2 = (f64)rdf32(param_5);
            f1 = (f64)rdf32(param_5 + 4u);
            f0 = (f64)rdf32(param_5 + 8u);
            r3 = param_1 + (param_2 * 0x14u);
            wr32(r3 + 0xcu, r23);
            wr32(r3 + 0x10u, param_4);
            wrf32d(r3 + 0x14u, f2);
            wrf32d(r3 + 0x18u, f1);
            wrf32d(r3 + 0x1cu, f0);
        }
    }
    return;
}
