#include "tc_rt.h"

void fn_80035368(f64 param_1, f64 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfd4u, 0u);
    r30 = rd32(rd32((u32)param_3 + 0xc0u) + 4u);
    if (r30 != 0u) {
        r29 = (u32)param_3 + 0x98u;
        r0 = rd32(r29 + 4u);
        wr32(0x817fdfc4u, rd32((u32)param_3 + 0x98u));
        wr32(0x817fdfc8u, r0);
        wr32(0x817fdfccu, rd32(r29 + 8u));
        r0 = rd32(r29 + 0x20u);
        wr32(0x817fdfb8u, rd32(r29 + 0x1cu));
        wr32(0x817fdfbcu, r0);
        wr32(0x817fdfc0u, rd32(r29 + 0x24u));
        if (rd32(r30 + 4u) != 0u) {
            a.f[0] = param_1;
            a.r[0] = 0x817fdfc4u;
            a.r[1] = r30;
            (void)tc_call(0x80034d78u, &a);
            r3 = (u32)rd16(rd32((u32)param_3 + 0x3cu) + 0x5cu);
            if ((r3 & 0x8000u) != 0u) {
                wrf32d(0x817fdfc8u, (f64)(f32)((f64)rdf32(0x817fdfc8u) * (f64)rdf32((u32)param_3 + 0xc4u)));
            } else {
                if ((r3 & 0x4000u) != 0u) {
                    f2 = (f64)rdf32(0x817fdfc8u);
                    f1 = (f64)rdf32(0x817fdfccu);
                    wrf32d(0x817fdfc4u, (f64)(f32)((f64)rdf32(0x817fdfc4u) * (f64)rdf32((u32)param_3 + 0xc4u)));
                    wrf32d(0x817fdfc8u, (f64)(f32)(f2 * (f64)rdf32((u32)param_3 + 0xc4u)));
                    wrf32d(0x817fdfccu, (f64)(f32)(f1 * (f64)rdf32((u32)param_3 + 0xc4u)));
                }
            }
            a.f[0] = param_2;
            a.r[0] = r29;
            a.r[1] = r29;
            a.r[2] = 0x817fdfc4u;
            (void)tc_call(0x8004c6dcu, &a);
        }
        if (rd32(r30 + 8u) != 0u) {
            a.f[0] = param_1;
            a.r[0] = 0x817fdfa8u;
            a.r[1] = r30;
            (void)tc_call(0x80035074u, &a);
            r3 = r29 + 0xcu;
            a.f[0] = param_2;
            a.r[0] = r3;
            a.r[1] = r3;
            a.r[2] = 0x817fdfa8u;
            (void)tc_call(0x80042b84u, &a);
        }
        if (rd32(r30 + 0xcu) != 0u) {
            a.f[0] = param_1;
            a.r[0] = 0x817fdfb8u;
            a.r[1] = r30;
            (void)tc_call(0x800351f4u, &a);
            r3 = r29 + 0x1cu;
            a.f[0] = param_2;
            a.r[0] = r3;
            a.r[1] = r3;
            a.r[2] = 0x817fdfb8u;
            (void)tc_call(0x8004c6dcu, &a);
        }
        wr16((u32)param_3 + 0x34u, (u16)((u32)rd16((u32)param_3 + 0x34u) | 0x400u));
    }
    return;
}
