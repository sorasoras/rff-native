#include "tc_rt.h"

void fn_8021ff00(s32 param_1)
{
    u32 r3 = 0, r27 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x60cu;
    r3 = tc_call(0x800510acu, &a);
    r29 = r3;
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = r29;
    r3 = tc_call(0x801b39d8u, &a);
    wr32((u32)param_1 + 0xbb0u, r3);
    a.r[0] = r3;
    a.r[1] = 0x60cu;
    a.r[2] = 0u;
    a.r[3] = 0u;
    (void)tc_call(0x801e5b50u, &a);
    (void)tc_call(0x801e5c20u, &a);
    a.r[0] = 0x60eu;
    r3 = tc_call(0x801ebc04u, &a);
    wr32((u32)param_1 + 0xbacu, r3);
    r29 = (u32)param_1;
    r27 = 0u;
    while ((s32)r27 < (s32)rd32((u32)param_1 + 0xcu)) {
        a.r[0] = rd32((u32)param_1 + 0xbb0u);
        a.r[1] = 0u;
        a.r[2] = 0u;
        r3 = tc_call(0x800f9458u, &a);
        f1 = tc_lastf();
        wr32(r29 + 0x2cu, r3);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x800fef2cu, &a);
        a.r[0] = r27;
        r3 = tc_call(0x80220000u, &a);
        a.r[0] = 0x8049df80u;
        a.r[1] = r3;
        r3 = tc_call(0x800c94f8u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            wr32(r29 + 0x84u, r27 + 1u);
        } else {
            wr32(r29 + 0x84u, 0u);
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80571250u;
        a.r[1] = rd32(r29 + 0x2cu);
        a.r[2] = 0x8033c9a0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x801032a4u, &a);
        wr32(r29 + 0x80u, r3);
        r29 = r29 + 0x5cu;
        r27 = r27 + 1u;
    }
    wr32((u32)param_1 + 0x84u, 1u);
    return;
}
