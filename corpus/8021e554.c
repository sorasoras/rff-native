#include "tc_rt.h"

void fn_8021e554(s32 param_1)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu);
    r29 = r30 + 0x1528u;
    r28 = r30 + 0x1580u;
    a.r[0] = r30 + 0x14d8u;
    a.r[1] = 0x8033c946u;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = r30 + 0x14d8u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    if (rd32((u32)param_1 + 0x24u) == 0u) {
        a.r[0] = r29 + 8u;
        a.r[1] = 0x8033c94du;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = r29 + 8u;
        a.r[1] = 0u;
        (void)tc_call(0x801f10b8u, &a);
        a.r[0] = r28 + 8u;
        a.r[1] = 0x8033c93au;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = r28 + 8u;
        a.r[1] = 0u;
        (void)tc_call(0x801f10b8u, &a);
    } else {
        a.r[0] = r29 + 8u;
        a.r[1] = 0x8033c93au;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = r29 + 8u;
        a.r[1] = 0u;
        (void)tc_call(0x801f10b8u, &a);
        a.r[0] = r28 + 8u;
        a.r[1] = 0x8033c94du;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = r28 + 8u;
        a.r[1] = 0u;
        (void)tc_call(0x801f10b8u, &a);
    }
    r3 = rd32((u32)param_1 + 0x1cu);
    wr32((u32)param_1 + 0x20u, 0u);
    r3 = rd32(r3 + 0x1cu);
    r3 = r3 + 0x44u;
    a.r[0] = r3;
    a.r[1] = 1u;
    (void)tc_call(0x8011a004u, &a);
    a.r[0] = 0x804b9db0u;
    a.r[1] = 0xffffffffu;
    (void)tc_call(0x8011f4e4u, &a);
    return;
}
