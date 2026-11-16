#include "tc_rt.h"

void fn_801b6f84(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r26 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r4 = rd32(rd32((u32)param_1 + 0x1cu) + 0xc40u);
    wr32((u32)param_1 + 0x24u, r4);
    a.r[0] = 0x80571250u;
    a.r[1] = r4;
    a.r[2] = 0x8033b768u;
    r3 = tc_call(0x80103258u, &a);
    r30 = r3;
    a.r[0] = 0x80571250u;
    a.r[1] = rd32((u32)param_1 + 0x24u);
    a.r[2] = 0x8033b773u;
    r3 = tc_call(0x80103258u, &a);
    r29 = r3;
    (void)tc_call(0x8012db10u, &a);
    r31 = (u32)rd8(0x80492833u);
    r5 = rd32(0x8033b75cu);
    r4 = rd32(0x8033b760u);
    r0 = rd32(0x8033b764u);
    wr32(0x817fdfd8u, rd32(0x8033b758u));
    wr32(0x817fdfdcu, r5);
    wr32(0x817fdfe0u, r4);
    wr32(0x817fdfe4u, r0);
    wr32((u32)param_1 + 0x78u, r31);
    a.r[0] = 0x2f0u;
    r3 = tc_call(0x8018925cu, &a);
    r27 = r3;
    if (r3 != 0u) {
        r26 = rd32(((r31 << 2u) & 0xfffffffcu) - 0x7e802028u);
        a.r[0] = r3;
        a.r[1] = 1u;
        a.r[2] = r26;
        a.r[3] = r26;
        (void)tc_call(0x801892ccu, &a);
        wr32(r27 + 0x28u, 0x80363700u);
        a.r[0] = r27 + 0x38u;
        (void)tc_call(0x80163efcu, &a);
        a.r[0] = r27 + 0x48u;
        (void)tc_call(0x801f0da4u, &a);
        r4 = r26 * 0xau;
        wr32(r27 + 0x2ecu, 0u);
        r3 = 0u;
        do {
            if ((s32)r4 > 0) {
                r0 = (r4 >> 3u) & 0x1fffffffu;
                ctr = r0;
                if (r0 != 0u) {
                    do {
                        r5 = r27 + r3;
                        r3 = r3 + 4u;
                        wr32(r5 + 0xb8u, 0u);
                        r5 = r27 + r3;
                        r3 = r3 + 4u;
                        wr32(r5 + 0xb8u, 0u);
                        r5 = r27 + r3;
                        r3 = r3 + 4u;
                        wr32(r5 + 0xb8u, 0u);
                        r5 = r27 + r3;
                        r3 = r3 + 4u;
                        wr32(r5 + 0xb8u, 0u);
                        r5 = r27 + r3;
                        r3 = r3 + 4u;
                        wr32(r5 + 0xb8u, 0u);
                        r5 = r27 + r3;
                        r3 = r3 + 4u;
                        wr32(r5 + 0xb8u, 0u);
                        r5 = r27 + r3;
                        r3 = r3 + 4u;
                        wr32(r5 + 0xb8u, 0u);
                        r5 = r27 + r3;
                        r3 = r3 + 4u;
                        wr32(r5 + 0xb8u, 0u);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    r4 = r4 & 7u;
                    if (r4 == 0u) break;
                }
                ctr = r4;
                do {
                    r5 = r27 + r3;
                    r3 = r3 + 4u;
                    wr32(r5 + 0xb8u, 0u);
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        } while (0);
        wr32(r27 + 0x2e8u, 0xffffffffu);
    }
    wr32((u32)param_1 + 0x28u, r27);
    a.r[0] = 0x8e0u;
    r3 = tc_call(0x8018925cu, &a);
    r27 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 1u;
        a.r[2] = 1u;
        a.r[3] = rd32(((r31 << 2u) & 0xfffffffcu) - 0x7e802028u);
        (void)tc_call(0x801892ccu, &a);
        wr32(r27 + 0x28u, 0x803636d0u);
        a.r[0] = r27 + 0x3cu;
        a.r[1] = 0x8012ba78u;
        a.r[2] = 0x8012bb48u;
        a.r[3] = 0x114u;
        a.r[4] = 7u;
        (void)tc_call(0x80255624u, &a);
        a.r[0] = r27 + 0x7ccu;
        (void)tc_call(0x800f82d0u, &a);
        a.r[0] = r27 + 0x82cu;
        a.r[1] = 0x801b7310u;
        a.r[2] = 0x801b7344u;
        a.r[3] = 0x58u;
        a.r[4] = 2u;
        (void)tc_call(0x80255624u, &a);
        wr32(r27 + 0x8dcu, 0u);
    }
    wr32((u32)param_1 + 0x2cu, r27);
    a.r[0] = rd32((u32)param_1 + 0x28u);
    a.r[1] = r29;
    (void)tc_call(0x8012c60cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x2cu);
    a.r[1] = r30;
    f1 = tc_callf(0x8012ccc8u, &a);
    r3 = rd32((u32)param_1 + 0x28u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(r3 + 0x28u) + 0x14u), &a);
    r3 = rd32((u32)param_1 + 0x2cu);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x14u), &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r27 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r27 + 0x1cu, (u32)param_1);
        wr32(r27, 0x8037280cu);
    }
    r26 = r27;
    a.r[0] = (u32)param_1 + 0x30u;
    a.r[1] = r27;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r27 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r27 + 0x1cu, (u32)param_1);
        wr32(r27, 0x80372878u);
    }
    a.r[0] = (u32)param_1 + 0x30u;
    a.r[1] = r27;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r27 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r27 + 0x1cu, (u32)param_1);
        wr32(r27, 0x80372854u);
    }
    a.r[0] = (u32)param_1 + 0x30u;
    a.r[1] = r27;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r27 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r27 + 0x1cu, (u32)param_1);
        wr32(r27, 0x80372830u);
    }
    a.r[0] = (u32)param_1 + 0x30u;
    a.r[1] = r27;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r27 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r27 + 0x1cu, (u32)param_1);
        wr32(r27, 0x803727e8u);
    }
    a.r[0] = (u32)param_1 + 0x30u;
    a.r[1] = r27;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = (u32)param_1 + 0x30u;
    a.r[1] = r26;
    (void)tc_call(0x800f832cu, &a);
    return;
}
