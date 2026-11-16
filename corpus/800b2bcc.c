#include "tc_rt.h"

void fn_800b2bcc(s32 param_1)
{
    u32 ctr = 0, r5 = 0, r6 = 0;
    r5 = (u32)param_1 + 0xfe0u;
    r6 = 0u;
    ctr = 4u;
    do {
        if (r6 == 0x1fu) {
            wr32(r5 + 0x20u, 0u);
        } else {
            wr32(r5 + 0x20u, r5 + 0x24u);
        }
        r6 = r6 + 1u;
        if (r6 == 0x1fu) {
            wr32(r5 + 0x44u, 0u);
        } else {
            wr32(r5 + 0x44u, r5 + 0x48u);
        }
        r6 = r6 + 1u;
        if (r6 == 0x1fu) {
            wr32(r5 + 0x68u, 0u);
        } else {
            wr32(r5 + 0x68u, r5 + 0x6cu);
        }
        r6 = r6 + 1u;
        if (r6 == 0x1fu) {
            wr32(r5 + 0x8cu, 0u);
        } else {
            wr32(r5 + 0x8cu, r5 + 0x90u);
        }
        r6 = r6 + 1u;
        if (r6 == 0x1fu) {
            wr32(r5 + 0xb0u, 0u);
        } else {
            wr32(r5 + 0xb0u, r5 + 0xb4u);
        }
        r6 = r6 + 1u;
        if (r6 == 0x1fu) {
            wr32(r5 + 0xd4u, 0u);
        } else {
            wr32(r5 + 0xd4u, r5 + 0xd8u);
        }
        r6 = r6 + 1u;
        if (r6 == 0x1fu) {
            wr32(r5 + 0xf8u, 0u);
        } else {
            wr32(r5 + 0xf8u, r5 + 0xfcu);
        }
        r6 = r6 + 1u;
        if (r6 == 0x1fu) {
            wr32(r5 + 0x11cu, 0u);
        } else {
            wr32(r5 + 0x11cu, r5 + 0x120u);
        }
        r5 = r5 + 0x120u;
        r6 = r6 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr32((u32)param_1 + 0x1460u, (u32)param_1 + 0xfe0u);
    wr32((u32)param_1 + 0x1464u, 0u);
    return;
}
