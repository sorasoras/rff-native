#include "tc_rt.h"

void fn_80004238(void)
{
    u32 c0eq = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r29 = 0x80006420u;
    for (;;) {
        r30 = rd32(r29 + 8u);
        c0eq = r30 == 0u;
        if (c0eq) break;
        r4 = rd32(r29);
        r31 = rd32(r29 + 4u);
        if (!c0eq && r31 != r4) {
            a.r[0] = r31;
            a.r[1] = r4;
            a.r[2] = r30;
            (void)tc_call(0x80004338u, &a);
            a.r[0] = r31;
            a.r[1] = r30;
            (void)tc_call(0x80004304u, &a);
        }
        r29 = r29 + 0xcu;
    }
    r29 = 0x800064a4u;
    for (;;) {
        r5 = rd32(r29 + 4u);
        c0eq = r5 == 0u;
        if (c0eq) break;
        r3 = rd32(r29);
        if (!c0eq) {
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = r5;
            (void)tc_call(0x8000443cu, &a);
        }
        r29 = r29 + 8u;
    }
    return;
}
