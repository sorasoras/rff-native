#include "tc_rt.h"

void fn_8016b170(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x800b32fcu, &a);
    if (r3 == 0u) {
        if (rd32((u32)param_2 + 0x1464u) == 0u) {
            r3 = rd32((u32)param_2 + 0xe88u);
            wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
        } else {
            r31 = rd32((u32)param_2 + 0x1464u);
            wrf32d((u32)param_2 + 0xd50u, (f64)rdf32(r31 + 0xcu));
            a.r[0] = (u32)param_2;
            a.r[1] = r31;
            (void)tc_call(0x800b32ecu, &a);
            if (rd32(r31 + 0x10u) != 0u) {
                r0 = rd32(r31 + 4u);
                wr32(0x817fdfe0u, rd32(r31));
                wr32(0x817fdfe4u, r0);
                wr32(0x817fdfe8u, rd32(r31 + 8u));
                a.r[0] = 0x817fdfe0u;
                a.r[1] = (u32)param_2 + 0xcf4u;
                a.r[2] = 0x817fdfe0u;
                (void)tc_call(0x802343a4u, &a);
                a.r[0] = 0x817fdfe0u;
                f1 = tc_callf(0x80234440u, &a);
                if (f1 > (f64)rdf32(0x80574c98u)) {
                    f1 = (f64)rdf32(0x80574c80u);
                    r0 = 0u;
                    if ((f1 == (f64)rdf32(0x817fdfe0u) && f1 == (f64)rdf32(0x817fdfe4u)) && f1 == (f64)rdf32(0x817fdfe8u)) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        a.r[0] = 0x817fdfe0u;
                        a.r[1] = 0x817fdfe0u;
                        (void)tc_call(0x802343e4u, &a);
                    }
                    r0 = rd32((u32)param_2 + 0xd1cu);
                    wr32(0x817fdfd4u, rd32((u32)param_2 + 0xd18u));
                    wr32(0x817fdfd8u, r0);
                    wr32(0x817fdfdcu, rd32((u32)param_2 + 0xd20u));
                    a.r[0] = 0x817fdfd4u;
                    f1 = tc_callf(0x80234440u, &a);
                    a.f[0] = f1;
                    a.r[0] = 0x817fdfe0u;
                    a.r[1] = 0x817fdfe0u;
                    (void)tc_call(0x802343c8u, &a);
                    r3 = rd32(0x817fdfe4u);
                    r0 = rd32(0x817fdfe8u);
                    wr32(0x817fdfc8u, rd32(0x817fdfe0u));
                    wr32(0x817fdfccu, r3);
                    f2 = (f64)rdf32(0x817fdfc8u);
                    wr32(0x817fdfd0u, r0);
                    f1 = (f64)rdf32(0x817fdfccu);
                    f0 = (f64)rdf32(0x817fdfd0u);
                    wrf32d((u32)param_2 + 0xd18u, f2);
                    wrf32d((u32)param_2 + 0xd1cu, f1);
                    wrf32d((u32)param_2 + 0xd20u, f0);
                }
            }
            r4 = rd32(r31 + 0x18u);
            wr8((u32)param_2 + 0xd81u, (u8)((((0u - r4) | r4) >> 0x1fu) & 1u));
            r4 = rd32(r31 + 0x1cu);
            wr8((u32)param_2 + 0xd82u, (u8)((((0u - r4) | r4) >> 0x1fu) & 1u));
            r4 = rd32(r31 + 0x14u);
            wr8((u32)param_2 + 0xd80u, (u8)((((0u - r4) | r4) >> 0x1fu) & 1u));
            a.r[0] = (u32)param_2;
            (void)tc_call(0x800b2db8u, &a);
        }
    }
    if ((u32)rd8((u32)param_2 + 0xd81u) != 0u) {
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x800b3344u, &a);
        a.r[0] = (u32)param_2;
        a.r[1] = r3;
        r3 = tc_call(0x800b0b2cu, &a);
        if (r3 != 0u) {
            r3 = rd32((u32)param_2 + 0xe88u);
            wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
        }
    }
    if ((u32)rd8((u32)param_2 + 0xd82u) != 0u) {
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x800b0b30u, &a);
        if (r3 != 0u) {
            r3 = rd32((u32)param_2 + 0xe88u);
            wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
        }
    }
    if ((s32)rd32((u32)param_2 + 0xd60u) >= 10) {
        r3 = rd32((u32)param_2 + 0xe88u);
        wr8((u32)param_2 + 0x168cu, 1u);
        wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
    }
    return;
}
