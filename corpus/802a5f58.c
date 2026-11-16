#include "tc_rt.h"

u32 fn_802a5f58(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_3 != 0u) {
        wr16(0x805411dau, (u16)param_2);
    } else {
        a.r[0] = 0u;
        a.r[1] = param_1;
        r3 = tc_call(0x802aae88u, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            if ((u32)rd8(0x80540a20u) >= 2u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80001u;
                a.r[1] = 0x80395b80u;
                a.r[2] = param_1;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc6cu, &a);
            }
            r3 = 0u;
            return r3;
        }
        r3 = rd32(r3 + 0x10u);
        if ((r3 != 0u && (u32)rd8(r3) != 0u) && rd32(r3 + 4u) == 4u) {
            wr16(r3 + 0x58u, (u16)param_2);
            r3 = 1u;
            return r3;
        }
        r3 = 0u;
        return r3;
    }
    r3 = 1u;
    return r3;
}
