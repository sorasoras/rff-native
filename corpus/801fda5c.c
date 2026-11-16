#include "tc_rt.h"

void fn_801fda5c(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 0u;
    r31 = (u32)param_1;
    do {
        r3 = rd32(r31 + 0x14u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x800fec80u, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r30 < 5);
    if (rd32(rd32(0x805711ccu) + 0xfcu) != 2u) {
        a.r[0] = (u32)param_1 + 0x9e0u;
        a.r[1] = 0u;
        (void)tc_call(0x801e6354u, &a);
    } else {
        a.r[0] = (u32)param_1 + 0x9e0u;
        a.r[1] = 8u;
        (void)tc_call(0x801e6354u, &a);
    }
    a.r[0] = (u32)param_1 + 0x9e0u;
    f1 = tc_callf(0x801e6364u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x804de14cu;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x801f41c0u, &a);
    a.r[0] = (u32)param_1 + 0xd0u;
    a.r[1] = 1u;
    (void)tc_call(0x800f857cu, &a);
    a.r[0] = (u32)param_1 + 0x10cu;
    (void)tc_call(0x80130830u, &a);
    return;
}
