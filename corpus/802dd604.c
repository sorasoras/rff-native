#include "tc_rt.h"

void fn_802dd604(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = rd32(0x80547c1cu) + ((u32)param_1 * 0x4cu);
    r31 = rd32(r30 + 8u);
    if (r31 != 0u) {
        if (rd32(r30 + 0x20u) == 0u && (u32)rd16(rd32(r30 + 4u) + 0x38u) == 0u) {
            r3 = r31 + (((u32)rd8(r30 + 0xcu) << 9u) & 0xfffffe00u) + (((u32)rd8(r30 + 0xdu) << 2u) & 0xfffffffcu);
            if (rd32(r3 + 0x408u) == r30) {
                wr32(r3 + 0x408u, 0u);
            }
            wr32(r30 + 0x30u, 4u);
        }
        a.r[0] = r30;
        (void)tc_call(0x802dcc44u, &a);
        if (rd32(r30 + 0x30u) == 4u) {
            wr32(r30 + 8u, 0u);
            a.r[0] = rd32(r30 + 4u);
            (void)tc_call(0x802db360u, &a);
            a.r[0] = rd32(rd32(r30 + 4u) + 0x18u);
            (void)tc_call(0x802dc040u, &a);
            a.r[0] = rd32(r30 + 4u);
            (void)tc_call(0x802434b8u, &a);
            wr32(r31 + 0x404u, rd32(r31 + 0x404u) - 1u);
        } else {
            a.r[0] = r30;
            (void)tc_call(0x802dcdd4u, &a);
            a.r[0] = r30;
            (void)tc_call(0x802dd088u, &a);
        }
    }
    return;
}
