#include "tc_rt.h"

void fn_802be858(u32 param_1, u32 param_2, s32 param_3)
{
    u32 ca = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r20 = 0;
    u32 r21 = 0, r23 = 0, r24 = 0, r28 = 0, r30 = 0, r31 = 0;
    u64 t1 = 0, t2 = 0, t7 = 0, t9 = 0, t14 = 0, t15 = 0, t16 = 0;
    if (param_1 == 0u || param_2 == 0u) {
    } else {
        r5 = rd32(param_2);
        r20 = param_2 + 0x50u;
        r12 = r20 + r5;
        if ((u32)param_3 == 1u) {
            r30 = param_1;
            r8 = 1u;
            r31 = param_1 + ((rd32(param_2 + 4u) << 1u) & 0xfffffffeu);
        } else {
            r30 = param_1;
            r31 = param_1 + 2u;
            r8 = 2u;
        }
        if (r5 == 0u) {
            r5 = (u32)rd8(r20);
            r11 = 0u;
            r9 = (u32)(s16)rd16(param_2 + 0x48u);
            r0 = (r5 >> 4u) & 7u;
            r7 = r5 & 0xfu;
            r10 = (u32)(s16)rd16(param_2 + 0x4au);
            r8 = (r8 << 1u) & 0xfffffffeu;
            r5 = r20 + 1u;
            r6 = 2u;
            while (r11 < rd32(param_2 + 4u)) {
                if ((r6 & 0xfu) == 0u) {
                    r3 = (u32)rd8(r5);
                    r5 = r5 + 1u;
                    r6 = r6 + 2u;
                    r0 = (r3 >> 4u) & 7u;
                    r7 = r3 & 0xfu;
                }
                if ((r6 & 1u) != 0u) {
                    r3 = (u32)rd8(r5);
                    r5 = r5 + 1u;
                    r3 = (r3 << 0x1cu) & 0xf0000000u;
                    r21 = (u32)((s32)r3 >> 28);
                } else {
                    r21 = (u32)((s32)(((u32)rd8(r5) << 0x18u) & 0xf0000000u) >> 28);
                }
                r3 = r7 & 0xffu;
                r12 = param_2 + ((r0 << 2u) & 0x3fcu);
                r28 = (u32)(s16)r10;
                r10 = (u32)(s16)rd16(r12 + 0xau);
                r3 = ((r3 & 0x20u) != 0u) ? 0u : (r21 << (r3 & 0x1fu));
                r12 = (u32)(s16)rd16(r12 + 8u);
                r28 = r28 * r10;
                r10 = (r3 << 0xbu) & 0xfffff800u;
                r6 = r6 + 1u;
                r21 = (u32)(s16)r9 * r12;
                r3 = (u32)((s32)r28 >> 31);
                ca = (r28 + r21) < r28;
                r28 = r28 + r21;
                r12 = r28 + r10;
                t1 = (u64)(u32)((u64)r3 + (u64)(u32)((s32)r21 >> 31) + (u64)ca) + (u64)(u32)((s32)r10 >> 31) + (u64)((r28 + r10) < r28);
                r10 = (r12 << 5u) & 0xffffffe0u;
                r20 = r10 + 0x8000u;
                t2 = (u64)((((u32)t1 << 5u) & 0xffffffe0u) | ((r12 >> 0x1bu) & 0x1fu)) + (u64)((r10 + 0x8000u) < r10);
                r3 = (u32)t2;
                if ((0u - (u32)((u64)(u32)(((u64)~((u32)t2 ^ 0x80000000u) + 0x80000000ull + (u64)(r20 <= 0x7fffffffu)) >> 0x20ull) + 0xffffffffull)) != 0u) {
                    r20 = 0x7fffffffu;
                    r3 = 0u;
                }
                r10 = r3 ^ 0x80000000u;
                if ((0u - (u32)((u64)~r10 + (u64)r10 + (u64)(u32)(((u64)r10 + 0x80000000ull + (u64)(r20 >= 0x80000000u)) >> 0x20ull))) != 0u) {
                    r20 = 0x80000000u;
                    r3 = 0xffffffffu;
                }
                r10 = r9;
                r12 = (((r20 << 0x10u) | (r20 >> 0x10u)) & 0xffffu) | ((r3 << 0x10u) & 0xffff0000u);
                wr16(r31, (u16)r12);
                r9 = r12;
                r31 = r31 + r8;
                r11 = r11 + 1u;
                wr16(r30, (u16)r12);
                r30 = r30 + r8;
            }
        } else {
            r0 = (u32)rd8(r20);
            r6 = 0u;
            r3 = (u32)(s16)rd16(param_2 + 0x48u);
            r10 = (r0 >> 4u) & 7u;
            r11 = r0 & 0xfu;
            r0 = (r8 << 1u) & 0xfffffffeu;
            r5 = (u32)(s16)rd16(param_2 + 0x4au);
            r8 = r20 + 1u;
            r9 = 2u;
            while (r6 < rd32(param_2 + 4u)) {
                if ((r9 & 0xfu) == 0u) {
                    r7 = (u32)rd8(r8);
                    r8 = r8 + 1u;
                    r9 = r9 + 2u;
                    r10 = (r7 >> 4u) & 7u;
                    r11 = r7 & 0xfu;
                }
                if ((r9 & 1u) != 0u) {
                    r7 = (u32)rd8(r8);
                    r8 = r8 + 1u;
                    r7 = (r7 << 0x1cu) & 0xf0000000u;
                    r24 = (u32)((s32)r7 >> 28);
                } else {
                    r24 = (u32)((s32)(((u32)rd8(r8) << 0x18u) & 0xf0000000u) >> 28);
                }
                r7 = r11 & 0xffu;
                r20 = param_2 + ((r10 << 2u) & 0x3fcu);
                r21 = (u32)(s16)r5 * (u32)(s16)rd16(r20 + 0xau);
                r23 = ((((r7 & 0x20u) != 0u) ? 0u : (r24 << (r7 & 0x1fu))) << 0xbu) & 0xfffff800u;
                r9 = r9 + 1u;
                r24 = (u32)(s16)r3 * (u32)(s16)rd16(r20 + 8u);
                r5 = (u32)((s32)r24 >> 31);
                ca = (r21 + r24) < r21;
                r24 = r21 + r24;
                t7 = (u64)(u32)((s32)r21 >> 31) + (u64)r5 + (u64)ca;
                r5 = (u32)((s32)r23 >> 31);
                ca = (r24 + r23) < r24;
                r23 = r24 + r23;
                r7 = (r23 << 5u) & 0xffffffe0u;
                r5 = ((u32)((u64)(u32)t7 + (u64)r5 + (u64)ca) << 5u) & 0xffffffe0u;
                r5 = (r5 & 0xffffffe0u) | ((r23 >> 0x1bu) & 0x1fu);
                r20 = r7 + 0x8000u;
                t9 = (u64)r5 + (u64)((r7 + 0x8000u) < r7);
                r7 = (u32)t9;
                if ((0u - (u32)((u64)(u32)(((u64)~((u32)t9 ^ 0x80000000u) + 0x80000000ull + (u64)(r20 <= 0x7fffffffu)) >> 0x20ull) + 0xffffffffull)) != 0u) {
                    r20 = 0x7fffffffu;
                    r7 = 0u;
                }
                r5 = r7 ^ 0x80000000u;
                if ((0u - (u32)((u64)~r5 + (u64)r5 + (u64)(u32)(((u64)r5 + 0x80000000ull + (u64)(r20 >= 0x80000000u)) >> 0x20ull))) != 0u) {
                    r20 = 0x80000000u;
                    r7 = 0xffffffffu;
                }
                r5 = r3;
                r23 = (((r20 << 0x10u) | (r20 >> 0x10u)) & 0xffffu) | ((r7 << 0x10u) & 0xffff0000u);
                wr16(r31, (u16)r23);
                r3 = r23;
                r31 = r31 + r0;
                r6 = r6 + 1u;
            }
            r8 = (u32)rd8(r12);
            r7 = 0u;
            r5 = (u32)(s16)rd16(param_2 + 0x4cu);
            r10 = (r8 >> 4u) & 7u;
            r11 = r8 & 0xfu;
            r6 = (u32)(s16)rd16(param_2 + 0x4eu);
            r8 = r12 + 1u;
            r9 = 2u;
            while (r7 < rd32(param_2 + 4u)) {
                if ((r9 & 0xfu) == 0u) {
                    r3 = (u32)rd8(r8);
                    r8 = r8 + 1u;
                    r9 = r9 + 2u;
                    r10 = (r3 >> 4u) & 7u;
                    r11 = r3 & 0xfu;
                }
                if ((r9 & 1u) != 0u) {
                    r3 = (u32)rd8(r8);
                    r8 = r8 + 1u;
                    r3 = (r3 << 0x1cu) & 0xf0000000u;
                    r21 = (u32)((s32)r3 >> 28);
                } else {
                    r21 = (u32)((s32)(((u32)rd8(r8) << 0x18u) & 0xf0000000u) >> 28);
                }
                r3 = r11 & 0xffu;
                r12 = param_2 + ((r10 << 2u) & 0x3fcu);
                r23 = (u32)(s16)r6;
                r6 = (u32)(s16)rd16(r12 + 0x2au);
                r12 = (u32)(s16)rd16(r12 + 0x28u);
                r3 = ((r3 & 0x20u) != 0u) ? 0u : (r21 << (r3 & 0x1fu));
                r23 = r23 * r6;
                r9 = r9 + 1u;
                r6 = (r3 << 0xbu) & 0xfffff800u;
                r12 = (u32)(s16)r5 * r12;
                r3 = (u32)((s32)r12 >> 31);
                ca = (r23 + r12) < r23;
                r12 = r23 + r12;
                t14 = (u64)(u32)((s32)r23 >> 31) + (u64)r3 + (u64)ca;
                ca = (r12 + r6) < r12;
                r12 = r12 + r6;
                t15 = (u64)(u32)t14 + (u64)(u32)((s32)r6 >> 31) + (u64)ca;
                r6 = (r12 << 5u) & 0xffffffe0u;
                r21 = r6 + 0x8000u;
                t16 = (u64)((((u32)t15 << 5u) & 0xffffffe0u) | ((r12 >> 0x1bu) & 0x1fu)) + (u64)((r6 + 0x8000u) < r6);
                r20 = (u32)t16;
                if ((0u - (u32)((u64)(u32)(((u64)~((u32)t16 ^ 0x80000000u) + 0x80000000ull + (u64)(r21 <= 0x7fffffffu)) >> 0x20ull) + 0xffffffffull)) != 0u) {
                    r21 = 0x7fffffffu;
                    r20 = 0u;
                }
                r3 = r20 ^ 0x80000000u;
                if ((0u - (u32)((u64)~r3 + (u64)r3 + (u64)(u32)(((u64)r3 + 0x80000000ull + (u64)(r21 >= 0x80000000u)) >> 0x20ull))) != 0u) {
                    r21 = 0x80000000u;
                    r20 = 0xffffffffu;
                }
                r6 = r5;
                r12 = (((r21 << 0x10u) | (r21 >> 0x10u)) & 0xffffu) | ((r20 << 0x10u) & 0xffff0000u);
                wr16(r30, (u16)r12);
                r5 = r12;
                r30 = r30 + r0;
                r7 = r7 + 1u;
            }
        }
    }
    return;
}
