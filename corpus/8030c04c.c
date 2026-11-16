#include "tc_rt.h"

void fn_8030c04c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r14 = 0, r15 = 0, r16 = 0, r17 = 0, r18 = 0;
    u32 r19 = 0, r20 = 0, r21 = 0, r22 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
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
    r28 = rd32(param_2 + 0xcu);
    r31 = param_1;
    r30 = param_2;
    r29 = param_2 + 0x44u;
    r27 = 0u;
    while ((s32)r27 < (s32)rd32(param_1 + 0x8cu)) {
        if (rd32(r31 + 0xcu) != 0u) {
            r26 = rd32(r30 + 0x18u);
            if (rd32(param_2) == 3u) {
                r0 = (u32)rd16(r30 + 0x32u);
                wr32(0x817fdfa8u, (u32)rd16(r30 + 0x36u));
                r15 = (u32)rd16(r30 + 0x38u);
                wr16(0x817fdf7eu, (u16)r0);
                r0 = rd32(0x817fdfa8u);
                wr32(0x817fdf90u, r15);
                r15 = (u32)rd16(r30 + 0x3au);
                wr16(0x817fdf82u, (u16)r0);
                r0 = rd32(0x817fdf90u);
                wr32(0x817fdf94u, r15);
                r15 = (u32)rd16(r30 + 0x3cu);
                wr16(0x817fdf84u, (u16)r0);
                r0 = rd32(0x817fdf94u);
                wr32(0x817fdf98u, r15);
                r15 = (u32)rd16(r30 + 0x3eu);
                wr16(0x817fdf86u, (u16)r0);
                r0 = rd32(0x817fdf98u);
                wr32(0x817fdf9cu, r15);
                r15 = (u32)rd16(r30 + 0x40u);
                wr16(0x817fdf88u, (u16)r0);
                r0 = rd32(0x817fdf9cu);
                wr32(0x817fdfa0u, r15);
                r15 = (u32)rd16(r30 + 0x42u);
                wr16(0x817fdf8au, (u16)r0);
                r16 = (u32)rd16(r30 + 0x1cu);
                r17 = (u32)rd16(r30 + 0x1eu);
                r18 = (u32)rd16(r30 + 0x20u);
                r19 = (u32)rd16(r30 + 0x22u);
                r20 = (u32)rd16(r30 + 0x24u);
                r21 = (u32)rd16(r30 + 0x26u);
                r22 = (u32)rd16(r30 + 0x28u);
                r12 = (u32)rd16(r30 + 0x2au);
                r11 = (u32)rd16(r30 + 0x2cu);
                r10 = (u32)rd16(r30 + 0x2eu);
                r9 = (u32)rd16(r30 + 0x30u);
                r14 = (u32)rd16(r30 + 0x34u);
                wr16(0x817fdf8cu, (u16)rd32(0x817fdfa0u));
                wr32(0x817fdfa4u, r15);
                wr16(0x817fdf68u, (u16)r16);
                wr16(0x817fdf6au, (u16)r17);
                wr16(0x817fdf6cu, (u16)r18);
                wr16(0x817fdf6eu, (u16)r19);
                wr16(0x817fdf70u, (u16)r20);
                wr16(0x817fdf72u, (u16)r21);
                wr16(0x817fdf74u, (u16)r22);
                wr16(0x817fdf76u, (u16)r12);
                wr16(0x817fdf78u, (u16)r11);
                wr16(0x817fdf7au, (u16)r10);
                wr16(0x817fdf7cu, (u16)r9);
                wr16(0x817fdf80u, (u16)r14);
                wr16(0x817fdf8eu, (u16)r15);
                a.r[0] = 0x817fdf8au;
                a.r[1] = 0x817fdf8cu;
                a.r[2] = 0x817fdf8eu;
                a.r[3] = param_3;
                a.r[4] = r26;
                a.r[5] = 0x817fdf68u;
                (void)tc_call(0x802f3ce4u, &a);
            }
            r14 = r31;
            r15 = 0u;
            while ((s32)r15 < (s32)rd32(param_1 + 0x90u)) {
                r16 = rd32(r14 + 0xcu);
                if (r16 != 0u) {
                    a.r[0] = r16;
                    a.r[1] = rd32(r30 + 0x18u);
                    a.r[2] = rd32(param_2);
                    a.r[3] = r28;
                    (void)tc_call(0x802f1ca0u, &a);
                    a.r[0] = r16;
                    a.r[1] = (u32)rd8(param_2 + 4u);
                    a.r[2] = r26;
                    a.r[3] = param_3;
                    a.r[4] = rd32(param_2 + 0x10u);
                    a.r[5] = rd32(param_2 + 0x14u);
                    (void)tc_call(0x802f2874u, &a);
                    if (rd32(param_2) == 3u) {
                        a.r[0] = r16;
                        a.r[1] = 0x817fdf68u;
                        (void)tc_call(0x802f2d28u, &a);
                        a.r[0] = r16;
                        a.r[1] = r29;
                        (void)tc_call(0x802f2f98u, &a);
                    }
                    a.f[0] = (f64)rdf32(param_1 + 0xfcu);
                    a.r[0] = r16;
                    a.r[1] = 5u;
                    (void)tc_call(0x802f2c48u, &a);
                    a.r[0] = r16;
                    a.r[1] = 0u;
                    (void)tc_call(0x802f2664u, &a);
                }
                r14 = r14 + 4u;
                r15 = r15 + 1u;
            }
        }
        r31 = r31 + 0x10u;
        r30 = r30 + 0x34u;
        r29 = r29 + 0x34u;
        r27 = r27 + 1u;
    }
    f1 = (f64)rdf32(0x805777b8u);
    r3 = param_1;
    f0 = (f64)rdf32(0x805777bcu);
    r4 = 0u;
    while ((s32)r4 < (s32)rd32(param_1 + 0x90u)) {
        wrf32d(r3 + 0x2cu, f1);
        r4 = r4 + 1u;
        wrf32d(r3 + 0x30u, f1);
        wrf32d(r3 + 0x34u, f0);
        wrf32d(r3 + 0x38u, f0);
        wrf32d(r3 + 0x3cu, f0);
        wrf32d(r3 + 0x40u, f0);
        r3 = r3 + 0x18u;
    }
    r0 = (u32)rd8(param_1 + 0xa2u);
    wr8(param_1 + 0x9fu, 0u);
    r0 = r0 | 0x38u;
    wr8(param_1 + 0xa0u, 0u);
    wr8(param_1 + 0x9du, 0u);
    wr8(param_1 + 0x9eu, 0u);
    wr8(param_1 + 0xa2u, (u8)r0);
    return;
}
