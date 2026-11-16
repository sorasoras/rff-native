#include "tc_rt.h"

void fn_801233bc(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r29 = rd32(param_1 + 0xcu);
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = (r29 * 0xd0u) + 0x10u;
    r3 = tc_call(0x801b39d8u, &a);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x8012353cu;
        a.r[2] = 0x801221f8u;
        a.r[3] = 0xd0u;
        a.r[4] = r29;
        r3 = tc_call(0x80255464u, &a);
    }
    wr32(param_1 + 0x34u, r3);
    a.r[0] = param_1 + 0x40u;
    (void)tc_call(0x801614ccu, &a);
    a.r[0] = param_1 + 0x1a8u;
    (void)tc_call(0x801614ccu, &a);
    r6 = rd32(0x803399d4u);
    r5 = rd32(0x803399d8u);
    r0 = rd32(0x803399dcu);
    wr32(0x817fdfc8u, rd32(0x803399d0u));
    wr32(0x817fdfccu, r6);
    wr32(0x817fdfd0u, r5);
    wr32(0x817fdfd4u, r0);
    a.r[0] = param_1 + 0x1a8u;
    a.r[1] = 0x817fdfc8u;
    f1 = tc_callf(0x80161708u, &a);
    r30 = param_1 + 0x40u;
    r26 = 0u;
    r28 = 0u;
    r29 = 0u;
    r27 = 0u;
    while ((s32)r26 < (s32)rd32(param_1 + 0xcu)) {
        r25 = rd32(param_1 + 0x34u) + r28;
        wr32(rd32(param_1 + 0x2cu) + r29, r25);
        wr16(r25 + 0xbcu, rd16(rd32(param_1 + 0x310u) + r27));
        a.r[0] = r25;
        (void)tc_call(0x80161c98u, &a);
        wr8(r25 + 0xbfu, (u8)rd16(rd32(param_1 + 0x314u) + r27));
        a.r[0] = r25;
        f1 = tc_callf(0x80161a60u, &a);
        wr32(r25 + 0xa8u, r30);
        r28 = r28 + 0xd0u;
        r29 = r29 + 4u;
        r27 = r27 + 2u;
        r26 = r26 + 1u;
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
        a.r[1] = rd32(param_1 + 0x3cu);
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
    return;
}
