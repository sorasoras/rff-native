#include "tc_rt.h"

void fn_800b29b0(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x140u), &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x144u), &a);
        r3 = rd32(0x804863d8u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8006d7ccu, &a);
        }
        wr32(0x80571140u, 0u);
    }
    a.r[0] = param_1;
    (void)tc_call(0x800b2e68u, &a);
    r31 = param_1;
    r30 = 0u;
    do {
        r3 = rd32(r31 + 0x164cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80157e6cu, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r30 < 7);
    r4 = rd32(param_1 + 0xe88u);
    wr32(param_1 + 0xe88u, r4 | (r4 ^ 0x80000000u));
    a.r[0] = param_1;
    (void)tc_call(0x800b3dc0u, &a);
    wr32(param_1 + 0xf78u, 0u);
    a.r[0] = param_1 + 0x428u;
    a.r[1] = 1u;
    (void)tc_call(0x8014c23cu, &a);
    a.r[0] = param_1;
    (void)tc_call(0x800b516cu, &a);
    r3 = rd32(param_1 + 0x1604u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = rd32(param_1 + 0x1608u);
        (void)tc_call(0x800b2af0u, &a);
    }
    r6 = (rd32(param_1 + 0xda0u) << 2u) & 0xfffffffcu;
    wr32(r6 - 0x7fb61b90u, rd32(r6 - 0x7fb61b90u) - 1u);
    a.r[0] = param_1;
    (void)tc_call(0x8007e848u, &a);
    r3 = rd32(param_1 + 0x166cu);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80157f30u, &a);
        wr32(param_1 + 0x166cu, 0u);
    }
    return;
}
