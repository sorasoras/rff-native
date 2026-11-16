#include "tc_rt.h"

void fn_80202850(u32 param_1)
{
    u32 r3 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1 + 0x38u);
    r3 = tc_call(0x800f93bcu, &a);
    f1 = tc_lastf();
    wr32(param_1 + 0x34u, r3);
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
    a.r[0] = param_1 + 0x40u;
    a.r[1] = rd32(param_1 + 0x34u);
    (void)tc_call(0x801f0e3cu, &a);
    a.r[0] = param_1 + 0x94u;
    (void)tc_call(0x801614ccu, &a);
    r28 = rd32(param_1 + 0xcu);
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = (r28 * 0xd0u) + 0x10u;
    r3 = tc_call(0x801b39d8u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x802029d0u;
        a.r[2] = 0x802027a8u;
        a.r[3] = 0xd0u;
        a.r[4] = r28;
        r3 = tc_call(0x80255464u, &a);
        f1 = tc_lastf();
    }
    wr32(param_1 + 0x90u, r3);
    r29 = param_1 + 0x94u;
    r25 = 0u;
    r30 = 0u;
    r27 = 0u;
    r26 = 0u;
    while ((s32)r25 < (s32)rd32(param_1 + 0xcu)) {
        wr32(rd32(param_1 + 0x2cu) + r26, rd32(param_1 + 0x90u) + r27);
        a.r[0] = rd32(rd32(param_1 + 0x2cu) + r26) + 0xbcu;
        a.r[1] = r30 - 0x7fb66cd0u;
        a.r[2] = 4u;
        (void)tc_call(0x80004338u, &a);
        a.r[0] = rd32(rd32(param_1 + 0x2cu) + r26);
        f1 = tc_callf(0x80161a60u, &a);
        r27 = r27 + 0xd0u;
        r25 = r25 + 1u;
        r30 = r30 + 4u;
        r3 = rd32(rd32(param_1 + 0x2cu) + r26);
        r26 = r26 + 4u;
        wr32(r3 + 0xa8u, r29);
    }
    r25 = 0u;
    r28 = 0u;
    while ((s32)r25 < (s32)rd32(param_1)) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80571250u;
        a.r[1] = rd32(param_1 + 0x34u);
        a.r[2] = r25;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x801033bcu, &a);
        r26 = r3;
        a.r[0] = param_1;
        a.r[1] = r25;
        a.r[2] = r3;
        f1 = tc_callf(0x801894c8u, &a);
        r25 = r25 + 1u;
        r3 = rd32(rd32(param_1 + 0x2cu) + r28);
        r28 = r28 + 4u;
        wr32(r3 + 0x54u, r26);
    }
    a.r[0] = param_1;
    (void)tc_call(0x80197454u, &a);
    wr32(param_1 + 0x1fcu, 1u);
    return;
}
