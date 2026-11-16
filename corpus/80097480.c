#include "tc_rt.h"

void fn_80097480(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x64u);
    (void)tc_call(0x8019f198u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    (void)tc_call(0x8009a64cu, &a);
    wr32(rd32((u32)param_1 + 0x4cu) + 0x48u, 1u);
    a.r[0] = rd32((u32)param_1 + 0x40u);
    (void)tc_call(0x80159b14u, &a);
    a.r[0] = rd32((u32)param_1 + 8u);
    r3 = tc_call(0x800ae1d0u, &a);
    if (r3 == 0u) {
        a.r[0] = rd32((u32)param_1 + 0x60u);
        (void)tc_call(0x802138dcu, &a);
    }
    r3 = tc_call(0x801567a0u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3) + 0x1cu), &a);
    a.r[0] = 2u;
    (void)tc_call(0x8014da48u, &a);
    a.r[0] = 2u;
    a.r[1] = 1u;
    (void)tc_call(0x800a730cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x28u);
    (void)tc_call(0x8011b138u, &a);
    r3 = tc_call(0x8009a63cu, &a);
    r31 = r3;
    r30 = 1u;
    while ((s32)r30 < (s32)r31) {
        a.r[0] = rd32((u32)param_1 + 0x60u);
        a.r[1] = r30;
        a.r[2] = 1u;
        (void)tc_call(0x80213504u, &a);
        r30 = r30 + 1u;
    }
    a.r[0] = rd32((u32)param_1 + 0x24u);
    (void)tc_call(0x80114decu, &a);
    a.r[0] = rd32((u32)param_1 + 0x38u);
    (void)tc_call(0x80141d68u, &a);
    a.r[0] = rd32((u32)param_1 + 0x4cu);
    f1 = tc_callf(0x800abddcu, &a);
    r4 = tc_lastr4();
    r30 = rd32(0x8046ad74u);
    while (r30 != 0u) {
        r3 = r30;
        r30 = rd32(r30);
        r31 = rd32(r3 + 8u);
        a.r[0] = r31;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r31) + 0x13cu), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u && rd32(r31 + 0x1b0u) != 0u) {
            a.r[0] = r31;
            f1 = tc_callf(0x80074de4u, &a);
            r4 = tc_lastr4();
        }
    }
    (void)tc_call(0x80074c4cu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x8009a64cu, &a);
    return;
}
