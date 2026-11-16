#include "tc_rt.h"

void fn_8030cd3c(u32 param_r3)
{
    u32 r3 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r29 = 0u;
    r31 = param_r3;
    r28 = 0u;
    while ((s32)r28 < (s32)rd32(param_r3 + 0x8cu)) {
        r30 = r31;
        r27 = 0u;
        while ((s32)r27 < (s32)rd32(param_r3 + 0x90u)) {
            r26 = rd32(r30 + 0xcu);
            if (r26 != 0u) {
                a.r[0] = param_r3;
                a.r[1] = r28;
                a.r[2] = r27;
                a.r[3] = 0x817fdfc8u;
                a.r[4] = 0x817fdfb8u;
                (void)tc_call(0x8030d198u, &a);
                a.r[0] = r26;
                a.r[1] = 0x817fdfc8u;
                r3 = tc_call(0x802f3070u, &a);
                r3 = r29 | r3;
                r29 = (((0u - r3) | r3) >> 0x1fu) & 1u;
                if (rd32(param_r3 + 0xb4u) <= 1u) {
                    a.r[0] = r26;
                    a.r[1] = 0u;
                    (void)tc_call(0x802f26c4u, &a);
                } else {
                    a.r[0] = r26;
                    a.r[1] = 1u;
                    (void)tc_call(0x802f26c4u, &a);
                    a.r[0] = r26;
                    a.r[1] = 0x817fdfb8u;
                    (void)tc_call(0x802f3694u, &a);
                }
            }
            r30 = r30 + 4u;
            r27 = r27 + 1u;
        }
        r31 = r31 + 0x10u;
        r28 = r28 + 1u;
    }
    return;
}
