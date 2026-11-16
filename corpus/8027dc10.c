#include "tc_rt.h"

void fn_8027dc10(u32 param_r3, u32 param_r4)
{
    u32 c0lt = 0, ca = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r25 = (u32)rd16(param_r4 + 0x1au);
    r27 = rd32(param_r4) & 0xffu;
    r26 = param_r4 + 4u;
    r3 = tc_call(0x8022c2b0u, &a);
    r28 = rd32(((param_r3 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r29 = (u32)rd8(r28 + 0x8c3u);
    r23 = rd32(r28 + 0x8bcu);
    if ((s32)(s8)r29 >= 0) {
        wr32(r28 + 0x8bcu, 0xfffffffeu);
        r30 = rd32(r28 + 0x8d4u) & rd32(0x80571afcu);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        if (r27 != 0x10u) {
            if (r27 != 0x18u) {
                r3 = tc_call(0x8022c2b0u, &a);
                c0lt = (s32)r27 < 23;
                r31 = r3;
                if (r27 == 0x17u) {
                    wr32(r28 + 0x97cu, 0u);
                    wr32(r28 + 0x978u, rd32(param_r4 + 0x24u));
                    wr16(r28 + 0x980u, rd16(param_r4 + 0x20u));
                    wr32(r28 + 0x974u, rd32(param_r4 + 0x1cu));
                } else if (!c0lt) {
                    if (r27 == 0xffu) {
                        a.r[0] = 0x817fdfc8u;
                        a.r[1] = r26;
                        a.r[2] = 4u;
                        (void)tc_call(0x80004338u, &a);
                        r3 = tc_call(0x802302bcu, &a);
                        r4 = tc_lastr4();
                        r6 = rd32(0x817fdfc8u);
                        ca = (r6 + r4) < r6;
                        r4 = r6 + r4;
                        wr32(r28 + 0x90cu, r4);
                        wr32(r28 + 0x908u, (u32)((u64)r3 + (u64)ca));
                        wr8(r28 + 0x910u, 1u);
                        return;
                    }
                    wr8(r26, (u8)((u32)rd8(r26) | 2u));
                } else {
                    c0lt = (s32)r27 < 21;
                    if (r27 == 0x15u) {
                        wr32(r28 + 0x8bcu, r23);
                        wr32(r28 + 0x850u, rd32(param_r4 + 0x28u));
                        wr8(r28 + 0x8c0u, 1u);
                    } else if (c0lt) {
                        wr8(r26, (u8)((u32)rd8(r26) | 2u));
                    }
                }
                wr32(r28 + 0x89cu, rd32(param_r4 + 0x2cu));
                wr8(r28 + 0x987u, (u8)r27);
                r3 = tc_call(0x802302bcu, &a);
                r4 = tc_lastr4();
                r0 = (rd32(0x800000f8u) >> 1u) & 0x7ffffffeu;
                ca = (r0 + r4) < r0;
                r0 = r0 + r4;
                wr32(r28 + 0x90cu, r0);
                wr32(r28 + 0x908u, (u32)((u64)r3 + (u64)ca));
                wr8(r28 + 0x910u, 0u);
                a.r[0] = r31;
                (void)tc_call(0x8022c2d8u, &a);
            } else {
                r3 = tc_call(0x8022c2b0u, &a);
                wr32(r28 + 0x8bcu, r23);
                wr8(r28 + 0x8cfu, (u8)((u32)rd8(r28 + 0x8cfu) - 1u));
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
            }
        } else {
            r3 = tc_call(0x8022c2b0u, &a);
            wr32(r28 + 0x8bcu, r23);
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
        }
        (void)tc_call(0x80284b24u, &a);
        a.r[0] = (r25 + 0x12u) & 0xffu;
        r3 = tc_call(0x8028a0d4u, &a);
        r28 = r3 + 0x12u;
        wr16(r3 + 2u, (u16)((r25 + 1u) & 0xffu));
        r24 = r3;
        wr16(r3 + 4u, 0xau);
        wr8(r28, (u8)r27);
        a.r[0] = r28 + 1u;
        a.r[1] = r26;
        a.r[2] = r25;
        (void)tc_call(0x80004338u, &a);
        if (r30 == 0u) {
            wr8(r28 + 1u, (u8)((u32)rd8(r28 + 1u) & 0xfeu));
        } else {
            wr8(r28 + 1u, (u8)((u32)rd8(r28 + 1u) | 1u));
        }
        a.r[0] = r29;
        a.r[1] = r24;
        (void)tc_call(0x80292678u, &a);
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
