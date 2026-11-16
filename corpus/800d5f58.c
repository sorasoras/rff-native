#include "tc_rt.h"

void fn_800d5f58(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r0 = rd32((u32)param_1 + 0x98u);
    if (r0 != 2u) {
        r3 = rd32((u32)param_1 + 0x9cu);
        if (r3 != 0u && r0 == 0u) {
            r3 = rd32(r3 + 0x70u);
            a.r[0] = r3;
            a.r[1] = rd32((u32)param_1 + 0xa0u);
            r3 = tc_call(0x80031cf8u, &a);
            r31 = r3;
            if (r3 != 0u) {
                f0 = (f64)rdf32(0x8057319cu);
                r4 = (u32)param_1 + 0x40u;
                f1 = (f64)rdf32(0x80573198u);
                wrf32d((u32)param_1 + 0x50u, f0);
                wrf32d((u32)param_1 + 0x40u, f1);
                wrf32d((u32)param_1 + 0x60u, f0);
                wrf32d((u32)param_1 + 0x44u, f0);
                wrf32d((u32)param_1 + 0x54u, f1);
                wrf32d((u32)param_1 + 0x64u, f0);
                wrf32d((u32)param_1 + 0x48u, f0);
                wrf32d((u32)param_1 + 0x58u, f0);
                wrf32d((u32)param_1 + 0x68u, f1);
                wrf32d((u32)param_1 + 0x4cu, f0);
                wrf32d((u32)param_1 + 0x5cu, f0);
                wrf32d((u32)param_1 + 0x6cu, f0);
                wrf32d(0x817fdfc8u, f1);
                wrf32d(0x817fdfd8u, f0);
                wrf32d(0x817fdfe8u, f0);
                wrf32d(0x817fdfccu, f0);
                wrf32d(0x817fdfdcu, f1);
                wrf32d(0x817fdfecu, f0);
                wrf32d(0x817fdfd0u, f0);
                wrf32d(0x817fdfe0u, f0);
                wrf32d(0x817fdff0u, f1);
                wrf32d(0x817fdfd4u, f0);
                wrf32d(0x817fdfe4u, f0);
                wrf32d(0x817fdff4u, f0);
                wrf32d(0x817fdfc8u, (f64)rdf32((u32)param_1 + 0x1cu));
                wrf32d(0x817fdfdcu, (f64)rdf32((u32)param_1 + 0x20u));
                wrf32d(0x817fdff0u, (f64)rdf32((u32)param_1 + 0x24u));
                a.r[0] = 0x817fdfc8u;
                a.r[1] = r4;
                a.r[2] = r4;
                (void)tc_call(0x802337a0u, &a);
                r4 = (u32)param_1 + 0x40u;
                a.r[0] = rd32(r31 + 0x50u);
                a.r[1] = r4;
                a.r[2] = r4;
                (void)tc_call(0x802337a0u, &a);
                a.r[0] = rd32((u32)param_1 + 0x70u);
                a.r[1] = (u32)param_1 + 0x40u;
                (void)tc_call(0x800315c0u, &a);
                return;
            }
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800d6d70u, &a);
        } else {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800d6d70u, &a);
        }
    }
    return;
}
