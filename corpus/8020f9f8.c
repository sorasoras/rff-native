#include "tc_rt.h"

u32 fn_8020f9f8(u32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8020ff88u, &a);
    f1 = tc_lastf();
    wr32(param_1 + 0x74u, (rd32(param_1 + 0x74u) & 0x7fffffffu) | ((r3 << 0x1fu) & 0x80000000u));
    a.r[0] = param_1;
    a.r[1] = r3;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x88u), &a);
    if ((param_1 + 0x80u) != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x8020ff88u, &a);
        wr32(param_1 + 0x98u, r3);
    }
    return 1u;
}
