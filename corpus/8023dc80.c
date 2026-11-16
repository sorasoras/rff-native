#include "tc_rt.h"

void fn_8023dc80(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    if (rd32(0x805716a0u) == 0u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = rd32(0x80570b00u);
        a.r[2] = param_r5;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x80226610u, &a);
        wr32(0x805716a0u, 1u);
        if (((u32)rd16(0xcc002002u) & 1u) == 0u) {
            a.r[0] = 0u;
            (void)tc_call(0x8023da70u, &a);
        }
        wr32(0x8057174cu, 0u);
        r5 = (u32)rd16(0x80388aceu);
        r4 = (u32)rd16(0x80388accu);
        wr32(0x805716dcu, 0u);
        wr32(0x805716d8u, 0u);
        wr32(0x805716ecu, 0u);
        wr32(0x805716e8u, 0u);
        wr32(0x805716d0u, 0u);
        wr32(0x805716e0u, 0u);
        wr32(0x80571748u, 0u);
        wr32(0x80571744u, 0u);
        wr16(0xcc00204eu, (u16)(r4 | ((r5 << 0xau) & 0xfc00u)));
        wr16(0xcc00204cu, (u16)((u32)((s32)r5 >> 6) | (((u32)rd16(0x80388ad0u) << 4u) & 0xfffffff0u)));
        r4 = (u32)rd16(0x80388ad4u);
        r0 = (r4 << 0xau) & 0xfc00u;
        r4 = (u32)((s32)r4 >> 6);
        r0 = (u32)rd16(0x80388ad2u) | r0;
        wr16(0xcc002052u, (u16)r0);
        wr16(0xcc002050u, (u16)(r4 | (((u32)rd16(0x80388ad6u) << 4u) & 0xfffffff0u)));
        r4 = (u32)rd16(0x80388adau);
        r0 = (r4 << 0xau) & 0xfc00u;
        r4 = (u32)((s32)r4 >> 6);
        r0 = (u32)rd16(0x80388ad8u) | r0;
        wr16(0xcc002056u, (u16)r0);
        wr16(0xcc002054u, (u16)(r4 | (((u32)rd16(0x80388adcu) << 4u) & 0xfffffff0u)));
        wr16(0xcc00205au, (u16)((u32)rd16(0x80388adeu) | (((u32)rd16(0x80388ae0u) << 8u) & 0xffffff00u)));
        wr16(0xcc002058u, (u16)((u32)rd16(0x80388ae2u) | (((u32)rd16(0x80388ae4u) << 8u) & 0xffffff00u)));
        wr16(0xcc00205eu, (u16)((u32)rd16(0x80388ae6u) | (((u32)rd16(0x80388ae8u) << 8u) & 0xffffff00u)));
        wr16(0xcc00205cu, (u16)((u32)rd16(0x80388aeau) | (((u32)rd16(0x80388aecu) << 8u) & 0xffffff00u)));
        wr16(0xcc002062u, (u16)((u32)rd16(0x80388aeeu) | (((u32)rd16(0x80388af0u) << 8u) & 0xffffff00u)));
        wr16(0xcc002060u, (u16)((u32)rd16(0x80388af2u) | (((u32)rd16(0x80388af4u) << 8u) & 0xffffff00u)));
        wr16(0xcc002066u, (u16)((u32)rd16(0x80388af6u) | (((u32)rd16(0x80388af8u) << 8u) & 0xffffff00u)));
        wr16(0xcc002064u, (u16)((u32)rd16(0x80388afau) | (((u32)rd16(0x80388afcu) << 8u) & 0xffffff00u)));
        wr16(0xcc002070u, 0x280u);
        r3 = tc_call(0x8027504cu, &a);
        wr16(0x805716ceu, 0u);
        wr16(0x805716ccu, (u16)(s8)r3);
        r24 = rd32(0x800000ccu);
        r29 = (u32)rd16(0xcc002002u);
        r3 = tc_call(0x8022c2b0u, &a);
        if (((u32)rd16(0xcc00206cu) & 1u) != 1u) {
            r4 = ((u32)rd16(0xcc002002u) >> 2u) & 1u;
            r27 = (((0u - r4) | r4) >> 0x1fu) & 1u;
        } else {
            r27 = 2u;
        }
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r0 = (r29 >> 8u) & 3u;
        wr32(0x804e6254u, r27);
        wr32(0x804e6258u, r0);
        if (r24 == 5u || (r24 == 1u && r0 == 0u)) {
            wr32(0x804e6258u, 5u);
        }
        r5 = rd32(0x804e6258u);
        a.r[0] = (((r5 & ~(u32)((s32)~((r5 - 3u) | (3u - r5)) >> 31)) << 2u) & 0xfffffffcu) + rd32(0x804e6254u);
        r3 = tc_call(0x8023d958u, &a);
        r8 = rd32(0x804e6258u);
        wr32(0x804e6284u, r3);
        r0 = (u32)(s16)rd16(0x805716ccu);
        wr32(0x80571714u, r3);
        wr16(0x804e61bau, (u16)r29);
        wr32(0x80571710u, r8);
        r6 = r0 + 0x28u;
        r9 = 0x50u;
        wr16(0x804e6234u, 0x280u);
        r0 = ((u32)rd16(r3 + 2u) << 1u) & 0xfffeu;
        wr16(0x804e6230u, 0x28u);
        wr16(0x804e6236u, (u16)r0);
        wr16(0x804e6232u, 0u);
        r7 = (u32)rd16(r3 + 2u);
        if ((s32)r6 <= 80) {
            r9 = r6 & ~(u32)((s32)r6 >> 31);
        }
        r8 = (u32)(s16)rd16(0x805716ceu);
        r6 = (u32)rd16(0x804e6232u);
        r4 = rd32(0x804e6250u);
        r0 = (u32)(s16)r6;
        r6 = r6 & 1u;
        r10 = r0 + r8;
        wr16(0x804e6238u, (u16)r9);
        r4 = (ppc_cntlzw(r4) >> 5u) & 0x7ffffffu;
        r0 = r6;
        r5 = r4 + 1u;
        if ((s32)r10 > (s32)r6) {
            r0 = r10;
        }
        r7 = (u32)(s16)r7;
        r30 = (r7 << 1u) & 0xfffffffeu;
        r7 = (u32)rd16(0x804e6236u);
        r26 = r30 - r6;
        r27 = r8 + (u32)(s16)rd16(0x804e6232u);
        r11 = (u32)(s16)rd16(0x804e6232u) + r8;
        r25 = r27 - r6;
        r8 = (u32)(s16)r7 + r27 - r26;
        r10 = (u32)(s16)rd16(0x804e6236u) + r27;
        wr16(0x804e623au, (u16)r0);
        r24 = r10 - r26;
        r26 = r11 - r6;
        r8 = r8 & (u32)((s32)((0u - r8) & ~r8) >> 31);
        r7 = r7 + (r25 & (u32)((s32)r25 >> 31));
        wr16(0x804e623cu, (u16)(r7 - r8));
        r11 = (u32)rd16(0x804e624cu);
        r12 = (u32)rd16(0x804e6248u);
        wr16(0x804e6242u, 0x280u);
        r8 = (u32)ppc_divw((s32)(r26 & (u32)((s32)r26 >> 31)), (s32)r5);
        r7 = r11 + (u32)ppc_divw((s32)(r25 & (u32)((s32)r25 >> 31)), (s32)r5);
        r5 = (u32)ppc_divw((s32)(r24 & (u32)((s32)((0u - r24) & ~r24) >> 31)), (s32)r5);
        r8 = r12 - r8;
        wr16(0x804e623eu, (u16)r8);
        r5 = r7 - r5;
        wr16(0x804e6240u, (u16)r5);
        r5 = ((u32)rd16(r3 + 2u) << 1u) & 0xfffeu;
        wr16(0x804e6246u, 0u);
        wr16(0x804e6244u, (u16)r5);
        wr16(0x804e6248u, 0u);
        wr16(0x804e624au, 0x280u);
        r5 = ((u32)rd16(r3 + 2u) << 1u) & 0xfffeu;
        wr32(0x804e6250u, 0u);
        wr16(0x804e624cu, (u16)r5);
        wr8(0x804e625cu, 0x28u);
        wr8(0x804e625du, 0x28u);
        wr8(0x804e625eu, 0x28u);
        wr8(0x804e626cu, 0u);
        wr32(0x804e6270u, 1u);
        wr32(0x804e6274u, 0u);
        a.r[0] = 0x80571728u;
        (void)tc_call(0x8022efd4u, &a);
        wr16(0xcc002030u, (u16)((u32)rd16(0xcc002030u) & 0x7fffu));
        wr16(0xcc002034u, (u16)((u32)rd16(0xcc002034u) & 0x7fffu));
        wr32(0x80571720u, 0u);
        wr32(0x8057171cu, 0u);
        a.r[0] = 0x18u;
        a.r[1] = 0x8023d0c0u;
        (void)tc_call(0x8022c2fcu, &a);
        a.r[0] = 0x80u;
        (void)tc_call(0x8022c6c0u, &a);
        a.r[0] = 0x80388bb8u;
        (void)tc_call(0x8022d8b8u, &a);
        r3 = tc_call(0x8022c2b0u, &a);
        f1 = tc_lastf();
        r5 = rd32(0x80571710u);
        if (r5 <= 8u) {
            r4 = rd32(((r5 << 2u) & 0xfffffffcu) - 0x7fc77388u);
            sw_ = r4;
            switch (sw_) {
            case 0x8023e110u:
                r28 = 0u;
                break;
            case 0x8023e118u:
                r28 = 1u;
                break;
            case 0x8023e120u:
                r28 = r5;
                break;
            default:
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                r3 = tc_call(sw_, &a);
                r0 = 0u;
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                r11 = 0u;
                r12 = 0u;
                f0 = 0.0;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
                f9 = 0.0;
                f10 = 0.0;
                f11 = 0.0;
                f12 = 0.0;
                f13 = 0.0;
                ctr = 0u;
                return;
            }
        }
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        if (r28 == 1u) {
            wr32(0x805716b0u, 0x3a98u);
            wr32(0x805716b4u, 0x3a98u);
            wr32(0x805716b8u, 0x15f90u);
        } else {
            wr32(0x805716b0u, 0x4650u);
            wr32(0x805716b4u, 0x4650u);
            wr32(0x805716b8u, 0x1a5e0u);
        }
        wr32(0x805716bcu, 0u);
        r27 = 1u;
        wr32(0x805716c0u, 0u);
        wr32(0x80571738u, 0u);
        wr32(0x805716acu, 1u);
        wr32(0x805716c4u, 0u);
        r3 = tc_call(0x8027518cu, &a);
        if ((r3 & 0xffu) == 0u) {
            r27 = 0u;
        }
        wr32(0x80571740u, r27);
        wr32(0x8057173cu, 0u);
        (void)tc_call(0x8024160cu, &a);
    }
    return;
}
