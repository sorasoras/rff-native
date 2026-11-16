#include "tc_rt.h"

void fn_80132de4(s32 param_1)
{
    u32 ctr = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    r6 = rd32(rd32(0x80571398u) + 0xfcu);
    if (r6 != 0u) {
        r8 = 0u;
        r5 = 0u;
        ctr = 2u;
        do {
            r7 = rd32((u32)param_1 + 0x458u);
            r4 = (u32)rd16(rd32(rd32(r7 + 0x2cu) + r5) + 0xbcu);
            if (r4 != 0x2e8u && rd32(r6 + 0xcu) != r4) {
                a.r[0] = r7;
                a.r[1] = 1u;
                (void)tc_call(0x80137a40u, &a);
                return;
            }
            r7 = rd32((u32)param_1 + 0x458u);
            r5 = r5 + 4u;
            r4 = (u32)rd16(rd32(rd32(r7 + 0x2cu) + r5) + 0xbcu);
            if (r4 != 0x2e8u && rd32(r6 + 0x10u) != r4) {
                a.r[0] = r7;
                a.r[1] = 1u;
                (void)tc_call(0x80137a40u, &a);
                return;
            }
            r7 = rd32((u32)param_1 + 0x458u);
            r5 = r5 + 4u;
            r4 = (u32)rd16(rd32(rd32(r7 + 0x2cu) + r5) + 0xbcu);
            if (r4 != 0x2e8u && rd32(r6 + 0x14u) != r4) {
                a.r[0] = r7;
                a.r[1] = 1u;
                (void)tc_call(0x80137a40u, &a);
                return;
            }
            r5 = r5 + 4u;
            r6 = r6 + 0xcu;
            r8 = r8 + 2u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        a.r[0] = rd32((u32)param_1 + 0x458u);
        a.r[1] = 0u;
        (void)tc_call(0x80137a40u, &a);
        return;
    }
    a.r[0] = rd32((u32)param_1 + 0x458u);
    a.r[1] = 0u;
    (void)tc_call(0x80137a40u, &a);
    return;
}
