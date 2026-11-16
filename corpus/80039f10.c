#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80039f10(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
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
    r31 = param_1 + 0x38u;
    r6 = rd32(param_1 + 0x4cu);
    r30 = param_1 + 0x48u;
    r29 = rd32(param_1 + 0x3cu) * 0xcu;
    r27 = rd32(param_1 + 0x38u);
    r26 = rd32(param_1 + 0x48u);
    r28 = ((r6 << 2u) & 0xfffffffcu) - r6;
    a.r[0] = r29;
    r3 = tc_call(0x8004ca24u, &a);
    r25 = r3;
    a.r[0] = r28;
    r3 = tc_call(0x8004ca24u, &a);
    r24 = r3;
    if (r25 != 0u && r3 != 0u) {
        r3 = rd32(r31 + 8u);
        wr32(0x817fdfb8u, 0x43300000u);
        r0 = (r3 >> 0x18u) & 0xfu;
        f2 = rdf64(0x80571f18u);
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        f0 = (f64)rdf32(0x80571f14u);
        r0 = r0 ^ 0x80000000u;
        r22 = 0u;
        wr32(0x817fdfbcu, r0);
        f0 = (f64)(f32)px_fdiv(f0, (f64)(f32)(rdf64(0x817fdfb8u) - f2));
        wrf32d(0x817fdfb0u, f0);
        r23 = rd32(param_1 + 0x28u);
        while ((s32)r22 < (s32)rd16(param_1 + 0x26u)) {
            r4 = r23 + 0x10u;
            r0 = (u32)(s8)rd8(r23 + 3u);
            c0lt = (s32)r0 < 3;
            if (r0 == 3u) {
                wr32(0x817fdfa8u, (u32)rd16(r23 + 0xcu));
                a.r[0] = param_2 + ((u32)rd8(r23 + 4u) * 0x30u);
                a.r[1] = param_2 + ((u32)rd8(r23 + 5u) * 0x30u);
                a.r[2] = param_2 + ((u32)rd8(r23 + 6u) * 0x30u);
                a.r[3] = r23 + 8u;
                a.r[4] = 0x817fdfb0u;
                a.r[5] = r27;
                a.r[6] = r25;
                a.r[7] = r4;
                r3 = tc_call(0x80039440u, &a);
                a.r[0] = (u32)param_3 + ((u32)rd8(r23 + 4u) * 0x30u);
                a.r[1] = (u32)param_3 + ((u32)rd8(r23 + 5u) * 0x30u);
                a.r[2] = (u32)param_3 + ((u32)rd8(r23 + 6u) * 0x30u);
                a.r[3] = r23 + 8u;
                a.r[4] = r26;
                a.r[5] = r24;
                a.r[6] = r3;
                a.r[7] = (u32)rd16(r23 + 0xeu);
                (void)tc_call(0x800396a0u, &a);
            } else if (!c0lt) {
                if ((s32)r0 < 5) {
                    wr32(0x817fdfa8u, r4);
                    wr32(0x817fdfacu, (u32)rd16(r23 + 0xcu));
                    a.r[0] = param_2 + ((u32)rd8(r23 + 4u) * 0x30u);
                    a.r[1] = param_2 + ((u32)rd8(r23 + 5u) * 0x30u);
                    a.r[2] = param_2 + ((u32)rd8(r23 + 6u) * 0x30u);
                    a.r[3] = param_2 + ((u32)rd8(r23 + 7u) * 0x30u);
                    a.r[4] = r23 + 8u;
                    a.r[5] = 0x817fdfb0u;
                    a.r[6] = r27;
                    a.r[7] = r25;
                    a.s[0] = rd32(0x817fdfa8u);
                    r3 = tc_call(0x800398e8u, &a);
                    wr32(0x817fdfa8u, (u32)rd16(r23 + 0xeu));
                    a.r[0] = (u32)param_3 + ((u32)rd8(r23 + 4u) * 0x30u);
                    a.r[1] = (u32)param_3 + ((u32)rd8(r23 + 5u) * 0x30u);
                    a.r[2] = (u32)param_3 + ((u32)rd8(r23 + 6u) * 0x30u);
                    a.r[3] = (u32)param_3 + ((u32)rd8(r23 + 7u) * 0x30u);
                    a.r[4] = r23 + 8u;
                    a.r[5] = r26;
                    a.r[6] = r24;
                    a.r[7] = r3;
                    (void)tc_call(0x80039b90u, &a);
                }
            } else {
                c0lt = (s32)r0 < 1;
                if (r0 == 1u) {
                    a.r[0] = param_2 + ((u32)rd8(r23 + 4u) * 0x30u);
                    a.r[1] = 0x817fdfb0u;
                    a.r[2] = r27;
                    a.r[3] = r25;
                    a.r[4] = r4;
                    a.r[5] = (u32)rd16(r23 + 0xcu);
                    r3 = tc_call(0x80038ec8u, &a);
                    a.r[0] = (u32)param_3 + ((u32)rd8(r23 + 4u) * 0x30u);
                    a.r[1] = r26;
                    a.r[2] = r24;
                    a.r[3] = r3;
                    a.r[4] = (u32)rd16(r23 + 0xeu);
                    (void)tc_call(0x80039020u, &a);
                } else if (!c0lt) {
                    a.r[0] = param_2 + ((u32)rd8(r23 + 4u) * 0x30u);
                    a.r[1] = param_2 + ((u32)rd8(r23 + 5u) * 0x30u);
                    a.r[2] = r23 + 8u;
                    a.r[3] = 0x817fdfb0u;
                    a.r[4] = r27;
                    a.r[5] = r25;
                    a.r[6] = r4;
                    a.r[7] = (u32)rd16(r23 + 0xcu);
                    r3 = tc_call(0x80039104u, &a);
                    a.r[0] = (u32)param_3 + ((u32)rd8(r23 + 4u) * 0x30u);
                    a.r[1] = (u32)param_3 + ((u32)rd8(r23 + 5u) * 0x30u);
                    a.r[2] = r23 + 8u;
                    a.r[3] = r26;
                    a.r[4] = r24;
                    a.r[5] = r3;
                    a.r[6] = (u32)rd16(r23 + 0xeu);
                    (void)tc_call(0x800392b4u, &a);
                }
            }
            r22 = r22 + 1u;
            r23 = r23 + (((u32)rd16(r23) << 2u) & 0xfffffffcu);
        }
        a.r[0] = r31;
        a.r[1] = r25;
        a.r[2] = r29;
        (void)tc_call(0x80039e20u, &a);
        a.r[0] = r30;
        a.r[1] = r24;
        a.r[2] = r28;
        (void)tc_call(0x80039e98u, &a);
    }
    return;
}
