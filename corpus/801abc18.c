#include "tc_rt.h"

void fn_801abc18(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r26 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r26 = param_r3;
    a.r[0] = param_r4;
    a.r[1] = param_r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(param_r4) + 0x208u), &a);
    a.r[0] = param_r4;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.r[3] = 1u;
    a.f[0] = (f64)rdf32(0x80575a9cu);
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    (void)tc_call(rd32(rd32(param_r4) + 0x54u), &a);
    f30 = (f64)rdf32(0x80575a48u);
    r31 = param_r3 + 8u;
    f31 = (f64)rdf32(0x80575a50u);
    r29 = 0u;
    r30 = 0x80570918u;
    do {
        if (rd32(r26 + 0x50u) != 0u) {
            a.r[0] = r31;
            (void)tc_call(0x80070068u, &a);
        }
        a.r[0] = rd32(param_r4 + 0x70u);
        a.r[1] = rd32(r30);
        r3 = tc_call(0x80031be0u, &a);
        r28 = r3;
        if (r3 != 0u) {
            r4 = rd32(r3 + 0x4cu);
            wrf32d(r4, f30);
            wrf32d(r4 + 0x10u, f31);
            wrf32d(r4 + 0x20u, f31);
            wrf32d(r4 + 4u, f31);
            wrf32d(r4 + 0x14u, f30);
            wrf32d(r4 + 0x24u, f31);
            wrf32d(r4 + 8u, f31);
            wrf32d(r4 + 0x18u, f31);
            wrf32d(r4 + 0x28u, f30);
            wrf32d(r4 + 0xcu, f31);
            wrf32d(r4 + 0x1cu, f31);
            wrf32d(r4 + 0x2cu, f31);
            r3 = rd32(r3 + 0x4cu);
            a.f[0] = f31;
            a.f[1] = f31;
            a.f[2] = f31;
            a.r[0] = r3;
            (void)tc_call(0x80233d04u, &a);
            wrf32d(r28, f30);
            wrf32d(r28 + 0x10u, f31);
            wrf32d(r28 + 0x20u, f31);
            wrf32d(r28 + 4u, f31);
            wrf32d(r28 + 0x14u, f30);
            wrf32d(r28 + 0x24u, f31);
            wrf32d(r28 + 8u, f31);
            wrf32d(r28 + 0x18u, f31);
            wrf32d(r28 + 0x28u, f30);
            wrf32d(r28 + 0xcu, f31);
            wrf32d(r28 + 0x1cu, f31);
            wrf32d(r28 + 0x2cu, f31);
            a.r[0] = r28;
            a.r[1] = rd32(r28 + 0x4cu);
            a.r[2] = r28;
            (void)tc_call(0x802337a0u, &a);
            r6 = rd32(r28 + 0x50u);
            r0 = rd32(r28 + 4u);
            wr32(r6, rd32(r28));
            wr32(r6 + 4u, r0);
            r0 = rd32(r28 + 0xcu);
            wr32(r6 + 8u, rd32(r28 + 8u));
            wr32(r6 + 0xcu, r0);
            r0 = rd32(r28 + 0x14u);
            wr32(r6 + 0x10u, rd32(r28 + 0x10u));
            wr32(r6 + 0x14u, r0);
            r0 = rd32(r28 + 0x1cu);
            wr32(r6 + 0x18u, rd32(r28 + 0x18u));
            wr32(r6 + 0x1cu, r0);
            r0 = rd32(r28 + 0x24u);
            wr32(r6 + 0x20u, rd32(r28 + 0x20u));
            wr32(r6 + 0x24u, r0);
            r0 = rd32(r28 + 0x2cu);
            wr32(r6 + 0x28u, rd32(r28 + 0x28u));
            wr32(r6 + 0x2cu, r0);
            a.r[0] = r28;
            a.r[1] = 0u;
            (void)tc_call(0x8007b13cu, &a);
            wr32(r28 + 0x60u, 0u);
        }
        r29 = r29 + 1u;
        r31 = r31 + 0xe8u;
        r30 = r30 + 4u;
        r26 = r26 + 0xe8u;
    } while ((s32)r29 < 2);
    return;
}
