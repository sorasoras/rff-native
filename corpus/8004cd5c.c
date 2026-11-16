#include "tc_rt.h"

void fn_8004cd5c(u32 param_1)
{
    TcArgs a = {0};
    (void)tc_call(0x8024f870u, &a);
    if ((param_1 & 1u) != 0u) {
        a.r[0] = 9u;
        a.r[1] = 1u;
        (void)tc_call(0x8024f27cu, &a);
    }
    if ((param_1 & 2u) != 0u) {
        a.r[0] = 0xau;
        a.r[1] = 1u;
        (void)tc_call(0x8024f27cu, &a);
    }
    if ((param_1 & 8u) != 0u) {
        a.r[0] = 0xbu;
        a.r[1] = 1u;
        (void)tc_call(0x8024f27cu, &a);
    }
    if ((param_1 & 0x100u) != 0u) {
        a.r[0] = 0xdu;
        a.r[1] = 1u;
        (void)tc_call(0x8024f27cu, &a);
    }
    if ((param_1 & 0x10u) != 0u) {
        a.r[0] = 0u;
        a.r[1] = 1u;
        (void)tc_call(0x8024f27cu, &a);
    }
    return;
}
