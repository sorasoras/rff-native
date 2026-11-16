#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_8027569c(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5)
{
    u32 ctr = 0, r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r18 = 0, r19 = 0;
    u32 r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r29 = 0;
    f64 f0 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
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
    r11 = (u32)param_4 + 1u;
    r8 = rd32(0x8033de34u);
    r0 = rd32(0x8033de38u);
    r18 = rd32(0x8033de3cu);
    r27 = rd32(0x8033de40u);
    r26 = rd32(0x8033de44u);
    r24 = rd32(0x8033de48u);
    r29 = param_3;
    r23 = rd32(0x8033de4cu);
    r5 = (u32)((s32)(((r11 >> 0x1fu) & 1u) + r11) >> 1);
    r22 = rd32(0x8033de50u);
    r21 = rd32(0x8033de54u);
    r20 = rd32(0x8033de58u);
    r19 = rd32(0x8033de5cu);
    r12 = rd32(0x8033de60u);
    r11 = rd32(0x8033de64u);
    r7 = rd32(0x8033de68u);
    r6 = rd32(0x8033de6cu);
    wr32(0x817fdf78u, rd32(0x8033de30u));
    wr32(0x817fdf7cu, r8);
    wr32(0x817fdf80u, r0);
    wr32(0x817fdf84u, r18);
    wr32(0x817fdf88u, r27);
    wr32(0x817fdf8cu, r26);
    wr32(0x817fdf90u, r24);
    wr32(0x817fdf94u, r23);
    wr32(0x817fdf98u, r22);
    wr32(0x817fdf9cu, r21);
    wr32(0x817fdfa0u, r20);
    wr32(0x817fdfa4u, r19);
    wr32(0x817fdfa8u, r12);
    wr32(0x817fdfacu, r11);
    wr32(0x817fdfb0u, r7);
    wr32(0x817fdfb4u, r6);
    a.r[0] = (u32)param_5;
    a.r[1] = 0u;
    a.r[2] = r5;
    (void)tc_call(0x8000443cu, &a);
    if ((param_2 & 1u) == 0u) {
        r11 = 0u;
        r12 = 0x7fu;
        r5 = 0u;
        r27 = 0u;
        r26 = 0u;
        r25 = 0u;
    } else {
        r11 = rd32(param_1);
        r12 = rd32(param_1 + 4u);
        r5 = rd32(param_1 + 8u);
        r27 = rd32(param_1 + 0xcu);
        r26 = rd32(param_1 + 0x10u);
        r25 = rd32(param_1 + 0x14u);
    }
    f2 = rdf64(0x805772c0u);
    r6 = 0u;
    ctr = (u32)param_4;
    if (param_4 > 0) {
        do {
            r5 = (u32)(s16)rd16(r29);
            r10 = 0u;
            r9 = 0u;
            r8 = 0u;
            r7 = 0u;
            r29 = r29 + 2u;
            if ((s32)r5 < (s32)r11) {
                r7 = 1u;
            }
            r19 = r5 - r11;
            r5 = (u32)((s32)r19 >> 31);
            r27 = (r5 ^ r19) - r5;
            if ((s32)r27 >= (s32)r12) {
                r8 = 1u;
                r27 = r27 - r12;
            }
            r26 = (u32)((s32)(((r12 >> 0x1fu) & 1u) + r12) >> 1);
            if ((s32)r27 >= (s32)r26) {
                r9 = 1u;
                r27 = r27 - r26;
            }
            r25 = (u32)((s32)(((r26 >> 0x1fu) & 1u) + r26) >> 1);
            if ((s32)r27 >= (s32)r25) {
                r10 = 1u;
                r27 = r27 - r25;
            }
            r5 = (1u - ((r7 << 1u) & 0xfffffffeu)) * ((r25 * r10) + (r12 * r8) + ((u32)((s32)(((r25 >> 0x1fu) & 1u) + r25) >> 1) + (r26 * r9)));
            if ((s32)r5 > 65535) {
                r5 = 0xffffu;
            }
            if ((s32)r5 < -65536) {
                r5 = 0xffff0000u;
            }
            r11 = r11 + r5;
            if ((s32)r11 > 32767) {
                r11 = 0x7fffu;
            }
            if ((s32)r11 < -32768) {
                r11 = 0xffff8000u;
            }
            r12 = r12 ^ 0x80000000u;
            r18 = (r8 << 2u) & 0xfffffffcu;
            wr32(0x817fdfbcu, r12);
            r9 = (r9 << 1u) & 0xfffffffeu;
            wr32(0x817fdfb8u, 0x43300000u);
            r8 = ((r9 + (r10 + r18)) << 3u) & 0xfffffff8u;
            r9 = r9 + r18;
            r12 = (u32)((s32)(((r6 >> 0x1fu) & 1u) + r6) >> 1);
            r7 = ((r7 << 3u) & 0xfffffff8u) + (r10 + r9);
            f0 = (rdf64(0x817fdfb8u) - f2) * rdf64(r8 - 0x7e802088u);
            r9 = ((r6 & 1u) - 1u) & 4u;
            r7 = r7 & 0xffu;
            r7 = ((r9 & 0x20u) != 0u) ? 0u : (r7 << (r9 & 0x1fu));
            r7 = (u32)rd8((u32)param_5 + r12) | r7;
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wr8((u32)param_5 + r12, (u8)r7);
            wrf64(0x817fdfc0u, f0);
            r12 = rd32(0x817fdfc4u);
            if ((s32)r12 <= 127) {
                r12 = 0x7fu;
            }
            if ((s32)r12 >= 24576) {
                r12 = 0x6000u;
            }
            r6 = r6 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    wr32(param_1, r11);
    wr32(param_1 + 4u, r12);
    wr32(param_1 + 8u, r5);
    wr32(param_1 + 0xcu, r27);
    wr32(param_1 + 0x10u, r26);
    wr32(param_1 + 0x14u, r25);
    return;
}
