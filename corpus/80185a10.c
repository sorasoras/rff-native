#include "tc_rt.h"

void fn_80185a10(u32 param_1)
{
    u32 r3 = 0, r22 = 0, r23 = 0, r24 = 0, r26 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1 + 0x3cu;
    f1 = tc_callf(0x8007ae84u, &a);
    r29 = 0u;
    r26 = param_1 + 0x3cu;
    r27 = 0u;
    r31 = 0u;
    r30 = 0u;
    while ((s32)r29 < (s32)rd32(param_1 + 0xcu)) {
        wr32(rd32(param_1 + 0x2cu) + r30, rd32(param_1 + 0x34u) + r31);
        a.r[0] = rd32(rd32(param_1 + 0x2cu) + r30);
        (void)tc_call(0x80161c98u, &a);
        r22 = rd32(rd32(param_1 + 0x2cu) + r30);
        a.r[0] = r22;
        (void)tc_call(0x80161ac4u, &a);
        wr16(r22 + 0xbcu, 0x2e8u);
        wr8(r22 + 0xbeu, 0u);
        wr8(r22 + 0xbfu, 0u);
        a.r[0] = rd32(rd32(param_1 + 0x2cu) + r30) + 0xbcu;
        a.r[1] = r27 - 0x7fb66dc0u;
        a.r[2] = 4u;
        (void)tc_call(0x80004338u, &a);
        a.r[0] = rd32(rd32(param_1 + 0x2cu) + r30);
        f1 = tc_callf(0x80161a60u, &a);
        r31 = r31 + 0xd0u;
        r29 = r29 + 1u;
        r27 = r27 + 4u;
        r3 = rd32(rd32(param_1 + 0x2cu) + r30);
        r30 = r30 + 4u;
        wr32(r3 + 0xa8u, r26);
    }
    r24 = 0u;
    r22 = 0u;
    while ((s32)r24 < (s32)rd32(param_1)) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80571250u;
        a.r[1] = rd32(param_1 + 0x38u);
        a.r[2] = r24;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x801033bcu, &a);
        r23 = r3;
        a.r[0] = param_1;
        a.r[1] = r24;
        a.r[2] = r3;
        f1 = tc_callf(0x801894c8u, &a);
        r24 = r24 + 1u;
        r3 = rd32(rd32(param_1 + 0x2cu) + r22);
        r22 = r22 + 4u;
        wr32(r3 + 0x54u, r23);
    }
    a.r[0] = param_1;
    (void)tc_call(0x80197454u, &a);
    wr32(param_1 + 0x454u, 1u);
    return;
}
