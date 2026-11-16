#include "tc_rt.h"

void fn_8019eb54(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = 0u;
    wr32(0x817fdff4u, 0u);
    r31 = (u32)param_1;
    do {
        if (rd32(r31 + 0x10u) != 0xffffffffu) {
            r3 = rd32(r31 + 0xcu);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x80320fe4u, &a);
                if (r3 != 0u) {
                    r0 = rd32(r31 + 0x18u);
                    wr32(0x817fdfe4u, rd32(r31 + 0x14u));
                    wr32(0x817fdfe8u, r0);
                    wr32(0x817fdfecu, rd32(r31 + 0x1cu));
                    a.r[0] = (u32)param_1;
                    a.r[1] = rd32(r31 + 0x10u);
                    a.r[2] = 0x817fdfe4u;
                    (void)tc_call(0x8019eea0u, &a);
                    r3 = rd32(r31 + 0xcu);
                    r5 = rd32(0x817fdfe8u);
                    r0 = rd32(0x817fdfecu);
                    wr32(0x817fdfd8u, rd32(0x817fdfe4u));
                    wr32(0x817fdfdcu, r5);
                    wr32(0x817fdfe0u, r0);
                    a.r[0] = r3;
                    a.r[1] = 0x817fdfd8u;
                    (void)tc_call(0x8015811cu, &a);
                } else {
                    a.r[0] = (u32)param_1;
                    a.r[1] = r30;
                    (void)tc_call(0x8019ed94u, &a);
                }
            }
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x14u;
    } while ((s32)r30 < 32);
    return;
}
