#include "tc_rt.h"

void fn_80263f1c(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdd20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r3 = ppc_mulhw(1431655766, (s32)((u32)param_1 - 0xbu));
    r31 = r3 + ((r3 >> 0x1fu) & 1u);
    r0 = ((r31 << 2u) & 0xfffffffcu) - r31;
    a.r[0] = ((r0 & 0x20u) != 0u) ? 0u : (0x500000u >> (r0 & 0x1fu));
    (void)tc_call(0x8022c640u, &a);
    r30 = ((r31 << 6u) & 0xffffffc0u) - 0x7faff5d0u;
    r29 = rd32(r30 + 8u);
    wr32(r30 + 0xcu, rd32(r30 + 0xcu) & 0xfffffff7u);
    if (r29 != 0u) {
        a.r[0] = 0x817fdd28u;
        (void)tc_call(0x80228148u, &a);
        a.r[0] = 0x817fdd28u;
        f1 = tc_callf(0x80227f20u, &a);
        wr32(r30 + 8u, 0u);
        a.r[0] = r31;
        a.r[1] = param_2;
        a.f[0] = f1;
        (void)tc_call(r29, &a);
        a.r[0] = 0x817fdd28u;
        (void)tc_call(0x80228148u, &a);
        a.r[0] = param_2;
        (void)tc_call(0x80227f20u, &a);
    }
    return;
}
