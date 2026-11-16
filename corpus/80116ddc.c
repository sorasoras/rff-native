#include "tc_rt.h"

void fn_80116ddc(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if (rd32(0x8057115cu) == 0xau) {
        r31 = (u32)param_1;
        r30 = (u32)param_1 + 0x20u;
        r29 = 0u;
        do {
            if (rd32(r31 + 0x1cu) != 0u) {
                a.r[0] = r30;
                r3 = tc_call(0x80320fe4u, &a);
                if (r3 != 0u) {
                    a.r[0] = 0x817fdfd8u;
                    a.r[1] = rd32(r31 + 0x1cu);
                    (void)tc_call(0x800b0d04u, &a);
                    r5 = rd32(0x817fdfdcu);
                    r0 = rd32(0x817fdfe0u);
                    wr32(0x817fdfe4u, rd32(0x817fdfd8u));
                    wr32(0x817fdfe8u, r5);
                    wr32(0x817fdfecu, r0);
                    a.r[0] = r30;
                    a.r[1] = 0x817fdfe4u;
                    (void)tc_call(0x8015811cu, &a);
                }
            }
            r29 = r29 + 1u;
            r30 = r30 + 0x58u;
            r31 = r31 + 0x58u;
        } while ((s32)r29 < 10);
    }
    return;
}
