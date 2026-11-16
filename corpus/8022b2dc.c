#include "tc_rt.h"

void fn_8022b2dc(u32 param_1, u32 param_2, s32 param_3)
{
    u32 ca = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r11 = 0, r12 = 0;
    u32 r25 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    u64 t0 = 0, t2 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    if (param_2 != 1u) {
        r27 = param_1;
        r31 = 0x1fcf00u;
        r30 = 0x3000u;
        while ((s32)r30 > 0) {
            r25 = 0x100u;
            if ((s32)r30 <= 256) {
                r25 = r30;
            }
            r30 = r30 - r25;
            do {
                a.r[0] = r27;
                a.r[1] = r25;
                a.r[2] = r31;
                r3 = tc_call(0x8022e868u, &a);
                f1 = tc_lastf();
            } while (r3 == 0u);
            r31 = r31 + r25;
            r27 = r27 + r25;
        }
    } else {
        r27 = param_1;
        r31 = 0x1aff00u;
        r30 = 0x4d000u;
        while ((s32)r30 > 0) {
            r25 = 0x100u;
            if ((s32)r30 <= 256) {
                r25 = r30;
            }
            r30 = r30 - r25;
            do {
                a.r[0] = r27;
                a.r[1] = r25;
                a.r[2] = r31;
                r3 = tc_call(0x8022e868u, &a);
                f1 = tc_lastf();
            } while (r3 == 0u);
            r31 = r31 + r25;
            r27 = r27 + r25;
        }
    }
    if ((u32)rd8(param_1) != 0x59u || (u32)rd8(param_1 + 1u) != 0x61u || (u32)rd8(param_1 + 2u) != 0x79u) {
        r27 = 0u;
    } else {
        r27 = rd32(param_1 + 4u);
    }
    if (r27 != 0u) {
        a.r[0] = param_1;
        a.r[1] = (u32)param_3;
        r3 = tc_call(0x8022b064u, &a);
        f1 = tc_lastf();
        if (param_2 == 1u) {
            r28 = (u32)rd16(0x80576b38u);
            r29 = (u32)rd16(0x80576b3au);
            r30 = (u32)rd16(0x80576b3cu);
            r31 = (u32)rd16(0x80576b3eu);
            a.r[0] = param_2;
            a.r[1] = 0x54u;
            r3 = tc_call(0x8022af30u, &a);
            f1 = tc_lastf();
            r9 = (u32)rd16((u32)param_3 + 0x1au);
            r4 = (u32)rd16((u32)param_3 + 0x1cu);
            r0 = (u32)rd16((u32)param_3 + 0x1eu);
            r10 = r9 * r4;
            r4 = (r0 << 2u) & 0xffffffe0u;
            r0 = (r0 >> 0x1du) & 1u;
            r12 = (u32)ppc_divw((s32)r3, (s32)r10);
            r0 = r0 + r4;
            r4 = (u32)param_3 + rd32((u32)param_3 + 0x24u);
            r11 = (u32)((s32)r0 >> 1);
            r3 = r3 - (r12 * r10);
            r5 = (u32)ppc_divw((s32)r3, (s32)r9);
            r0 = r5 * r9;
            r5 = r5 * (u32)rd16((u32)param_3 + 0x12u);
            r6 = r5 + 4u;
            r25 = (r3 - r0) * (u32)rd16((u32)param_3 + 0x10u);
            r10 = r5 + 5u;
            t0 = (u64)(u32)((s32)r6 >> 3) + (u64)(((s32)r6 < 0) && ((r6 & 7u) != 0u));
            r7 = (r6 >> 0x1fu) & 1u;
            r12 = r12 * rd32((u32)param_3 + 0x14u);
            r0 = ((r6 << 0x1du) & 0xe0000000u) - r7;
            r6 = (r25 >> 0x1fu) & 1u;
            r12 = (r12 >> 1u) & 0x7fffffffu;
            r7 = ((r0 << 3u) | (r0 >> 0x1du)) + r7;
            r0 = ((r25 << 0x1du) & 0xe0000000u) - r6;
            r4 = r4 + r12;
            r3 = (r0 << 3u) | (r0 >> 0x1du);
            r0 = ((u32)((u64)(u32)((s32)r25 >> 3) + (u64)(((s32)r25 < 0) && ((r25 & 7u) != 0u))) << 4u) & 0xfffffff0u;
            r3 = r3 + r6;
            ca = ((s32)r3 < 0) && ((r3 & 3u) != 0u);
            r3 = (u32)((s32)r3 >> 2);
            r9 = r4 + (r11 * (u32)t0) + r0 + ((r7 << 1u) & 0xfffffffeu);
            r7 = (r10 >> 0x1fu) & 1u;
            t2 = (u64)r3 + (u64)ca;
            r8 = r5 + 6u;
            wr16(r9 + (u32)t2, (u16)r28);
            r6 = ((r10 << 0x1du) & 0xe0000000u) - r7;
            r6 = (r6 << 3u) | (r6 >> 0x1du);
            r6 = r6 + r7;
            r11 = (u32)rd16((u32)param_3 + 0x1eu);
            r9 = (r6 << 1u) & 0xfffffffeu;
            r7 = (r8 >> 0x1fu) & 1u;
            r12 = (r11 << 2u) & 0xffffffe0u;
            r11 = (r11 >> 0x1du) & 1u;
            r11 = r11 + r12;
            r11 = (u32)((s32)r11 >> 1);
            ca = ((s32)r10 < 0) && ((r10 & 7u) != 0u);
            r10 = (u32)((s32)r10 >> 3);
            r6 = ((r8 << 0x1du) & 0xe0000000u) - r7;
            r6 = (r6 << 3u) | (r6 >> 0x1du);
            r6 = r6 + r7;
            r10 = r11 * (u32)((u64)r10 + (u64)ca);
            r6 = (r6 << 1u) & 0xfffffffeu;
            wr16(r4 + r10 + r0 + r9 + (u32)t2, (u16)r29);
            r7 = (u32)rd16((u32)param_3 + 0x1eu);
            r9 = (r7 << 2u) & 0xffffffe0u;
            r7 = (r7 >> 0x1du) & 1u;
            r7 = r7 + r9;
            wr16(r4 + ((u32)((s32)r7 >> 1) * (u32)((u64)(u32)((s32)r8 >> 3) + (u64)(((s32)r8 < 0) && ((r8 & 7u) != 0u)))) + r0 + r6 + (u32)t2, (u16)r30);
            r7 = r5 + 7u;
            r8 = (u32)rd16((u32)param_3 + 0x1eu);
            r6 = (r7 >> 0x1fu) & 1u;
            r5 = ((r7 << 0x1du) & 0xe0000000u) - r6;
            r9 = (r8 << 2u) & 0xffffffe0u;
            r8 = (r8 >> 0x1du) & 1u;
            r8 = r8 + r9;
            r5 = (r5 << 3u) | (r5 >> 0x1du);
            r8 = (u32)((s32)r8 >> 1);
            ca = ((s32)r7 < 0) && ((r7 & 7u) != 0u);
            r7 = (u32)((s32)r7 >> 3);
            r5 = r5 + r6;
            r5 = (r5 << 1u) & 0xfffffffeu;
            r4 = r4 + (r8 * (u32)((u64)r7 + (u64)ca));
            r4 = r4 + r0;
            r4 = r4 + r5;
            wr16(r4 + (u32)t2, (u16)r31);
        }
    }
    return;
}
