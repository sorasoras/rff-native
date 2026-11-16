#include "tc_rt.h"

u32 fn_801319c8(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 4u;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    r5 = rd32((u32)param_1 + 0x45cu);
    r30 = r3;
    r4 = 0u;
    if (rd32(r5 + 0x110u) == 0u) {
        r4 = 0u;
    } else {
        r0 = rd32(r5 + 0x114u);
        if ((s32)r0 >= 0) {
            r0 = r0 * 0x24u;
            r4 = rd32(r5 + 0x10cu) + r0;
        }
    }
    if (r4 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x458u);
        a.r[1] = r4;
        (void)tc_call(0x80137ab4u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80132de4u, &a);
    a.r[0] = rd32((u32)param_1 + 0x450u);
    f1 = tc_callf(0x800fec80u, &a);
    r3 = rd32((u32)param_1 + 0x454u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x18u), &a);
    a.r[0] = rd32((u32)param_1 + 0x45cu);
    f1 = tc_callf(0x80138440u, &a);
    r3 = rd32((u32)param_1 + 0x458u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x18u), &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80131fa8u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80132d0cu, &a);
    a.r[0] = (u32)param_1 + 0x47cu;
    (void)tc_call(0x80190ff8u, &a);
    a.r[0] = (u32)param_1 + 0x464u;
    (void)tc_call(0x80221b28u, &a);
    a.r[0] = (u32)param_1 + 0x64cu;
    (void)tc_call(0x8014b36cu, &a);
    a.r[0] = (u32)param_1 + 0x48u;
    (void)tc_call(0x80119f48u, &a);
    r31 = (u32)param_1 + 0x7c8u;
    r29 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x8020f030u, &a);
        r29 = r29 + 1u;
        r31 = r31 + 0x38u;
    } while ((s32)r29 < 5);
    (void)tc_call(0x80103018u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80132c64u, &a);
    return r30;
}
