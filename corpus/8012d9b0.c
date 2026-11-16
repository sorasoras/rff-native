#include "tc_rt.h"

void fn_8012d9b0(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x34u) != 0u) {
        a.r[0] = (u32)param_1 + 0x108u;
        (void)tc_call(0x80163f60u, &a);
        r31 = (u32)param_1 + 0x38u;
        r30 = 0u;
        do {
            a.r[0] = r31;
            (void)tc_call(0x8012ee30u, &a);
            r30 = r30 + 1u;
            r31 = r31 + 0x14u;
        } while ((s32)r30 < 10);
        if (rd32((u32)param_1 + 0x100u) != 0u) {
            a.r[0] = rd32((u32)param_1 + 0x104u);
            (void)tc_call(0x800fe9bcu, &a);
        }
    }
    return;
}
