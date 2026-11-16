#include "tc_rt.h"

void fn_802d3570(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r22 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x802d09d8u, &a);
    r26 = param_1 + 0xe4u;
    wr32(param_1, 0x80399f94u);
    a.r[0] = r26;
    a.r[1] = 0x802cd8c0u;
    a.r[2] = 0x802cb69cu;
    a.r[3] = 4u;
    a.r[4] = 4u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = r26 + 0x10u;
    (void)tc_call(0x802cb7b0u, &a);
    r0 = rd32(param_2 + 0x60u);
    r28 = param_2 + r0;
    r5 = rd32(param_2 + r0);
    r7 = (u32)rd8(r28 + 0x12u);
    f2 = (f64)rdf32(param_2 + 0x50u);
    f1 = (f64)rdf32(param_2 + 0x54u);
    f0 = (f64)rdf32(param_2 + 0x58u);
    r4 = rd32(r28 + 4u);
    r3 = rd32(r28 + 8u);
    r0 = rd32(r28 + 0xcu);
    r6 = rd32((u32)param_3 + 8u);
    wrf32d(param_1 + 0xd4u, (f64)rdf32(param_2 + 0x4cu));
    r27 = r6 + 0xcu;
    wrf32d(param_1 + 0xd8u, f2);
    wrf32d(param_1 + 0xdcu, f1);
    wrf32d(param_1 + 0xe0u, f0);
    wr32(param_1 + 0xe4u, r5);
    wr32(param_1 + 0xe8u, r4);
    wr32(param_1 + 0xecu, r3);
    wr32(param_1 + 0xf0u, r0);
    if (r7 != 0u) {
        r26 = 8u;
        if (r7 <= 8u) {
            r26 = r7;
        }
        a.r[0] = param_1 + 0xf4u;
        a.r[1] = r26 & 0xffu;
        (void)tc_call(0x802cb814u, &a);
        if ((u32)rd8(param_1 + 0xf4u) != 0u) {
            a.r[0] = param_1 + 0xf4u;
            a.r[1] = r28 + 0x14u;
            a.r[2] = r26 & 0xffu;
            (void)tc_call(0x802cb994u, &a);
        }
    }
    a.r[0] = rd32(0x805474e0u);
    r3 = tc_call(0x8026d490u, &a);
    c0eq = r3 == 0u;
    if (!c0eq) {
        r4 = rd32((u32)param_3 + 8u) + rd32(r27 + (((u32)rd16(r28 + 0x10u) << 2u) & 0xfffffffcu));
        if (!c0eq) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = (u32)param_3;
            r3 = tc_call(0x802cd8ccu, &a);
        }
        wr32(param_1 + 0x28u, r3);
    }
    r0 = (u32)rd8(param_2 + 0x5cu);
    wr8(param_1 + 0x100u, 0u);
    wr32(param_1 + 0xfcu, 0u);
    if (r0 != 0u) {
        a.r[0] = rd32(0x805474e0u);
        r3 = tc_call(0x8026d490u, &a);
        wr32(param_1 + 0xfcu, r3);
        if (r3 != 0u) {
            r26 = 0u;
            r0 = rd32(param_2 + 0x64u);
            r28 = 0u;
            wr8(param_1 + 0x100u, rd8(param_2 + 0x5cu));
            r29 = param_2 + r0;
            while ((s32)r26 < (s32)rd8(param_1 + 0x100u)) {
                r22 = param_2 + rd32(r29);
                wr8(rd32(param_1 + 0xfcu) + r28, rd8(r22 + 2u));
                wr32(rd32(param_1 + 0xfcu) + r28 + 4u, 0u);
                a.r[0] = rd32(0x805474e0u);
                r3 = tc_call(0x8026d490u, &a);
                c0eq = r3 == 0u;
                if (!c0eq) {
                    r4 = rd32((u32)param_3 + 8u) + rd32(r27 + (((u32)rd16(r22) << 2u) & 0xfffffffcu));
                    if (!c0eq) {
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = (u32)param_3;
                        r3 = tc_call(0x802cd8ccu, &a);
                    }
                    wr32(rd32(param_1 + 0xfcu) + r28 + 4u, r3);
                }
                r29 = r29 + 4u;
                r28 = r28 + 8u;
                r26 = r26 + 1u;
            }
        }
    }
    return;
}
