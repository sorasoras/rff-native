#include "tc_rt.h"

void fn_8032607c(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = ((u32)rd16(param_2) >> 3u) & 1u;
    (void)tc_call(0x802547e8u, &a);
    a.r[0] = (u32)rd8(param_2 + 5u);
    (void)tc_call(0x802539bcu, &a);
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 1u;
    a.r[3] = 2u;
    a.r[4] = 3u;
    (void)tc_call(0x80253720u, &a);
    r29 = param_2;
    r28 = param_2;
    r26 = 0u;
    while ((s32)r26 < (s32)rd8(param_2 + 5u)) {
        a.r[0] = r26;
        (void)tc_call(0x8025326cu, &a);
        a.r[0] = r26;
        a.r[1] = (u32)rd8(r29 + 0xcu);
        a.r[2] = (u32)rd8(r29 + 0xdu);
        a.r[3] = (u32)rd8(r29 + 0xeu);
        a.r[4] = (u32)rd8(r29 + 0xfu);
        (void)tc_call(0x802533f4u, &a);
        a.r[0] = r26;
        a.r[1] = (u32)rd8(r29 + 0x30u);
        a.r[2] = (u32)rd8(r29 + 0x31u);
        a.r[3] = (u32)rd8(r29 + 0x32u);
        a.r[4] = (u32)rd8(r29 + 0x33u);
        (void)tc_call(0x80253434u, &a);
        a.r[0] = r26;
        a.r[1] = (u32)rd8(r28 + 0x1cu);
        a.r[2] = (u32)rd8(r28 + 0x1du);
        a.r[3] = (u32)rd8(r28 + 0x1eu);
        a.r[4] = (u32)rd8(r28 + 0x1fu);
        a.r[5] = (u32)rd8(r28 + 0x20u);
        (void)tc_call(0x80253474u, &a);
        a.r[0] = r26;
        a.r[1] = (u32)rd8(r28 + 0x40u);
        a.r[2] = (u32)rd8(r28 + 0x41u);
        a.r[3] = (u32)rd8(r28 + 0x42u);
        a.r[4] = (u32)rd8(r28 + 0x43u);
        a.r[5] = (u32)rd8(r28 + 0x44u);
        (void)tc_call(0x802534ccu, &a);
        r27 = param_2 + r26;
        a.r[0] = r26;
        a.r[1] = (u32)rd8(r27 + 0x54u);
        (void)tc_call(0x80253644u, &a);
        a.r[0] = r26;
        a.r[1] = (u32)rd8(r27 + 0x58u);
        (void)tc_call(0x80253694u, &a);
        a.r[0] = r26;
        a.r[1] = 0u;
        a.r[2] = 0u;
        (void)tc_call(0x802536e4u, &a);
        r0 = (u32)rd8(r27 + 8u);
        if (r0 == 0u) {
            a.r[0] = r26;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 4u;
            (void)tc_call(0x80253860u, &a);
        } else {
            if (r0 == 1u) {
                r4 = rd32(param_1 + 0xc8u);
                a.r[0] = r26;
                a.r[1] = r4;
                a.r[2] = r4;
                a.r[3] = 4u;
                (void)tc_call(0x80253860u, &a);
            } else {
                a.r[0] = r26;
                a.r[1] = 0xffu;
                a.r[2] = 0xffu;
                a.r[3] = 4u;
                (void)tc_call(0x80253860u, &a);
            }
        }
        r29 = r29 + 4u;
        r28 = r28 + 5u;
        r26 = r26 + 1u;
    }
    if (((u32)rd16(param_2) & 0x40u) != 0u) {
        a.r[0] = 1u;
        (void)tc_call(0x8025324cu, &a);
        r4 = rd32(param_1 + 0xccu);
        a.r[0] = 0u;
        a.r[1] = r4;
        a.r[2] = r4;
        (void)tc_call(0x80253180u, &a);
        a.r[0] = 0u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        (void)tc_call(0x8025307cu, &a);
        a.r[0] = 1u;
        a.r[1] = param_2 + 0x90u;
        a.r[2] = (u32)(s8)rd8(param_2 + 0xa8u);
        (void)tc_call(0x80252f28u, &a);
        r26 = 1u;
        r27 = 0u;
        while ((s32)r27 < (s32)rd8(param_2 + 5u)) {
            if (((u32)rd8(param_2 + 7u) & r26) != 0u) {
                wr32(0x817fdfc8u, 0u);
                wr32(0x817fdfccu, 0u);
                a.r[0] = r27;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 7u;
                a.r[4] = 1u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.s[1] = rd32(0x817fdfccu);
                (void)tc_call(0x80252ec0u, &a);
            }
            r26 = (r26 << 1u) & 0xfeu;
            r27 = r27 + 1u;
        }
    } else {
        a.r[0] = 0u;
        (void)tc_call(0x8025324cu, &a);
    }
    a.r[0] = ((u32)rd16(param_2) >> 2u) & 1u;
    (void)tc_call(0x80253f98u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80250e3cu, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80250e64u, &a);
    a.r[0] = (u32)rd8(param_2 + 0x5cu);
    a.r[1] = (u32)rd8(param_2 + 0x5du);
    a.r[2] = (u32)rd8(param_2 + 0x5eu);
    a.r[3] = (u32)rd8(param_2 + 0x5fu);
    (void)tc_call(0x80253ebcu, &a);
    r0 = (u32)rd16(param_2);
    a.r[0] = r0 & 1u;
    a.r[1] = (u32)rd8(param_2 + 0x70u);
    a.r[2] = (r0 >> 1u) & 1u;
    (void)tc_call(0x80253f64u, &a);
    if (((u32)rd16(param_2) & 0x1000u) != 0u) {
        r6 = (u32)rd8((u32)param_3 + 0x84u);
        r5 = (u32)rd8((u32)param_3 + 0x86u);
        r0 = (u32)rd8((u32)param_3 + 0x87u);
        wr8(0x817fdfd9u, rd8((u32)param_3 + 0x85u));
        f1 = (f64)rdf32((u32)param_3 + 0x74u);
        wr8(0x817fdfd8u, (u8)r6);
        f2 = (f64)rdf32((u32)param_3 + 0x78u);
        wr8(0x817fdfdau, (u8)r5);
        f3 = (f64)rdf32((u32)param_3 + 0x7cu);
        wr8(0x817fdfdbu, (u8)r0);
        f4 = (f64)rdf32((u32)param_3 + 0x80u);
        r3 = rd32((u32)param_3 + 0x70u);
        wr32(0x817fdfd4u, rd32(0x817fdfd8u));
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.r[0] = r3;
        a.r[1] = 0x817fdfd4u;
        (void)tc_call(0x802539e0u, &a);
    } else {
        f1 = (f64)rdf32(0x80577be4u);
        f2 = (f64)rdf32(0x80577be8u);
        wr32(0x817fdfd0u, 0u);
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f1;
        a.f[3] = f2;
        a.r[0] = 0u;
        a.r[1] = 0x817fdfd0u;
        (void)tc_call(0x802539e0u, &a);
    }
    return;
}
