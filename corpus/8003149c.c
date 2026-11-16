#include "tc_rt.h"

void fn_8003149c(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    while (r30 < rd32((u32)param_1 + 0x34u)) {
        r31 = rd32((u32)param_1 + 0x38u) + (rd32((u32)param_1 + 0x3cu) * r30);
        if (((u32)rd16(r31 + 0x34u) & 0x400u) != 0u) {
            a.r[0] = rd32(r31 + 0x4cu);
            a.r[1] = rd32(r31 + 0x48u);
            (void)tc_call(0x80041fc4u, &a);
            wr16(r31 + 0x34u, (u16)((u32)rd16(r31 + 0x34u) & 0xfffffbffu));
        }
        r30 = r30 + 1u;
    }
    return;
}
