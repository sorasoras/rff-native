#include "tc_rt.h"

void fn_801bdd18(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1 + 0x168u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = param_1 + 0x40u;
    (void)tc_call(0x80163f60u, &a);
    r31 = param_1 + 0x2d8u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x801f10a4u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x68u;
    } while ((s32)r30 < 10);
    a.r[0] = param_1 + 0x4cu;
    f1 = tc_callf(0x80190984u, &a);
    r4 = tc_lastr4();
    r30 = 0u;
    r31 = 0u;
    while ((s32)r30 < (s32)rd32(param_1)) {
        r3 = rd32(param_1 + 0x164u) + r31;
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3 + 0xccu) + 0xcu), &a);
        r4 = tc_lastr4();
        r31 = r31 + 0xd0u;
        r30 = r30 + 1u;
    }
    a.r[0] = param_1 + 0x168u;
    (void)tc_call(0x80161594u, &a);
    return;
}
