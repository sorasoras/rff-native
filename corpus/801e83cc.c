#include "tc_rt.h"

void fn_801e83cc(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    if (param_2 >= 0) {
        if (param_2 >= 20) {
            return;
        }
        r31 = param_1 + ((u32)param_2 * 0x54u) + 0x34cu;
        a.r[0] = r31;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 != 0u) {
            wr32(0x817fdfb8u, rd32(param_1 + 0x348u));
            a.r[0] = 0x817fdfb8u;
            a.r[1] = (u32)param_2;
            r3 = tc_call(0x8014a204u, &a);
            r30 = r3;
            a.r[0] = 0x817fdfe0u;
            a.r[1] = 0x817fdfb8u;
            a.r[2] = (u32)param_2;
            f1 = tc_callf(0x8014a224u, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            r4 = rd32(r3 + 4u);
            r0 = rd32(r3 + 8u);
            wr32(0x817fdfd4u, rd32(r3));
            wr32(0x817fdfd8u, r4);
            wr32(0x817fdfdcu, r0);
            if (r30 != 0u) {
                a.r[0] = rd32(param_1 + 0x70u);
                a.r[1] = r30;
                r3 = tc_call(0x80031be0u, &a);
                if (r3 != 0u) {
                    r3 = rd32(r3 + 0x50u);
                    f1 = (f64)rdf32(r3 + 0x1cu);
                    f0 = (f64)rdf32(r3 + 0x2cu);
                    wrf32d(0x817fdfd4u, (f64)rdf32(r3 + 0xcu));
                    wrf32d(0x817fdfd8u, f1);
                    wrf32d(0x817fdfdcu, f0);
                }
            }
            r5 = rd32(0x817fdfd8u);
            r0 = rd32(0x817fdfdcu);
            wr32(0x817fdfc8u, rd32(0x817fdfd4u));
            wr32(0x817fdfccu, r5);
            wr32(0x817fdfd0u, r0);
            a.r[0] = r31;
            a.r[1] = 0x817fdfc8u;
            (void)tc_call(0x8015811cu, &a);
            r5 = rd32(0x817fdfe4u);
            r0 = rd32(0x817fdfe8u);
            wr32(0x817fdfbcu, rd32(0x817fdfe0u));
            wr32(0x817fdfc0u, r5);
            wr32(0x817fdfc4u, r0);
            a.r[0] = r31;
            a.r[1] = 0x817fdfbcu;
            (void)tc_call(0x801581ccu, &a);
        }
    }
    return;
}
