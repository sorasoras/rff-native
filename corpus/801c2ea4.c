#include "tc_rt.h"

void fn_801c2ea4(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    if ((s32)rd32((u32)param_1 + 0xd40u) > 0) {
        if (rd32((u32)param_1 + 0xd44u) == 0u) {
            return;
        }
        r31 = (u32)param_1;
        r29 = 0u;
        r30 = 0u;
        while ((s32)r29 < (s32)rd32((u32)param_1 + 0xd40u)) {
            if (rd32(r31 + 0xd48u) != 0u) {
                a.r[0] = rd32((u32)param_1 + 0x70u);
                a.r[1] = rd32(rd32((u32)param_1 + 0xd44u) + r30);
                r3 = tc_call(0x80031be0u, &a);
                if (r3 != 0u) {
                    r3 = rd32(r3 + 0x50u);
                    f2 = (f64)rdf32(r3 + 0x2cu);
                    f0 = (f64)rdf32(r3 + 0xcu);
                    wrf32d(0x817fdfe8u, (f64)rdf32(r3 + 0x1cu));
                    wrf32d(0x817fdfe4u, f0);
                    r3 = rd32(0x817fdfe8u);
                    wrf32d(0x817fdfecu, f2);
                    r0 = rd32(0x817fdfecu);
                    wr32(0x817fdfd8u, rd32(0x817fdfe4u));
                    wr32(0x817fdfdcu, r3);
                    wr32(0x817fdfe0u, r0);
                    a.r[0] = rd32(r31 + 0xd48u);
                    a.r[1] = 0x817fdfd8u;
                    (void)tc_call(0x8015811cu, &a);
                }
            }
            r31 = r31 + 4u;
            r30 = r30 + 4u;
            r29 = r29 + 1u;
        }
    }
    return;
}
