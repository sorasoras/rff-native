#include "tc_rt.h"

void fn_802bc334(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(rd32(0x80571bc4u) + 0x6b0u, param_1);
    wr32(rd32(0x80571bc4u) + 0x6b4u, param_2);
    wr32(rd32(0x80571bc4u) + 0x6b8u, param_3);
    r4 = rd32(0x80571bc4u);
    r31 = (u32)rd16(r4 + 0x698u);
    r30 = (u32)rd16(r4 + 0x694u);
    wr32(0x80571bd0u, 0u);
    wr32(0x80571bccu, 0u);
    (void)tc_call(0x802bc0ecu, &a);
    r0 = (u32)rd16(rd32(0x80571bc4u) + 0x692u);
    if (r0 != 0x200u || r30 != 0x1c0u) {
        if (r0 != 0x280u || r30 != 0x1e0u) {
            while (r31 < r30) {
                (void)tc_call(0x802bd1f4u, &a);
                r31 = (r31 + 0x10u) & 0xffffu;
            }
        } else {
            while (r31 < r30) {
                (void)tc_call(0x802bcfa4u, &a);
                r31 = (r31 + 0x10u) & 0xffffu;
            }
        }
    } else {
        while (r31 < r30) {
            (void)tc_call(0x802bc438u, &a);
            r31 = (r31 + 0x10u) & 0xffffu;
        }
    }
    return;
}
