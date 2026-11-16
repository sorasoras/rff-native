#include "tc_rt.h"

u32 fn_8028ef3c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 ctr = 0, r3 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_2;
    (void)param_4;
    wr32(0x817fded0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 1u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = 0x817fded8u;
    a.r[1] = param_1;
    (void)tc_call(0x8028d2a4u, &a);
    a.r[0] = 0x817fdedeu;
    a.r[1] = param_3;
    a.r[2] = 0x20u;
    f1 = tc_callf(0x8025bdf4u, &a);
    ctr = 0x17u;
    do {
        if ((u32)param_5 == rd32(((r31 << 2u) & 0x3fcu) - 0x7fcb7e00u)) {
            wr8(0x817fdfd6u, (u8)r31);
            break;
        }
        r31 = r31 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r12 = rd32(0x8053d644u);
    if (r12 == 0u || (r31 & 0xffu) > 0x17u) {
        r3 = 0xbu;
    } else {
        a.r[0] = 4u;
        a.r[1] = 0x817fded8u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
        r3 = 1u;
    }
    return r3;
}
