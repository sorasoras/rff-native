#include "tc_rt.h"

void fn_8012eea0(u32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = 0x8049c500u;
    a.r[1] = rd32(param_1 + 0xcu);
    r3 = tc_call(0x800c8794u, &a);
    f1 = tc_lastf();
    r0 = rd32(param_1 + 8u);
    r31 = r3;
    wr32(param_1, r3);
    c0eq = r0 == 0u;
    if (!c0eq) {
        if (!c0eq) {
            a.r[0] = r0;
            a.r[1] = 1u;
            a.r[2] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r0 + 0x64u) + 8u), &a);
        }
        wr32(param_1 + 8u, 0u);
    }
    if (r31 < 0xabu) {
        a.r[0] = 0x8049c500u;
        a.r[1] = rd32(param_1 + 0xcu);
        r3 = tc_call(0x800c8ca4u, &a);
        if ((r3 & 0x10u) != 0u) {
            r3 = 0xffffffffu;
        } else {
            wr32(0x817fdfe8u, r31);
            a.r[0] = 0x817fdfe8u;
            r3 = tc_call(0x801496d4u, &a);
        }
        a.r[0] = r3;
        r3 = tc_call(0x801bfaa8u, &a);
        r30 = r3;
        a.r[0] = 0x68u;
        r3 = tc_call(0x801ed134u, &a);
        r31 = r3;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r30;
            a.r[2] = 0xffffffffu;
            (void)tc_call(0x801ec1f4u, &a);
        }
        wr32(param_1 + 8u, r31);
    }
    return;
}
