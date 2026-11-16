#include "tc_rt.h"

void fn_80159efc(u32 param_1, u32 param_2, s32 param_3, s32 param_4, u32 param_5)
{
    u32 r3 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x80159d54u, &a);
    r30 = r3;
    a.r[0] = param_2;
    r3 = tc_call(0x800a6954u, &a);
    r29 = (u32)(s8)r3;
    a.r[0] = param_2;
    r3 = tc_call(0x800a69a4u, &a);
    r26 = rd32(param_1 + 0x7b0u);
    r31 = rd32(param_1 + 0x7acu);
    r28 = (u32)(s8)r3;
    f31 = (f64)rdf32(0x80574960u);
    r27 = 1u;
    r25 = 0u;
    if (r30 == 0u) {
        a.r[0] = param_1;
        a.r[1] = (u32)param_4;
        (void)tc_call(0x8015a160u, &a);
    } else if ((u32)param_4 != rd32(r30 + 0x10u)) {
        f31 = (f64)rdf32(r30 + 0x24u);
        a.r[0] = r30;
        a.r[1] = 1u;
        (void)tc_call(0x80159390u, &a);
        a.r[0] = param_1;
        a.r[1] = (u32)param_4;
        (void)tc_call(0x8015a160u, &a);
    } else {
        r3 = rd32(r30 + 4u);
        r27 = 0u;
        if (r3 != 0u) {
            r27 = rd32(r3 + 0x168u);
            if (r27 == r31) {
                r26 = 1u;
            }
        }
        a.r[0] = r30;
        r3 = tc_call(0x80159898u, &a);
        if ((u32)param_3 == r3) {
            a.r[0] = rd32(r30 + 4u);
            a.r[1] = r31;
            a.r[2] = r26;
            (void)tc_call(0x8015bc18u, &a);
            a.r[0] = param_1;
            (void)tc_call(0x8015b9e4u, &a);
            return;
        }
        if (r27 == r31) {
            r25 = rd32(r30 + 4u);
        }
        f31 = (f64)rdf32(r30 + 0x24u);
        wr32(r30 + 0x34u, rd32(r30 + 0x34u) & 0xefffffffu);
        wr32(r30 + 0x38u, 0u);
        a.r[0] = r30;
        a.r[1] = 0u;
        (void)tc_call(0x80159390u, &a);
        r27 = 0u;
    }
    a.r[0] = param_1;
    r3 = tc_call(0x80159d8cu, &a);
    r30 = r3;
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb0u, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    a.r[3] = (u32)param_4;
    a.r[4] = r29;
    a.r[5] = r28;
    a.r[6] = 0x817fdfb4u;
    a.r[7] = 0x817fdfb0u;
    r3 = tc_call(0x80159da4u, &a);
    r28 = r3;
    if (r3 == 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.r[3] = (u32)param_4;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0x817fdfb4u;
        a.r[7] = 0x817fdfb0u;
        r3 = tc_call(0x80159da4u, &a);
        r28 = r3;
    }
    if (rd32(0x817fdfb4u) != 0u && (u32)param_4 != 2u) {
        wr32(0x817fdfb4u, 0u);
    }
    wr32(0x817fdfb0u, rd32(0x817fdfb0u) | rd32(0x817fdfb4u));
    if (r25 == 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x8015bd00u, &a);
        r25 = r3;
        a.r[0] = (u32)param_4;
        f1 = tc_callf(0x801592c4u, &a);
        if (r25 != 0u) {
            a.f[0] = f1;
            a.r[0] = r25;
            a.r[1] = r31;
            a.r[2] = param_2;
            a.r[3] = rd32(0x817fdfb0u);
            a.r[4] = r26;
            (void)tc_call(0x8015bbb4u, &a);
        }
    }
    f1 = (f64)rdf32(param_1 + 0x7b4u);
    wr32(0x817fdfa8u, r26);
    wr32(0x817fdfacu, param_5);
    a.f[0] = f1;
    a.r[0] = r30;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    a.r[3] = (u32)param_4;
    a.r[4] = r28;
    a.r[5] = r25;
    a.r[6] = r27;
    a.r[7] = rd32(0x817fdfb4u);
    a.s[0] = rd32(0x817fdfa8u);
    a.s[1] = rd32(0x817fdfacu);
    (void)tc_call(0x80159138u, &a);
    wrf32d(r30 + 0x24u, f31);
    a.r[0] = param_1;
    (void)tc_call(0x8015b9e4u, &a);
    return;
}
