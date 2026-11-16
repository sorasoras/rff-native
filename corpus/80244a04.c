#include "tc_rt.h"

s32 fn_80244a04(void)
{
    u32 c0eq = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r12 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r3 = tc_call(0x8023029cu, &a);
    wr32(0x804e9700u, r3);
    wr32(0x804e9704u, tc_lastr4());
    r3 = tc_call(0x80242ca8u, &a);
    r3 = (r3 >> 2u) & 0x3fffffffu;
    r3 = 0x60u - r3;
    r30 = r3 * 0xed5u;
    if (rd32(0x80571868u) == 1u) {
        a.r[0] = 0u;
        (void)tc_call(0x80245be0u, &a);
    } else {
        a.r[0] = 0x5f50u;
        (void)tc_call(0x80245be0u, &a);
    }
    (void)tc_call(0x80245348u, &a);
    r3 = tc_call(0x80243f84u, &a);
    r29 = r3;
    a.r[0] = 0xbabe0080u;
    (void)tc_call(0x8024cbc8u, &a);
    do {
        r3 = tc_call(0x8024cb94u, &a);
    } while (r3 != 0u);
    a.r[0] = r29;
    (void)tc_call(0x8024cbc8u, &a);
    do {
        r3 = tc_call(0x8024cb94u, &a);
    } while (r3 != 0u);
    (void)tc_call(0x802431fcu, &a);
    r3 = tc_call(0x8023029cu, &a);
    wr32(0x804e970cu, tc_lastr4());
    wr32(0x804e9708u, r3);
    (void)tc_call(0x80243a68u, &a);
    r3 = tc_call(0x8023029cu, &a);
    wr32(0x804e9714u, tc_lastr4());
    wr32(0x804e9710u, r3);
    r3 = tc_call(0x8023029cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r12 = rd32(0x80571884u);
    wr32(0x804e971cu, r4);
    wr32(0x804e9718u, r3);
    if (r12 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    }
    r3 = tc_call(0x8023029cu, &a);
    r7 = rd32(0x80571860u);
    r0 = rd32(0x80571864u);
    r6 = (r7 << 1u) & 0xfffffffeu;
    r7 = r7 + 0x12u;
    r6 = r6 - 0x7fb168c0u;
    wr32(0x804e9724u, tc_lastr4());
    wr32(0x804e9720u, r3);
    wr32(0x817fdfd8u, r6);
    wr32(0x817fdfdcu, r6 + 0x168u);
    wr32(0x817fdfe0u, r6 + 0x2d0u);
    wr32(0x817fdfe4u, r6 + 0x438u);
    if ((s32)r7 >= (s32)r0) {
        r7 = 0u;
    }
    r4 = rd32(0x8057185cu);
    r3 = rd32(0x80571860u);
    if ((s32)r4 >= (s32)r3 && (s32)r4 < (s32)(r3 + 0x12u)) {
        wr32(0x8057185cu, r7);
    }
    r0 = rd32(0x80571890u);
    wr32(0x80571860u, r7);
    r0 = r0 * 0x180u;
    a.r[0] = 0x804e9ce0u;
    a.r[1] = r0 - 0x7fb16020u;
    a.r[2] = 0x817fdfd8u;
    (void)tc_call(0x80243fb4u, &a);
    c0eq = rd32(0x80571868u) == 1u;
    wr32(0x80571890u, rd32(0x80571890u) + 1u);
    if (c0eq) {
        r4 = rd32(0x80571890u);
        wr32(0x80571890u, r4 - (((ppc_mulhwu(0xaaaaaaabu, r4) >> 1u) & 0x7fffffffu) * 3u));
    } else {
        wr32(0x80571890u, rd32(0x80571890u) & 1u);
        a.r[0] = (rd32(0x80571890u) * 0x180u) - 0x7fb16020u;
        a.r[1] = 0x180u;
        (void)tc_call(0x80242c04u, &a);
    }
    r3 = tc_call(0x8023029cu, &a);
    r29 = 0x804e9700u;
    wr32(0x804e972cu, tc_lastr4());
    wr32(0x804e9728u, r3);
    r3 = tc_call(0x80245688u, &a);
    wr32(0x804e9730u, r3);
    r3 = tc_call(0x802465c8u, &a);
    if (r3 != 0u) {
        ctr = 7u;
        do {
            wr8(r3, rd8(r29));
            wr8(r3 + 1u, rd8(r29 + 1u));
            wr8(r3 + 2u, rd8(r29 + 2u));
            wr8(r3 + 3u, rd8(r29 + 3u));
            wr8(r3 + 4u, rd8(r29 + 4u));
            wr8(r3 + 5u, rd8(r29 + 5u));
            wr8(r3 + 6u, rd8(r29 + 6u));
            r0 = (u32)rd8(r29 + 7u);
            r29 = r29 + 8u;
            wr8(r3 + 7u, (u8)r0);
            r3 = r3 + 8u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return (s32)r30;
}
