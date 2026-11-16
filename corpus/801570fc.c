#include "tc_rt.h"

void fn_801570fc(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(param_1 + 0x54u, 0u);
    if (rd32(0x8057115cu) == 0u) {
        r0 = (u32)rd8(param_1 + 0x52u);
        wr32(param_1 + 0x24u, 1u);
        if (r0 == 0xffu || (u32)rd8(param_1 + 0x53u) == 0xffu) {
            a.r[0] = param_1;
            (void)tc_call(0x801568d4u, &a);
        }
        a.r[0] = param_1;
        f1 = tc_callf(0x8015693cu, &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_1) + 0x14u), &a);
        r3 = rd32(param_1 + 0x20u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = param_1;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0x14u), &a);
        }
    }
    return;
}
