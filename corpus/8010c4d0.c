#include "tc_rt.h"

void fn_8010c4d0(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    r3 = tc_call(0x802de9f0u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = r3;
        (void)tc_call(0x802de984u, &a);
    }
    if (r31 != 0u) {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = rd32(r31);
        r3 = tc_call(0x800a2cf8u, &a);
        r30 = r3;
        if (r3 != rd32(r31 + 4u)) {
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = rd32(r31);
            a.r[2] = rd32(r31 + 4u);
            (void)tc_call(0x800a2ce8u, &a);
        }
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0x4cu);
        a.r[0] = r3;
        (void)tc_call(0x800abe6cu, &a);
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = rd32(r31);
        a.r[2] = rd32(r31 + 0xcu);
        a.r[3] = 1u;
        (void)tc_call(0x800a2b74u, &a);
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = rd32(r31);
        a.r[2] = r30;
        (void)tc_call(0x800a2ce8u, &a);
        wr32(r31, 0xffffffffu);
        wr32(r31 + 8u, 0xffffffffu);
        wr32(r31 + 0xcu, 0u);
    }
    return;
}
