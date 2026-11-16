#include "tc_rt.h"

void fn_80242e74(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdd20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr16(0xcc00500au, (u16)(((u32)rd16(0xcc00500au) & 0xffffff5fu) | 8u));
    a.r[0] = 0x817fdd28u;
    (void)tc_call(0x80228148u, &a);
    a.r[0] = 0x817fdd28u;
    f1 = tc_callf(0x80227f20u, &a);
    r3 = rd32(0x805717d8u);
    if (r3 != 0u && rd32(0x805717a4u) == 0u) {
        r0 = rd32(0x805717d4u);
        wr32(0x805717a4u, 1u);
        if (r0 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80242f1cu, &a);
        } else {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(r3, &a);
        }
        wr32(0x805717a4u, 0u);
    }
    a.r[0] = 0x817fdd28u;
    (void)tc_call(0x80228148u, &a);
    a.r[0] = param_2;
    (void)tc_call(0x80227f20u, &a);
    return;
}
