#include "tc_rt.h"

void fn_801ec2d4(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr8(param_r3 + 0x10u, 0xffu);
    r5 = rd32(param_r3);
    wr8(param_r3 + 0x11u, 0xffu);
    wr8(param_r3 + 0x12u, 0xffu);
    wr8(param_r3 + 0x13u, 0xffu);
    wr32(param_r3 + 4u, 0u);
    r29 = rd32(r5 + 8u);
    r28 = rd32(r5 + 0xcu);
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = (r28 << 5u) & 0xffffffe0u;
    r3 = tc_call(0x801b39d8u, &a);
    wr32(param_r3 + 8u, r3);
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = r28 * 0xcu;
    r3 = tc_call(0x801b39d8u, &a);
    wr32(param_r3 + 0xcu, r3);
    r26 = r3;
    r27 = rd32(param_r3 + 8u);
    r25 = 0u;
    while ((s32)r25 < (s32)r28) {
        r6 = rd32(r29 + 0x18u);
        r24 = rd32(r29 + 0x14u);
        if (r6 != 0u) {
            r4 = rd32(r6);
            r5 = (u32)rd8(r6 + 4u);
            r6 = (u32)rd16(r6 + 8u);
            a.r[0] = r26;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80252774u, &a);
            a.r[0] = r27;
            a.r[1] = rd32(r24);
            a.r[2] = (u32)rd16(r24 + 8u);
            a.r[3] = (u32)rd16(r24 + 0xau);
            a.r[4] = (u32)rd8(r24 + 4u);
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80252348u, &a);
        } else {
            a.r[0] = r27;
            a.r[1] = rd32(r24);
            a.r[2] = (u32)rd16(r24 + 8u);
            a.r[3] = (u32)rd16(r24 + 0xau);
            a.r[4] = (u32)rd8(r24 + 4u);
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8025213cu, &a);
        }
        f1 = (f64)rdf32(0x80576468u);
        a.f[0] = f1;
        a.f[1] = f1;
        a.f[2] = f1;
        a.r[0] = r27;
        a.r[1] = 1u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        (void)tc_call(0x80252390u, &a);
        r25 = r25 + 1u;
        r27 = r27 + 0x20u;
        r26 = r26 + 0xcu;
        r29 = r29 + 0x20u;
    }
    wr32(param_r3 + 0x54u, 1u);
    wr32(param_r3 + 0x58u, 1u);
    return;
}
