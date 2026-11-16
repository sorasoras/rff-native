#include "tc_rt.h"

u32 fn_8022d940(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 0u;
    r3 = 0u;
    r31 = rd32(0x80571500u);
    while (r31 != 0u) {
        if (r30 != 0u && r3 != rd32(r31 + 4u)) {
            r3 = tc_call(0x8022e858u, &a);
            r30 = r30 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            return (ppc_cntlzw(r30) >> 5u) & 0x7ffffffu;
        }
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.f[0] = f1;
        r3 = tc_call(rd32(r31), &a);
        f1 = tc_lastf();
        r0 = ppc_cntlzw(r3);
        r3 = rd32(r31 + 4u);
        r0 = (r0 >> 5u) & 0x7ffffffu;
        r31 = rd32(r31 + 8u);
        r30 = r30 | r0;
    }
    r3 = tc_call(0x8022e858u, &a);
    r30 = r30 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
    return (ppc_cntlzw(r30) >> 5u) & 0x7ffffffu;
}
