#include "tc_rt.h"

u32 fn_802590fc(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r29 = 0u;
    if ((u32)param_1 == 0u || param_2 == 0u) {
        r3 = 0u;
    } else {
        r28 = param_2;
        while (r29 <= param_3) {
            r4 = (u32)rd16(r28);
            if (r4 == 0u) {
                wr8((u32)param_1 + r29, 0u);
                break;
            }
            r5 = rd32(0x8038ed00u);
            r28 = r28 + 2u;
            a.r[0] = 0x817fdfd8u;
            a.r[1] = r4;
            a.r[2] = r5;
            a.f[0] = f1;
            r3 = tc_call(rd32(r5 + 0x24u), &a);
            r30 = r3;
            if ((r29 + r3) > param_3) break;
            a.r[0] = (u32)param_1 + r29;
            a.r[1] = 0x817fdfd8u;
            a.r[2] = r3;
            f1 = tc_callf(0x8025bdf4u, &a);
            r29 = r29 + r30;
        }
        r3 = r29;
    }
    return r3;
}
