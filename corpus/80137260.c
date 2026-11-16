#include "tc_rt.h"

void fn_80137260(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = (u32)param_1 + 0x40u;
    (void)tc_call(0x801614ccu, &a);
    a.r[0] = (u32)param_1 + 0x1c0u;
    (void)tc_call(0x801614ccu, &a);
    r6 = rd32(0x8033a26cu);
    r5 = rd32(0x8033a270u);
    r0 = rd32(0x8033a274u);
    wr32(0x817fdfa8u, rd32(0x8033a268u));
    wr32(0x817fdfacu, r6);
    wr32(0x817fdfb0u, r5);
    wr32(0x817fdfb4u, r0);
    a.r[0] = (u32)param_1 + 0x1c0u;
    a.r[1] = 0x817fdfa8u;
    (void)tc_call(0x80161708u, &a);
    r6 = rd32(0x8033a27cu);
    r5 = rd32(0x8033a280u);
    r0 = (rd32((u32)param_1 + 0x37cu) << 2u) & 0xfffffffcu;
    r4 = rd32(0x8033a284u);
    wr32(0x817fdf98u, rd32(0x8033a278u));
    wr32(0x817fdf9cu, r6);
    wr32(0x817fdfa0u, r5);
    wr32(0x817fdfa4u, r4);
    a.r[0] = rd32(r0 - 0x7e802068u);
    r3 = tc_call(0x800f92e8u, &a);
    f1 = tc_lastf();
    wr32((u32)param_1 + 0x3cu, r3);
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
    a.r[0] = (u32)param_1 + 0x1b0u;
    a.r[1] = rd32((u32)param_1 + 0x3cu);
    a.r[2] = 0x80571250u;
    (void)tc_call(0x80163f48u, &a);
    a.r[0] = (u32)param_1 + 0x32cu;
    a.r[1] = rd32((u32)param_1 + 0x3cu);
    (void)tc_call(0x801f0e3cu, &a);
    r29 = rd32((u32)param_1 + 0xcu);
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
    r0 = rd32((u32)param_1 + 0xcu);
    r6 = 0u;
    wr32((u32)param_1 + 0x34u, r3);
    r4 = 0u;
    r5 = 0u;
    wr32((u32)param_1 + 0x38u, r0);
    for (;;) {
        r0 = rd32((u32)param_1 + 0xcu);
        if ((s32)r6 >= (s32)r0) break;
        r6 = r6 + 1u;
        r0 = rd32((u32)param_1 + 0x34u) + r4;
        r4 = r4 + 0xd0u;
        wr32(rd32((u32)param_1 + 0x2cu) + r5, r0);
        r5 = r5 + 4u;
    }
    r28 = 0u;
    if ((s32)r0 > 0) {
        while ((s32)r28 < (s32)rd32((u32)param_1 + 0xcu)) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x817fdfb8u;
            a.r[1] = 0x8033a315u;
            a.r[2] = 0x8033a30fu;
            a.r[3] = r28;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x8025b994u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x8033a31cu;
            a.r[1] = 0x817fdfb8u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80228554u, &a);
            a.r[0] = 0x80571250u;
            a.r[1] = rd32((u32)param_1 + 0x3cu);
            a.r[2] = 0x817fdfb8u;
            r3 = tc_call(0x80103254u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = r28;
            a.r[2] = r3;
            f1 = tc_callf(0x801894c8u, &a);
            r28 = r28 + 1u;
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80197454u, &a);
    r0 = (u32)param_1 + 0x40u;
    r5 = 0u;
    r4 = 0u;
    for (;;) {
        r30 = rd32((u32)param_1 + 0xcu);
        if ((s32)r5 >= (s32)r30) break;
        r5 = r5 + 1u;
        r3 = rd32(rd32((u32)param_1 + 0x2cu) + r4);
        r4 = r4 + 4u;
        wr32(r3 + 0xa8u, r0);
    }
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = (r30 * 0xd0u) + 0x10u;
    r3 = tc_call(0x801b39d8u, &a);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x8016172cu;
        a.r[2] = 0x801617b8u;
        a.r[3] = 0xd0u;
        a.r[4] = r30;
        r3 = tc_call(0x80255464u, &a);
    }
    wr32((u32)param_1 + 0x1bcu, r3);
    r30 = (u32)param_1 + 0x1c0u;
    r27 = 0u;
    r28 = 0u;
    while ((s32)r27 < (s32)rd32((u32)param_1 + 0xcu)) {
        r29 = rd32((u32)param_1 + 0x1bcu) + r28;
        wr32(r29 + 0xa8u, r30);
        a.r[0] = (u32)param_1;
        a.r[1] = r27;
        r3 = tc_call(0x801894d8u, &a);
        wr32(r29 + 0x54u, r3);
        r28 = r28 + 0xd0u;
        r27 = r27 + 1u;
    }
    wr32((u32)param_1 + 0x328u, 0u);
    wr32((u32)param_1 + 0x1acu, 0u);
    return;
}
