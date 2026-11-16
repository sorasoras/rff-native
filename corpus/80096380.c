#include "tc_rt.h"

void fn_80096380(s32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    if ((u32)param_2 != 0u) {
        r5 = rd32((u32)param_1 + 0xd4u);
        if ((u32)((s32)r5 >> 31) != 0u && (u32)((s32)((r5 << 2u) & 0xc0000000u) >> 31) == 0u) {
            if (rd32((u32)param_1 + 0xd0u) == 3u) {
                return;
            }
            r3 = rd32((u32)param_2 + 0x2cu);
            if (r3 != 0u) {
                r0 = rd32(r3 + 0xb8u);
                if (r0 != 0u && r0 == 2u) {
                    a.r[0] = r3;
                    a.r[1] = (u32)param_2;
                    a.r[2] = r5;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.f[0] = 0.0;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    r3 = tc_call(rd32(rd32(r3) + 0x140u), &a);
                    if (r3 == 0u) {
                        return;
                    }
                }
            }
            r8 = rd32(0x804890c8u);
            f0 = (f64)rdf32(0x80572a38u);
            r7 = rd32(0x804890ccu);
            r0 = rd32(0x804890d0u);
            wr32(0x817fdfb8u, 0u);
            wr8(0x817fdfd4u, 0u);
            wr8(0x817fdfd5u, 0u);
            wr8(0x817fdfd6u, 0u);
            wr8(0x817fdfd7u, 0u);
            wr16(0x817fdfd8u, 0u);
            wr16(0x817fdfdau, 0u);
            wr32(0x817fdfdcu, 0u);
            wrf32d(0x817fdfe0u, f0);
            wr32(0x817fdfe4u, r8);
            wr32(0x817fdfe8u, r7);
            wr32(0x817fdfecu, r0);
            wr16(0x817fdfdau, rd16((u32)param_1 + 0xc2u));
            a.r[0] = (u32)param_2;
            a.r[1] = 0x817fdfd4u;
            a.r[2] = 0x804890c8u;
            a.r[3] = 0x817fdfb8u;
            r3 = tc_call(0x8006ebd8u, &a);
            r31 = r3;
            r5 = 0u;
            f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xccu) + (f64)rdf32(0x80572a50u));
            r0 = rd32(0x817fdfb8u);
            f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xc8u) + (f64)rdf32(0x80572a74u));
            c0lt = (s32)r0 < 0;
            wrf32d(0x817fdfc8u, (f64)rdf32((u32)param_1 + 0xc4u));
            wrf32d(0x817fdfd0u, f0);
            wrf32d(0x817fdfccu, f1);
            if ((s32)r0 > 0) {
                r5 = 2u;
            } else {
                if (c0lt) {
                    r5 = 1u;
                }
            }
            r7 = rd32(0x817fdfccu);
            r6 = rd32(0x817fdfd0u);
            wr32(0x817fdfbcu, rd32(0x817fdfc8u));
            r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)(r3 & 0xffffu)) >> 5);
            wr32(0x817fdfc0u, r7);
            wr32(0x817fdfc4u, r6);
            a.r[0] = r0 + ((r0 >> 0x1fu) & 1u);
            a.r[1] = 0x817fdfbcu;
            a.r[2] = r5;
            (void)tc_call(0x800d7d2cu, &a);
            a.r[0] = (u32)param_2;
            a.r[1] = 0u;
            r3 = tc_call(0x8007f0c4u, &a);
            if (rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fca9e94u) != 0u) {
                a.f[0] = (f64)rdf32(0x80572a3cu);
                a.r[0] = r3;
                a.r[1] = param_3;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                r3 = tc_call(0x800d7768u, &a);
                r30 = r3;
            } else {
                a.f[0] = (f64)rdf32(0x80572a3cu);
                a.r[0] = r3;
                a.r[1] = param_3;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                r3 = tc_call(0x800d783cu, &a);
                r30 = r3;
            }
            a.r[0] = (u32)param_2;
            a.r[1] = 0u;
            r3 = tc_call(0x8007f03cu, &a);
            if (r30 != 0u && r3 != 0xffffffffu) {
                a.r[1] = r3;
                r3 = tc_call(0x8010b43cu, &a);
                wr32(r30 + 0x20u, r3);
                wr32(r30 + 0x24u, 0u);
            }
            r5 = (u32)(s16)rd16((u32)param_1 + 0x102u);
            r3 = (u32)(s16)rd16((u32)param_1 + 0xc0u) + (u32)(s16)(0u - ((ppc_mulhwu(0x51eb851fu, r31 & 0xffffu) >> 5u) & 0xffffu));
            if ((s32)r3 < (s32)r5) {
                wr16((u32)param_1 + 0xc0u, (u16)(r3 & ~(u32)((s32)r3 >> 31)));
            } else {
                wr16((u32)param_1 + 0xc0u, (u16)r5);
            }
            if ((s32)(s16)rd16((u32)param_1 + 0xc0u) <= 0) {
                a.r[0] = (u32)param_1;
                (void)tc_call(0x800962d4u, &a);
                wr32((u32)param_1 + 0xd4u, rd32((u32)param_1 + 0xd4u) & 0x7fffffffu);
            }
        }
    }
    return;
}
