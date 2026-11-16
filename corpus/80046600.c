#include "tc_rt.h"

void fn_80046600(void)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32(0x803c1df0u) == 0u) {
        r31 = 0x803c1e40u;
        r30 = 0u;
        do {
            a.r[0] = r31;
            (void)tc_call(0x80048df4u, &a);
            r30 = r30 + 1u;
            r31 = r31 + 0xcu;
        } while ((s32)r30 < 10);
    }
    r30 = 0u;
    r31 = 0x803c1eb8u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x800492e4u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x10u;
    } while ((s32)r30 < 3);
    if ((u32)rd8(0x803c1de7u) != 0u) {
        r31 = 0x803c1ee8u;
        r30 = 0u;
        do {
            a.r[0] = r31;
            (void)tc_call(0x800496d4u, &a);
            r30 = r30 + 1u;
            r31 = r31 + 0xcu;
        } while ((s32)r30 < 6);
    }
    a.r[0] = 0x803c26c0u;
    a.r[1] = 0x80571048u;
    a.r[2] = 2u;
    (void)tc_call(0x8022ca4cu, &a);
    return;
}
