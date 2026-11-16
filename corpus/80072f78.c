#include "tc_rt.h"

void fn_80072f78(void)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    for (;;) {
        r3 = 0x804866e4u;
        r4 = 0u;
        r5 = 0u;
        ctr = 0xbu;
        do {
            if (rd32(r3 + 0x18u) == 1u) {
                r4 = 1u;
                break;
            }
            if (rd32(r3 + 0x4cu) == 1u) {
                r4 = 1u;
                break;
            }
            if (rd32(r3 + 0x80u) == 1u) {
                r4 = 1u;
                break;
            }
            r3 = r3 + 0x9cu;
            r5 = r5 + 2u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        if (r4 == 0u) break;
        (void)tc_call(0x800731ecu, &a);
    }
    return;
}
