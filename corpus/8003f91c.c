#include "tc_rt.h"

void fn_8003f91c(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)rd16((u32)param_1 + 0x14u);
    r3 = 2u;
    if ((r30 & 1u) != 0u) {
        r3 = 0u;
    }
    a.r[0] = r3;
    (void)tc_call(0x8003f770u, &a);
    a.r[0] = (u32)(s8)rd8((u32)param_1 + 0x16u);
    (void)tc_call(0x8003f7c0u, &a);
    if ((u32)rd8(0x803be692u) != 0u) {
        a.r[0] = (r30 >> 1u) & 1u;
        (void)tc_call(0x8003d790u, &a);
        wr8(0x803be696u, 1u);
    }
    if ((u32)rd8(0x803be693u) != 0u) {
        a.r[0] = (r30 >> 2u) & 1u;
        (void)tc_call(0x8004e22cu, &a);
        wr8(0x803be697u, 1u);
    }
    r31 = (u32)rd8((u32)param_1 + 0x55u);
    if ((u32)rd8(0x803be694u) != r31) {
        a.r[0] = 4u;
        a.r[1] = r31;
        (void)tc_call(0x80044e50u, &a);
        wr8(0x803be694u, (u8)r31);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    (void)tc_call(0x8003f8a8u, &a);
    return;
}
