#include "tc_rt.h"

void fn_801e8570(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r28 = 0u;
    r29 = (u32)param_1;
    wr32(0x817fdfd8u, rd32((u32)param_1 + 0x348u));
    do {
        a.r[0] = 0x817fdfd8u;
        a.r[1] = r28;
        r3 = tc_call(0x8014a278u, &a);
        if (param_2 >= (s32)r3) {
            r3 = rd32((u32)param_1 + 0x338u);
            r4 = ((r28 & 0x20u) != 0u) ? 0u : (1u << (r28 & 0x1fu));
            if ((r4 & r3) == 0u) {
                wr32((u32)param_1 + 0x338u, r3 | r4);
                a.r[0] = 0x817fdfd8u;
                a.r[1] = r28;
                r3 = tc_call(0x8014a258u, &a);
                if (r3 != 0xffffffffu) {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = r3;
                    r3 = tc_call(0x8010a75cu, &a);
                    wr32(r29 + 0x9dcu, r3);
                }
            }
        }
        r28 = r28 + 1u;
        r29 = r29 + 4u;
    } while ((s32)r28 < 20);
    return;
}
