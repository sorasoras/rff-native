#include "tc_rt.h"

u32 fn_80147368(s32 param_1)
{
    u32 c0lt = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = 0u;
    wr32(0x817fdff4u, 0u);
    r29 = 0xffffffffu;
    r31 = rd32((u32)param_1 + 0x3cu);
    if (r31 != 0u) {
        a.r[0] = r31;
        r3 = tc_call(0x802550d4u, &a);
        if (r3 > 3u) {
            wr8(0x817fdfe8u, rd8(r31));
            wr8(0x817fdfe9u, rd8(r31 + 1u));
            wr8(0x817fdfeau, 0u);
            a.r[0] = 0x817fdfe8u;
            r3 = tc_call(0x8025c46cu, &a);
            r29 = r3;
        }
    }
    if (r29 != 0xffffffffu) {
        c0lt = (s32)r29 < 1;
        if (r29 != 1u) {
            if (!c0lt) {
                return r30;
            }
            if ((s32)r29 < 0) {
                return r30;
            }
            r30 = 0u;
        } else {
            r30 = 1u;
        }
    }
    return r30;
}
