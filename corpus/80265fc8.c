#include "tc_rt.h"

u32 fn_80265fc8(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80265e14u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if ((rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fc70d08u) & 0x80u) != 0u) {
        r3 = (((u32)param_1 << 4u) & 0xfffffff0u) - 0x7faff330u;
        r0 = rd32(r3);
        if (r0 == param_2) {
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            return r30;
        }
        if (r0 == 0u) {
            wr32(r3, param_2);
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            return r30;
        }
        r0 = rd32(r3 + 4u);
        if (r0 == param_2) {
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            return r30;
        }
        if (r0 == 0u) {
            wr32(r3 + 4u, param_2);
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            return r30;
        }
        r0 = rd32(r3 + 8u);
        if (r0 == param_2) {
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            return r30;
        }
        if (r0 == 0u) {
            wr32(r3 + 8u, param_2);
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            return r30;
        }
        r0 = rd32(r3 + 0xcu);
        if (r0 == param_2 || r0 != 0u) {
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            return r30;
        }
        wr32(r3 + 0xcu, param_2);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = r3;
        a.f[0] = f1;
        (void)tc_call(param_2, &a);
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return r30;
}
