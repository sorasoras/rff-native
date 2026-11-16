#include "tc_rt.h"

void fn_800c8fd4(s32 param_1)
{
    u32 ctr = 0, r4 = 0, r5 = 0, r8 = 0, r10 = 0, r12 = 0;
    TcArgs a = {0};
    r12 = 0u;
    r4 = 0u;
    do {
        r10 = (u32)param_1 + r4;
        r5 = 0u;
        wr16(r10 + 0x20u, 0u);
        wr16(r10 + 0x22u, 0u);
        wr8(r10 + 0x56u, 0u);
        ctr = 2u;
        do {
            r8 = r10 + r5;
            r5 = r5 + 4u;
            wr32(r8 + 0x24u, 0x2e8u);
            r8 = r10 + r5;
            r5 = r5 + 4u;
            wr32(r8 + 0x24u, 0x2e8u);
            r8 = r10 + r5;
            r5 = r5 + 4u;
            wr32(r8 + 0x24u, 0x2e8u);
            r8 = r10 + r5;
            r5 = r5 + 4u;
            wr32(r8 + 0x24u, 0x2e8u);
            r8 = r10 + r5;
            r5 = r5 + 4u;
            wr32(r8 + 0x24u, 0x2e8u);
            r8 = r10 + r5;
            r5 = r5 + 4u;
            wr32(r8 + 0x24u, 0x2e8u);
            ctr = ctr - 1u;
        } while (ctr != 0u);
        r5 = (u32)param_1 + r4;
        wr8(r5 + 0x54u, 0xffu);
        if (r12 == 7u) {
            wr8(r5 + 0x55u, 2u);
        } else {
            wr8(r5 + 0x55u, 0u);
        }
        r12 = r12 + 1u;
        wr8((u32)param_1 + r4 + 0x57u, 0u);
        r4 = r4 + 0x38u;
    } while (r12 < 0x21u);
    wr32((u32)param_1 + 0x758u, 0u);
    a.r[0] = (u32)param_1 + 0x760u;
    a.r[1] = 0u;
    a.r[2] = 0xd90u;
    (void)tc_call(0x8000443cu, &a);
    return;
}
