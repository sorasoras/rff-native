#include "tc_rt.h"

void fn_80066c18(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006c878u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801a0954u, &a);
    r5 = rd32((u32)param_1 + 0xa48u);
    if (r5 != 0u) {
        r3 = rd32(r5 + 0x74u);
        r4 = (u32)rd8(r5 + 0x79u);
        r5 = (u32)rd8(r5 + 0x78u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r5;
        f1 = tc_callf(0x80082a10u, &a);
        r3 = rd32((u32)param_1 + 0xa48u);
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3) + 0x18u), &a);
        r4 = tc_lastr4();
        wr32((u32)param_1 + 0xa48u, 0u);
    } else {
        f1 = tc_callf(0x80082a24u, &a);
        r4 = tc_lastr4();
    }
    r29 = (u32)param_1;
    r30 = (u32)param_1 + 0x54cu;
    r28 = 0u;
    do {
        r5 = rd32(r29 + 0x5c0u);
        if (r5 != 0x2e8u) {
            r0 = (u32)rd8(r29 + 0x5c4u);
            r4 = (u32)rd8(r29 + 0x5c5u);
            wr16(0x817fdfecu, (u16)r5);
            wr8(0x817fdfeeu, (u8)r4);
            wr8(0x817fdfefu, (u8)r0);
            a.r[0] = 0x817fdfecu;
            f1 = tc_callf(0x800817c0u, &a);
            r4 = tc_lastr4();
            r5 = 0u;
        }
        a.r[0] = r30;
        a.r[1] = r4;
        a.r[2] = r5;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r30) + 0x18u), &a);
        r4 = tc_lastr4();
        r28 = r28 + 1u;
        r30 = r30 + 0x1a0u;
        r29 = r29 + 0x1a0u;
    } while ((s32)r28 < 2);
    r29 = (u32)param_1;
    r30 = (u32)param_1 + 0x29cu;
    r28 = 0u;
    do {
        r5 = rd32(r29 + 0x310u);
        if (r5 != 0x2e8u) {
            r0 = (u32)rd8(r29 + 0x314u);
            r4 = (u32)rd8(r29 + 0x315u);
            wr16(0x817fdfe8u, (u16)r5);
            wr8(0x817fdfeau, (u8)r4);
            wr8(0x817fdfebu, (u8)r0);
            a.r[0] = 0x817fdfe8u;
            f1 = tc_callf(0x800817c0u, &a);
            r4 = tc_lastr4();
            r5 = 0u;
        }
        a.r[0] = r30;
        a.r[1] = r4;
        a.r[2] = r5;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r30) + 0x18u), &a);
        r4 = tc_lastr4();
        r28 = r28 + 1u;
        r30 = r30 + 0xacu;
        r29 = r29 + 0xacu;
    } while ((s32)r28 < 4);
    if ((u32)rd16(0x80499214u) != 0x2e8u) {
        a.r[0] = 0x80499214u;
        f1 = tc_callf(0x800817c0u, &a);
        wr16(0x80499214u, 0x2e8u);
        wr8(0x80499216u, 1u);
        wr8(0x80499217u, 1u);
    }
    r3 = rd32((u32)param_1 + 0x15c8u);
    wr32((u32)param_1 + 0xa80u, 0u);
    if (r3 != 0u) {
        a.r[0] = r3;
        f1 = tc_callf(0x80157e6cu, &a);
        wr32((u32)param_1 + 0x15c8u, 0u);
    }
    r4 = rd32((u32)param_1 + 0x15c4u);
    if (r4 != 0xffffffffu) {
        a.r[0] = 0x804b9e80u;
        a.r[1] = r4;
        f1 = tc_callf(0x801206f4u, &a);
        r4 = tc_lastr4();
        wr32((u32)param_1 + 0x15c4u, 0xffffffffu);
    }
    a.r[0] = (u32)param_1 + 0x890u;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x890u) + 0x18u), &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x801a06a0u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006c34cu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006c418u, &a);
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x800f2d8cu, &a);
    r4 = tc_lastr4();
    r3 = rd32((u32)param_1 + 0x15e4u);
    if (r3 != 0u) {
        r4 = 0x8035616cu;
        if (rd32(((rd32(r3 + 8u) << 2u) & 0xfffffffcu) - 0x7fca9e94u) != 0u) {
            a.r[0] = r3;
            f1 = tc_callf(0x80157e6cu, &a);
            r4 = tc_lastr4();
        }
        wr32((u32)param_1 + 0x15e4u, 0u);
    }
    r29 = (u32)param_1;
    r28 = 0u;
    do {
        r3 = rd32(r29 + 0x163cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x18u), &a);
            r4 = tc_lastr4();
            r3 = rd32(r29 + 0x163cu);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 8u), &a);
                r4 = tc_lastr4();
            }
            wr32(r29 + 0x163cu, 0u);
        }
        r28 = r28 + 1u;
        r29 = r29 + 4u;
    } while (r28 < 2u);
    wr32((u32)param_1 + 0x1644u, 0u);
    wr32((u32)param_1 + 0x1648u, 0u);
    return;
}
