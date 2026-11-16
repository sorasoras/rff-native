#include "tc_rt.h"

void fn_80072d2c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r23 = 0, r27 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r28 = param_1 * 0x34u;
    r31 = r28 - 0x7fb7991cu;
    r0 = rd32(r31 + 0x18u);
    if (r0 == 0u) {
        if (param_1 != 0x18u) {
            r5 = rd32(0x8046b7e4u);
            r4 = 0u;
            while (r5 != 0u) {
                r3 = r5;
                r5 = rd32(r5);
                r3 = rd32(r3 + 8u);
                if (rd32(r3 + 0xacu) == 0x4eu) {
                    r4 = 1u;
                    break;
                }
            }
            if (rd32(0x8046b7ecu) >= (((((0u - r4) | r4) >> 0x1fu) & 1u) + 7u)) {
                return;
            }
        }
        a.r[0] = param_1;
        r3 = tc_call(0x8007dae8u, &a);
        f1 = tc_lastf();
        r4 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fb79c28u);
        r27 = r3;
        if (rd32(r4 + 0x260u) != 0u) {
            r23 = rd32(r4 + 0xacu);
            a.r[0] = r4;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r4) + 0x18u), &a);
            a.r[0] = r23;
            r3 = tc_call(0x8007dad4u, &a);
            a.r[0] = 0x80469958u;
            a.r[1] = rd32(r3 + 8u);
            a.r[2] = 0u;
            (void)tc_call(0x80057c10u, &a);
            a.r[0] = r23;
            r3 = tc_call(0x8007dad4u, &a);
            a.r[0] = 0x8046a200u;
            a.r[1] = rd32(r3 + 0xcu);
            a.r[2] = 0u;
            (void)tc_call(0x80058f78u, &a);
        }
        r30 = r28 - 0x7fb7991cu;
        f0 = (f64)rdf32(param_2 + 4u);
        wrf32d(r30 + 0x1cu, (f64)rdf32(param_2));
        f1 = (f64)rdf32(param_2 + 8u);
        wrf32d(r30 + 0x20u, f0);
        f0 = (f64)rdf32(param_3);
        wrf32d(r30 + 0x24u, f1);
        f1 = (f64)rdf32(param_3 + 4u);
        wrf32d(r30 + 0x28u, f0);
        f0 = (f64)rdf32(param_3 + 8u);
        wrf32d(r30 + 0x2cu, f1);
        wrf32d(r30 + 0x30u, f0);
        a.r[0] = r27;
        r3 = tc_call(0x8007dad4u, &a);
        r3 = rd32(r3 + 8u);
        a.r[0] = r3;
        r3 = tc_call(0x8007d13cu, &a);
        a.r[0] = 0x80469958u;
        a.r[1] = (u32)rd16(r3);
        a.r[2] = r30 + 4u;
        a.r[3] = 0x80073014u;
        a.r[4] = param_1;
        r3 = tc_call(0x800580a0u, &a);
        if (r3 == 0u) {
            wr32(r31 + 0x18u, 2u);
        } else {
            wr32(r31 + 0x18u, 1u);
            wr32(r30, 1u);
            a.r[0] = r27;
            r3 = tc_call(0x8007dad4u, &a);
            r3 = rd32(r3 + 8u);
            a.r[0] = r3;
            r3 = tc_call(0x8007d13cu, &a);
            a.r[0] = 0x80469958u;
            a.r[1] = (u32)rd16(r3 + 2u);
            a.r[2] = r30 + 0x14u;
            a.r[3] = 0x80073090u;
            a.r[4] = param_1;
            r3 = tc_call(0x800583c8u, &a);
            if (r3 != 0u) {
                wr32(r30 + 0x10u, 1u);
                a.r[0] = r27;
                r3 = tc_call(0x8007dad4u, &a);
                a.r[0] = 0x8046a200u;
                a.r[1] = rd32(r3 + 0xcu);
                a.r[2] = r30 + 0xcu;
                a.r[3] = 0x8007310cu;
                a.r[4] = param_1;
                r3 = tc_call(0x80058decu, &a);
                if (r3 != 0u) {
                    wr32(r30 + 8u, 1u);
                }
            }
        }
    } else if (r0 == 2u) {
        a.r[0] = param_1;
        (void)tc_call(0x800a4490u, &a);
    }
    return;
}
