#include "tc_rt.h"

void fn_801000b0(s32 param_1)
{
    u32 r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r29 = 0u;
    r31 = rd32((u32)param_1 + 0xe4u);
    while ((s32)r29 < (s32)rd32((u32)param_1 + 0xd8u)) {
        if (r31 != 0u) {
            a.r[0] = r31;
            (void)tc_call(0x800febe4u, &a);
            r30 = rd32(r31 + 0xc8u);
            if (r31 != 0u) {
                a.r[0] = r31 + 0x20u;
                a.r[1] = 0xffffffffu;
                (void)tc_call(0x802ed9f4u, &a);
                a.r[0] = r31;
                a.r[1] = 0xffffffffu;
                (void)tc_call(0x802e5858u, &a);
                a.r[0] = r31;
                (void)tc_call(0x800fe40cu, &a);
            }
        }
        r31 = r30;
        r29 = r29 + 1u;
    }
    return;
}
