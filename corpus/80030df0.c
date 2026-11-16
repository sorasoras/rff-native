#include "tc_rt.h"

void fn_80030df0(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    do {
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = r31;
        (void)tc_call(0x80030d1cu, &a);
        r31 = r31 + 1u;
    } while ((s32)r31 < 3);
    r31 = (u32)param_2 + 0x78u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x80030c18u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 8u;
    } while ((s32)r30 < 3);
    r3 = 0u;
    r6 = 0u;
    while (r6 < rd32((u32)param_2 + 0x34u)) {
        r5 = rd32((u32)param_2 + 0x38u) + (rd32((u32)param_2 + 0x3cu) * r6);
        if ((u32)(s16)rd16(rd32(r5 + 0x3cu) + 0x66u) != 0xffffffffu) {
            wr32(rd32((u32)param_2 + 0x68u) + r3, r5);
            r3 = r3 + 4u;
        }
        r6 = r6 + 1u;
    }
    return;
}
