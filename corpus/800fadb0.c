#include "tc_rt.h"

void fn_800fadb0(s32 param_1, s32 param_2, s32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r18 = 0;
    u32 r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
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
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = (u32)param_2;
    r6 = 0x80339140u;
    r29 = rd32(0x8033912cu);
    r12 = rd32(0x80339130u);
    r11 = rd32(0x80339134u);
    r10 = rd32(0x80339138u);
    r9 = rd32(0x8033913cu);
    r8 = rd32(0x80339140u);
    r7 = rd32(0x80339144u);
    r4 = rd32(0x80339148u);
    r0 = rd32(0x8033914cu);
    wr32(0x817fdfb0u, rd32(0x80339128u));
    wr32(0x817fdfb4u, r29);
    wr32(0x817fdfb8u, r12);
    wr32(0x817fdfbcu, r11);
    wr32(0x817fdfc0u, r10);
    wr32(0x817fdfc4u, r9);
    wr32(0x817fdf68u, r8);
    wr32(0x817fdf6cu, r7);
    wr32(0x817fdf70u, r4);
    wr32(0x817fdf74u, r0);
    if (param_2 < 0) {
        r30 = rd32((u32)param_1 + 0x128cu);
    }
    r4 = ((u32)param_3 << 1u) & 0xfffffffeu;
    r29 = r4 + 1u;
    wr32((u32)param_1 + 0x128cu, r30);
    wr32(0x817fdf90u, 0u);
    wr32(0x817fdf94u, 0u);
    if (r29 == 0u) {
        wr32(0x817fdf90u, 1u);
    } else {
        if (r4 == 0u) {
            wr32(0x817fdf94u, 1u);
        }
    }
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf9cu, 0u);
    if (r29 == 1u) {
        wr32(0x817fdf98u, 1u);
    } else {
        if (r4 == 1u) {
            wr32(0x817fdf9cu, 1u);
        }
    }
    wr32(0x817fdfa0u, 0u);
    wr32(0x817fdfa4u, 0u);
    if (r29 == 2u) {
        wr32(0x817fdfa0u, 1u);
    } else {
        if (r4 == 2u) {
            wr32(0x817fdfa4u, 1u);
        }
    }
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    if (r29 == 3u) {
        wr32(0x817fdfa8u, 1u);
    } else {
        if (r4 == 3u) {
            wr32(0x817fdfacu, 1u);
        }
    }
    r25 = rd32(0x817fdf98u);
    r26 = (u32)param_1;
    r24 = rd32(0x817fdfa0u);
    r18 = 0u;
    r23 = rd32(0x817fdfa8u);
    r22 = rd32(0x817fdf94u);
    r21 = rd32(0x817fdf9cu);
    r20 = rd32(0x817fdfa4u);
    r19 = rd32(0x817fdfacu);
    do {
        if (r18 == r30) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = rd32(r26 + 0x1290u);
            a.r[1] = rd32(0x817fdf90u);
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            f1 = tc_callf(0x800ff574u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = rd32(r26 + 0x1294u);
            a.r[1] = r25;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x800ff574u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = rd32(r26 + 0x1298u);
            a.r[1] = r24;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x800ff574u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = rd32(r26 + 0x129cu);
            a.r[1] = r23;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x800ff574u, &a);
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
        } else {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = rd32(r26 + 0x1290u);
            a.r[1] = r22;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            f1 = tc_callf(0x800ff574u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = rd32(r26 + 0x1294u);
            a.r[1] = r21;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x800ff574u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = rd32(r26 + 0x1298u);
            a.r[1] = r20;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x800ff574u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = rd32(r26 + 0x129cu);
            a.r[1] = r19;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x800ff574u, &a);
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
        }
        r18 = r18 + 1u;
        r26 = r26 + 0x10u;
    } while ((s32)r18 < 6);
    r30 = (r30 << 2u) & 0xfffffffcu;
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    a.r[1] = rd32(r30 - 0x7e802050u);
    a.r[2] = rd32(((r29 << 2u) & 0xfffffffcu) - 0x7e802098u);
    (void)tc_call(0x800fa1ecu, &a);
    r7 = rd32(0x80339154u);
    r5 = rd32(0x80339158u);
    r4 = rd32(0x8033915cu);
    r3 = rd32(0x80339160u);
    r0 = rd32(0x80339164u);
    wr32(0x817fdf78u, rd32(0x80339150u));
    wr32(0x817fdf7cu, r7);
    wr32(0x817fdf80u, r5);
    wr32(0x817fdf84u, r4);
    wr32(0x817fdf88u, r3);
    wr32(0x817fdf8cu, r0);
    if ((u32)param_3 == 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
        r3 = tc_call(0x8011a4b4u, &a);
        if ((u32)rd16(r3 + 0xbcu) == 0x2e8u) {
            a.r[0] = (u32)param_1 + 0x70u;
            a.r[1] = rd32((u32)param_1 + 0x12f0u);
            (void)tc_call(0x80210c90u, &a);
            a.r[0] = (u32)param_1 + 0x70u;
            a.r[1] = rd32(r30 - 0x7e802088u);
            (void)tc_call(0x80210878u, &a);
            return;
        }
        a.r[0] = (u32)param_1 + 0x70u;
        a.r[1] = rd32((u32)param_1 + 0x12f4u);
        (void)tc_call(0x80210c90u, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
        r3 = tc_call(0x8011a4b4u, &a);
        a.r[0] = (u32)param_1 + 0x70u;
        a.r[1] = (u32)rd16(r3 + 0xbcu);
        (void)tc_call(0x80210878u, &a);
    } else {
        a.r[0] = (u32)param_1 + 0x70u;
        a.r[1] = rd32((u32)param_1 + 0x12f0u);
        (void)tc_call(0x80210c90u, &a);
        a.r[0] = (u32)param_1 + 0x70u;
        a.r[1] = 0u;
        (void)tc_call(0x80210878u, &a);
    }
    return;
}
