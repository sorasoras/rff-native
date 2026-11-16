#include "tc_rt.h"

void fn_801a5bcc(s32 param_1, s32 param_2)
{
    u32 r4 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        a.f[0] = (f64)rdf32(0x80575934u);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x10u;
        a.r[2] = 0u;
        (void)tc_call(0x800a94c0u, &a);
        wr32((u32)param_1 + 0xf40u, 0u);
    } else {
        if ((u32)param_2 == 1u && (s32)rd32((u32)param_1 + 0xd00u) > 0) {
            r4 = rd32((u32)param_1 + 0xdf8u);
            wr32((u32)param_1 + 0x2b0u, 1u);
            if (r4 == 1u) {
                f0 = (f64)rdf32(0x8057586cu);
                r4 = r4 + 1u;
                wr32((u32)param_1 + 0xdf8u, r4);
                wr32((u32)param_1 + 0x260u, 0xfu);
                wr32((u32)param_1 + 0xce4u, 1u);
                wrf32d((u32)param_1 + 0xce0u, f0);
            }
        }
    }
    return;
}
