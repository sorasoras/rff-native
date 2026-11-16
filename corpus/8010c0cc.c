#include "tc_rt.h"

void fn_8010c0cc(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r12 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)tc_call(0x800a7460u, &a);
    wr32((u32)param_1 + 0x10u, 0xffffffffu);
    wr32((u32)param_1 + 0x14u, 0xffffffffu);
    a.r[0] = param_2;
    a.r[1] = 0u;
    a.r[2] = 7u;
    r3 = tc_call(0x800adf14u, &a);
    f1 = tc_lastf();
    r4 = 0x803616fcu;
    r30 = r3;
    r31 = ((r3 << 2u) & 0xfffffffcu) - 0x7fc9e904u;
    for (;;) {
        r12 = rd32(r31);
        if (r12 == 0u) break;
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        r3 = tc_call(r12, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) break;
        r31 = r31 + 4u;
        r30 = r30 + 1u;
    }
    (void)tc_call(0x8010c23cu, &a);
    a.r[0] = 1u;
    a.r[1] = 0xffffffffu;
    (void)tc_call(0x8010b95cu, &a);
    a.r[0] = 1u;
    a.r[1] = 0xffffffffu;
    (void)tc_call(0x8010b944u, &a);
    if (rd32(((r30 << 2u) & 0xfffffffcu) - 0x7fc9e904u) != 0u) {
        r0 = r30 + 1u;
        r3 = 7u;
        if ((s32)r0 < 7) {
            r3 = r0;
        }
        wr32((u32)param_1 + 0xcu, r3);
    }
    return;
}
