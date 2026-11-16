#include "tc_rt.h"

void fn_801c1cdc(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if (rd32((u32)param_1 + 0xe4u) != 0u) {
        f1 = (f64)rdf32(0x80575ce0u);
        r5 = rd32(0x804890f0u);
        r0 = rd32(0x804890f4u);
        wr32(0x817fdfb4u, rd32(0x804890ecu));
        wr32(0x817fdfb8u, r5);
        wr32(0x817fdfbcu, r0);
        a.f[0] = f1;
        a.r[0] = 0x817fdfb4u;
        a.r[1] = 0x817fdfb4u;
        f1 = tc_callf(0x802343c8u, &a);
        r3 = rd32(0x804863d8u);
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfe4u, rd32(r3));
        wr32(0x817fdfe8u, r0);
        wr32(0x817fdfecu, rd32(r3 + 8u));
        a.r[0] = 0x817fdfe4u;
        a.r[1] = 0x817fdfb4u;
        a.r[2] = 0x817fdfe4u;
        (void)tc_call(0x80234380u, &a);
        r0 = rd32((u32)param_1 + 0xcu);
        r7 = rd32(0x817fdfe4u);
        wr32(0x817fdfd8u, rd32((u32)param_1 + 8u));
        r6 = rd32(0x817fdfe8u);
        wr32(0x817fdfdcu, r0);
        r0 = rd32(0x817fdfecu);
        wr32(0x817fdfe0u, rd32((u32)param_1 + 0x10u));
        wr32(0x817fdfccu, r7);
        wr32(0x817fdfd0u, r6);
        wr32(0x817fdfd4u, r0);
        a.r[0] = 0x817fdfccu;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = 0x817fdfccu;
        (void)tc_call(0x802343a4u, &a);
        f1 = (f64)rdf32(0x80575cfcu);
        r0 = 0u;
        if ((f1 == (f64)rdf32(0x817fdfccu) && f1 == (f64)rdf32(0x817fdfd0u)) && f1 == (f64)rdf32(0x817fdfd4u)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfccu;
            a.r[1] = 0x817fdfccu;
            (void)tc_call(0x802343e4u, &a);
        }
        a.f[0] = (f64)rdf32(0x80575cd8u);
        a.r[0] = 0x817fdfccu;
        a.r[1] = 0x817fdfccu;
        (void)tc_call(0x802343c8u, &a);
        r3 = (u32)param_1 + 0xe8u;
        a.r[0] = r3;
        a.r[1] = 0x817fdfccu;
        a.r[2] = r3;
        (void)tc_call(0x80234380u, &a);
        r3 = (u32)param_1 + 0xe8u;
        a.f[0] = (f64)rdf32(0x80575d00u);
        a.r[0] = r3;
        a.r[1] = r3;
        (void)tc_call(0x802343c8u, &a);
        a.r[0] = 0x817fdfd8u;
        a.r[1] = (u32)param_1 + 0xe8u;
        a.r[2] = 0x817fdfd8u;
        (void)tc_call(0x80234380u, &a);
        wrf32d((u32)param_1 + 8u, (f64)rdf32(0x817fdfd8u));
        wrf32d((u32)param_1 + 0xcu, (f64)rdf32(0x817fdfdcu));
        wrf32d((u32)param_1 + 0x10u, (f64)rdf32(0x817fdfe0u));
        r3 = rd32(0x817fdfdcu);
        r0 = rd32(0x817fdfe0u);
        wr32(0x817fdfa8u, rd32(0x817fdfd8u));
        wr32(0x817fdfacu, r3);
        wr32(0x817fdfb0u, r0);
        a.r[0] = rd32((u32)param_1 + 0xe4u);
        a.r[1] = 0x817fdfa8u;
        (void)tc_call(0x8015811cu, &a);
        r4 = rd32((u32)param_1 + 0xf8u);
        if ((s32)r4 >= 0) {
            a.r[0] = 0x804b9e80u;
            a.r[1] = r4;
            a.r[2] = 0x817fdfd8u;
            (void)tc_call(0x80120914u, &a);
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8006f778u, &a);
        r0 = rd32((u32)param_1 + 0xf4u) - 1u;
        wr32((u32)param_1 + 0xf4u, r0);
        if ((s32)r0 < 0) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801c1c30u, &a);
        } else {
            r30 = rd32(0x8046ad24u);
            while (r30 != 0u) {
                r3 = r30;
                r30 = rd32(r30);
                r29 = rd32(r3 + 8u);
                if (r29 != (u32)param_1 && (rd32(r29 + 0x30u) & 2u) != 0u) {
                    r0 = rd32(r29 + 0xcu);
                    wr32(0x817fdfc0u, rd32(r29 + 8u));
                    wr32(0x817fdfc4u, r0);
                    wr32(0x817fdfc8u, rd32(r29 + 0x10u));
                    a.r[0] = 0x817fdfc0u;
                    a.r[1] = (u32)param_1 + 8u;
                    a.r[2] = 0x817fdfc0u;
                    (void)tc_call(0x802343a4u, &a);
                    a.r[0] = 0x817fdfc0u;
                    f1 = tc_callf(0x80234428u, &a);
                    f0 = (f64)(f32)((f64)rdf32(r29 + 0x20u) + (f64)rdf32((u32)param_1 + 0x20u));
                    f0 = (f64)(f32)(f0 * f0);
                    if ((f1 < f0) || (f1 == f0)) {
                        a.r[0] = (u32)param_1;
                        (void)tc_call(0x801c1c30u, &a);
                        return;
                    }
                }
            }
        }
    }
    return;
}
