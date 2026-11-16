#include "tc_rt.h"

void fn_801bb634(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = rd32(param_1 + 0x1a8u);
    r3 = tc_call(0x800f93bcu, &a);
    f1 = tc_lastf();
    wr32(param_1 + 0x1a0u, r3);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x800fed0cu, &a);
    a.r[0] = param_1 + 0x38u;
    (void)tc_call(0x801614ccu, &a);
    r29 = rd32(param_1 + 0xcu);
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = (r29 * 0xd0u) + 0x10u;
    r3 = tc_call(0x801b39d8u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x8016172cu;
        a.r[2] = 0x801617b8u;
        a.r[3] = 0xd0u;
        a.r[4] = r29;
        r3 = tc_call(0x80255464u, &a);
        f1 = tc_lastf();
    }
    wr32(param_1 + 0x34u, r3);
    r6 = 0u;
    r3 = 0u;
    r4 = 0u;
    while ((s32)r6 < (s32)rd32(param_1 + 0xcu)) {
        r6 = r6 + 1u;
        r0 = rd32(param_1 + 0x34u) + r3;
        r3 = r3 + 0xd0u;
        wr32(rd32(param_1 + 0x2cu) + r4, r0);
        r4 = r4 + 4u;
    }
    wr16(0x817fdfe8u, 0x2e8u);
    r29 = 0u;
    wr8(0x817fdfeau, 1u);
    r30 = 0x1ceu;
    wr8(0x817fdfebu, 1u);
    do {
        r0 = 0u;
        if ((s32)r30 >= 462 && (s32)r30 <= 503) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            r0 = (ppc_cntlzw((u32)rd8(r30 - 0x7fb6709au) - 1u) >> 5u) & 0x7ffffffu;
        } else {
            r0 = 0u;
        }
        if (r0 != 0u) {
            wr16(0x817fdfe8u, (u16)r30);
            a.r[0] = rd32(rd32(param_1 + 0x2cu) + r29) + 0xbcu;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = 4u;
            (void)tc_call(0x80004338u, &a);
            a.r[0] = rd32(rd32(param_1 + 0x2cu) + r29);
            f1 = tc_callf(0x80161a60u, &a);
            r3 = rd32(rd32(param_1 + 0x2cu) + r29);
            r29 = r29 + 4u;
            wr32(r3 + 0xa8u, param_1 + 0x38u);
        }
        r30 = r30 + 1u;
    } while ((s32)r30 <= 503);
    r29 = 0u;
    r30 = 0u;
    while ((s32)r29 < (s32)rd32(param_1)) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80571250u;
        a.r[1] = rd32(param_1 + 0x1a0u);
        a.r[2] = r29;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x801033bcu, &a);
        r28 = r3;
        a.r[0] = param_1;
        a.r[1] = r29;
        a.r[2] = r3;
        f1 = tc_callf(0x801894c8u, &a);
        r29 = r29 + 1u;
        r3 = rd32(rd32(param_1 + 0x2cu) + r30);
        r30 = r30 + 4u;
        wr32(r3 + 0x54u, r28);
    }
    a.r[0] = param_1;
    (void)tc_call(0x80197454u, &a);
    wr32(param_1 + 0x1acu, 1u);
    return;
}
