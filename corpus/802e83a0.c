#include "tc_rt.h"

void fn_802e83a0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r24 = 0, r28 = 0, r29 = 0, r30 = 0;
    u32 r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x802e42a8u, &a);
    r28 = param_1 + 0xe8u;
    wr32(param_1, 0x8039ce8cu);
    a.r[0] = r28;
    a.r[1] = 0x802e6590u;
    a.r[2] = 0x800fe97cu;
    a.r[3] = 4u;
    a.r[4] = 4u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = r28 + 0x10u;
    (void)tc_call(0x802ef3c0u, &a);
    r28 = 8u;
    r30 = param_2 + rd32(param_2 + 0x60u);
    r0 = (u32)rd8(r30 + 0x12u);
    if (r0 <= 8u) {
        r28 = r0;
    }
    r4 = r28 & 0xffu;
    if (r4 != 0u) {
        a.r[0] = param_1 + 0xf8u;
        a.r[1] = r4;
        (void)tc_call(0x802ef424u, &a);
    }
    r5 = r28 & 0xffu;
    f2 = (f64)rdf32(param_2 + 0x50u);
    f1 = (f64)rdf32(param_2 + 0x54u);
    f0 = (f64)rdf32(param_2 + 0x58u);
    r6 = rd32(r30);
    r4 = rd32(r30 + 4u);
    r3 = rd32(r30 + 8u);
    r0 = rd32(r30 + 0xcu);
    r7 = rd32(param_3 + 8u);
    wrf32d(param_1 + 0xd8u, (f64)rdf32(param_2 + 0x4cu));
    r29 = r7 + 0xcu;
    wrf32d(param_1 + 0xdcu, f2);
    wrf32d(param_1 + 0xe0u, f1);
    wrf32d(param_1 + 0xe4u, f0);
    wr32(param_1 + 0xe8u, r6);
    wr32(param_1 + 0xecu, r4);
    wr32(param_1 + 0xf0u, r3);
    wr32(param_1 + 0xf4u, r0);
    if (r5 != 0u && (u32)rd8(param_1 + 0xf8u) != 0u) {
        a.r[0] = param_1 + 0xf8u;
        a.r[1] = r30 + 0x14u;
        a.r[2] = r5;
        (void)tc_call(0x802ef658u, &a);
    }
    r7 = rd32(param_3 + 8u);
    r5 = rd32(param_3 + 4u);
    r0 = rd32(param_3 + 0xcu);
    r28 = r7 + rd32(r29 + (((u32)rd16(r30 + 0x10u) << 2u) & 0xfffffffcu));
    wr32(0x817fdfc8u, rd32(param_3));
    r3 = rd32(0x80571d40u);
    wr32(0x817fdfccu, r5);
    wr32(0x817fdfd0u, r7);
    wr32(0x817fdfd4u, r0);
    a.r[0] = r3;
    r3 = tc_call(0x8026d490u, &a);
    c0eq = r3 == 0u;
    if (c0eq) {
        r3 = 0u;
    } else if (!c0eq) {
        a.r[0] = r3;
        a.r[1] = r28;
        a.r[2] = 0x817fdfc8u;
        r3 = tc_call(0x802ead38u, &a);
    }
    r30 = (u32)rd8(param_2 + 0x5cu);
    wr32(param_1 + 0x28u, r3);
    wr8(param_1 + 0x104u, 0u);
    wr32(param_1 + 0x100u, 0u);
    if (r30 != 0u) {
        wr8(param_1 + 0x104u, 0u);
        a.r[0] = rd32(0x80571d40u);
        r3 = tc_call(0x8026d490u, &a);
        if (r3 != 0u) {
            r4 = r3;
            ctr = r30;
            if (r30 > 0u) {
                do {
                    if (r4 != 0u) {
                        wr8(r4, 0u);
                        wr32(r4 + 4u, 0u);
                    }
                    r4 = r4 + 8u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        } else {
            r3 = 0u;
        }
        wr32(param_1 + 0x100u, r3);
        if (r3 != 0u) {
            wr8(param_1 + 0x104u, (u8)r30);
        }
        r28 = 0u;
        r30 = 0u;
        r31 = param_2 + rd32(param_2 + 0x64u);
        while ((s32)r28 < (s32)rd8(param_1 + 0x104u)) {
            r0 = rd32(r31);
            r6 = param_2 + r0;
            r0 = (u32)rd16(param_2 + r0);
            r0 = (r0 << 2u) & 0xfffffffcu;
            r7 = rd32(param_3 + 8u);
            wr8(rd32(param_1 + 0x100u) + r30, rd8(r6 + 2u));
            r6 = rd32(r29 + r0);
            r5 = rd32(param_3 + 4u);
            r0 = rd32(param_3 + 0xcu);
            r24 = r7 + r6;
            wr32(0x817fdfb8u, rd32(param_3));
            r3 = rd32(0x80571d40u);
            wr32(0x817fdfbcu, r5);
            wr32(0x817fdfc0u, r7);
            wr32(0x817fdfc4u, r0);
            a.r[0] = r3;
            r3 = tc_call(0x8026d490u, &a);
            c0eq = r3 == 0u;
            if (c0eq) {
                r3 = 0u;
            } else if (!c0eq) {
                a.r[0] = r3;
                a.r[1] = r24;
                a.r[2] = 0x817fdfb8u;
                r3 = tc_call(0x802ead38u, &a);
            }
            r31 = r31 + 4u;
            r28 = r28 + 1u;
            r4 = rd32(param_1 + 0x100u) + r30;
            r30 = r30 + 8u;
            wr32(r4 + 4u, r3);
        }
    }
    return;
}
