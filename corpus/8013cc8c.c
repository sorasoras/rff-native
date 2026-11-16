#include "tc_rt.h"

u32 fn_8013cc8c(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0x80363d18u;
    r30 = 0u;
    while ((s32)r30 < (s32)rd32(0x80570818u)) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.f[0] = f1;
        r3 = tc_call(rd32(r31 + 4u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            r3 = rd32(((r30 << 3u) & 0xfffffff8u) - 0x7fc9c2e8u);
            return r3;
        }
        r31 = r31 + 8u;
        r30 = r30 + 1u;
    }
    r3 = 0xffffffffu;
    return r3;
}
