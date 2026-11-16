#include "tc_rt.h"

void fn_80250818(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdd20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r5 = rd32(0x80571958u);
    wr16(r5 + 0xau, (u16)((u32)rd16(r5 + 0xau) | 8u));
    r0 = rd32(0x805719a4u);
    wr8(0x805719a0u, 1u);
    if (r0 != 0u) {
        a.r[0] = 0x817fdd28u;
        (void)tc_call(0x80228148u, &a);
        a.r[0] = 0x817fdd28u;
        r3 = tc_call(0x80227f20u, &a);
        f1 = tc_lastf();
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(0x805719a4u), &a);
        a.r[0] = 0x817fdd28u;
        (void)tc_call(0x80228148u, &a);
        a.r[0] = param_2;
        (void)tc_call(0x80227f20u, &a);
    }
    a.r[0] = 0x80571998u;
    (void)tc_call(0x802300d0u, &a);
    return;
}
