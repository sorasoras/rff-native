#include "tc_rt.h"

void fn_800401d0(void)
{
    TcArgs a = {0};
    (void)tc_call(0x8003feecu, &a);
    if ((u32)rd8(0x803be690u) != 2u) {
        a.r[0] = 2u;
        (void)tc_call(0x80044e28u, &a);
    }
    if ((u32)rd8(0x803be691u) != 1u) {
        a.r[0] = 1u;
        (void)tc_call(0x80044da4u, &a);
    }
    if ((u32)rd8(0x803be696u) != 0u) {
        a.r[0] = (u32)rd8(0x803be692u);
        (void)tc_call(0x8003d790u, &a);
    }
    if ((u32)rd8(0x803be697u) != 0u) {
        a.r[0] = (u32)rd8(0x803be693u);
        (void)tc_call(0x8004e22cu, &a);
    }
    if ((u32)rd8(0x803be694u) != 0u) {
        a.r[0] = 4u;
        a.r[1] = 0u;
        (void)tc_call(0x80044e50u, &a);
        wr8(0x803be694u, 0u);
    }
    a.r[0] = 1u;
    (void)tc_call(0x80044ff8u, &a);
    return;
}
