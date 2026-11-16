#include "tc_rt.h"

void fn_80141d6c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f30 = (f64)rdf32(0x80574488u);
    r31 = (u32)param_1 + 0xcu;
    f31 = (f64)rdf32(0x80574454u);
    r30 = 0u;
    do {
        a.r[0] = r31;
        r3 = tc_call(0x80141ff8u, &a);
        f1 = tc_lastf();
        if (r3 != 0u && rd32(r31 + 0x1cu) != 0u) {
            if ((u32)param_2 != 0u) {
                r3 = rd32(r31);
                a.r[0] = r3;
                a.r[1] = 1u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3) + 0x4cu), &a);
                r3 = rd32(r31);
                wrf32d(r3 + 0xa0u, f31);
                wr32(r3 + 0x80u, rd32(r3 + 0x80u) & 0xfdffffffu);
                r3 = rd32(r31);
                wr32(r3 + 0x80u, rd32(r3 + 0x80u) | 0x4000000u);
                wrf32d(r3 + 0x9cu, (f64)(f32)ppc_fabs(f30));
            } else {
                r3 = rd32(r31);
                a.r[0] = r3;
                a.r[1] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3) + 0x4cu), &a);
            }
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x20u;
    } while ((s32)r30 < 8);
    return;
}
