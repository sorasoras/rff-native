#include "tc_rt.h"

u32 fn_800ef65c(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r14 = 0, r15 = 0;
    u32 r16 = 0, r17 = 0, r18 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
    wr32(0x817fdf50u, 0x817fe000u);
    r0 = 0u;
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
    if (param_1 >= 647 && param_1 <= 743) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        r18 = (u32)rd16(((((u32)param_1 - 0x287u) << 4u) & 0xfffffff0u) - 0x7fb60e4cu);
        if (r18 != 0u) {
            r20 = (u32)rd16(0x80338d00u);
            r17 = 0u;
            r16 = 0u;
            r0 = (u32)rd16(0x80338d26u);
            r3 = 0u;
            wr32(0x817fdfb0u, (u32)rd16(0x80338d2au));
            r15 = (u32)rd16(0x80338d2cu);
            wr16(0x817fdf7eu, (u16)r0);
            r0 = rd32(0x817fdfb0u);
            wr32(0x817fdf94u, r15);
            r15 = (u32)rd16(0x80338d2eu);
            wr16(0x817fdf82u, (u16)r0);
            r0 = rd32(0x817fdf94u);
            wr32(0x817fdf98u, r15);
            r15 = (u32)rd16(0x80338d30u);
            wr16(0x817fdf84u, (u16)r0);
            r0 = rd32(0x817fdf98u);
            wr32(0x817fdf9cu, r15);
            r15 = (u32)rd16(0x80338d32u);
            wr16(0x817fdf86u, (u16)r0);
            r0 = rd32(0x817fdf9cu);
            wr32(0x817fdfa0u, r15);
            r15 = (u32)rd16(0x80338d34u);
            wr16(0x817fdf88u, (u16)r0);
            r0 = rd32(0x817fdfa0u);
            wr32(0x817fdfa4u, r15);
            r15 = (u32)rd16(0x80338d36u);
            wr16(0x817fdf8au, (u16)r0);
            r0 = rd32(0x817fdfa4u);
            wr32(0x817fdfa8u, r15);
            r15 = (u32)rd16(0x80338d38u);
            wr16(0x817fdf8cu, (u16)r0);
            r0 = rd32(0x817fdfa8u);
            wr32(0x817fdfacu, r15);
            r21 = (u32)rd16(0x80338d02u);
            wr16(0x817fdf8eu, (u16)r0);
            r22 = (u32)rd16(0x80338d04u);
            r23 = (u32)rd16(0x80338d06u);
            r24 = (u32)rd16(0x80338d08u);
            r25 = (u32)rd16(0x80338d0au);
            r26 = (u32)rd16(0x80338d0cu);
            r27 = (u32)rd16(0x80338d0eu);
            r28 = (u32)rd16(0x80338d10u);
            r29 = (u32)rd16(0x80338d12u);
            r30 = (u32)rd16(0x80338d14u);
            r31 = (u32)rd16(0x80338d16u);
            r12 = (u32)rd16(0x80338d18u);
            r11 = (u32)rd16(0x80338d1au);
            r10 = (u32)rd16(0x80338d1cu);
            r9 = (u32)rd16(0x80338d1eu);
            r8 = (u32)rd16(0x80338d20u);
            r7 = (u32)rd16(0x80338d22u);
            r6 = (u32)rd16(0x80338d24u);
            r14 = (u32)rd16(0x80338d28u);
            r15 = (u32)rd16(0x80338d3au);
            wr16(0x817fdf90u, (u16)rd32(0x817fdfacu));
            wr16(0x817fdf58u, (u16)r20);
            wr16(0x817fdf5au, (u16)r21);
            wr16(0x817fdf5cu, (u16)r22);
            wr16(0x817fdf5eu, (u16)r23);
            wr16(0x817fdf60u, (u16)r24);
            wr16(0x817fdf62u, (u16)r25);
            wr16(0x817fdf64u, (u16)r26);
            wr16(0x817fdf66u, (u16)r27);
            wr16(0x817fdf68u, (u16)r28);
            wr16(0x817fdf6au, (u16)r29);
            wr16(0x817fdf6cu, (u16)r30);
            wr16(0x817fdf6eu, (u16)r31);
            wr16(0x817fdf70u, (u16)r12);
            wr16(0x817fdf72u, (u16)r11);
            wr16(0x817fdf74u, (u16)r10);
            wr16(0x817fdf76u, (u16)r9);
            wr16(0x817fdf78u, (u16)r8);
            wr16(0x817fdf7au, (u16)r7);
            wr16(0x817fdf7cu, (u16)r6);
            wr16(0x817fdf80u, (u16)r14);
            wr16(0x817fdf92u, (u16)r15);
            ctr = 0xfu;
            do {
                if (param_2 == (u32)rd16(r3 - 0x7e8020a8u)) {
                    r17 = (u32)rd16((((r16 + 1u) << 1u) & 0xfffffffeu) - 0x7e8020a8u);
                    break;
                }
                r16 = r16 + 2u;
                r3 = r3 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
            if (r17 != 0u) {
                if ((r18 & r17) != 0u) {
                    if ((param_2 == 0x1eu || param_2 == 0x1fu) && (u32)rd8((param_2 * 0x38u) - 0x7fb64fcbu) < 2u) {
                        r3 = 0u;
                    } else {
                        r3 = 1u;
                    }
                } else {
                    r3 = 0u;
                }
            } else {
                r3 = 0u;
            }
        } else {
            r3 = 0u;
        }
    } else {
        r3 = 0u;
    }
    return r3;
}
