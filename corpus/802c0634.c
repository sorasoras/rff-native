#include "tc_rt.h"

void fn_802c0634(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r12 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    c0lt = param_2 < 0;
    if ((u32)param_2 == 0u) {
        r29 = ((u32)param_1 << 2u) & 0xfffffffcu;
        if ((u32)rd8(rd32(r29 - 0x7fab8ba0u) + 0x40u) == 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0x802c0748u;
            (void)tc_call(0x8027a2d0u, &a);
            wr8(rd32(r29 - 0x7fab8ba0u) + 0x40u, 1u);
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        f1 = tc_callf(0x8027b0acu, &a);
    } else if (c0lt && param_2 >= -1) {
        r28 = ((u32)param_1 << 2u) & 0xfffffffcu;
        a.r[0] = (u32)param_1;
        a.r[1] = rd32(rd32(r28 - 0x7fab8ba0u) + 0x28u);
        f1 = tc_callf(0x8027a2d0u, &a);
        wr8(rd32(r28 - 0x7fab8ba0u) + 0x40u, 0u);
        wr8(rd32(r28 - 0x7fab8ba0u) + 0x42u, 0u);
        wr8(rd32(r28 - 0x7fab8ba0u) + 0x43u, 0u);
    }
    r12 = rd32(rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fab8ba0u) + 0x24u);
    if (r12 != 0u && r12 != 0x802c0634u) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    }
    return;
}
