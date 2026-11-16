#include "tc_rt.h"

void fn_800b5e28(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r0 = rd32(param_2 + 0xcf8u);
    f31 = (f64)rdf32(0x80572bf8u);
    wr32(param_1, rd32(param_2 + 0xcf4u));
    r31 = 1u;
    wr32(param_1 + 4u, r0);
    wr32(param_1 + 8u, rd32(param_2 + 0xcfcu));
    r30 = rd32(0x8046ad24u);
    while (r30 != 0u) {
        r29 = rd32(r30 + 8u);
        r30 = rd32(r30);
        r0 = 2u;
        r3 = rd32(r29 + 0x30u);
        if ((u32)param_3 == 0u) {
            r0 = 4u;
        }
        r0 = r3 & r0;
        if (r0 != 0u) {
            r0 = rd32(r29 + 0xcu);
            wr32(0x817fdfc8u, rd32(r29 + 8u));
            wr32(0x817fdfccu, r0);
            wr32(0x817fdfd0u, rd32(r29 + 0x10u));
            a.r[0] = 0x817fdfc8u;
            a.r[1] = param_2 + 0xcf4u;
            a.r[2] = 0x817fdfc8u;
            (void)tc_call(0x802343a4u, &a);
            a.r[0] = 0x817fdfc8u;
            f1 = tc_callf(0x80234440u, &a);
            if (r31 != 0u || f1 < f31) {
                f31 = f1;
                r31 = 0u;
                wrf32d(param_1, (f64)rdf32(r29 + 8u));
                wrf32d(param_1 + 4u, (f64)rdf32(r29 + 0xcu));
                wrf32d(param_1 + 8u, (f64)rdf32(r29 + 0x10u));
            }
        }
    }
    return;
}
