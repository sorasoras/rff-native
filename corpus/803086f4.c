#include "tc_rt.h"

void fn_803086f4(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r8 = 0, r27 = 0, r28 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = (u32)param_4;
    a.r[0] = 0x80563da0u;
    (void)tc_call(0x8022d56cu, &a);
    wr32(0x817fdf98u, param_2);
    a.r[0] = 0x817fdf9cu;
    (void)tc_call(0x80307020u, &a);
    a.r[0] = 0x817fdf98u;
    a.r[1] = 0x8055fda0u;
    a.r[2] = 0x4000u;
    r3 = tc_call(0x80307408u, &a);
    if (r3 != 0u) {
        a.r[0] = 0x817fdf98u;
        a.r[1] = param_1 + 0xdcu;
        r3 = tc_call(0x80307614u, &a);
        if (r3 != 0u) {
            if (rd32(param_1 + 0x82cu) == 0u) {
                a.r[0] = 0x817fdf98u;
                r3 = tc_call(0x803075ccu, &a);
                if ((s32)r3 > 16) {
                    r3 = 0x10u;
                }
                wr32(param_1 + 0x82cu, r3);
            }
            r27 = 0u;
            r28 = 0u;
            while ((s32)r27 < (s32)rd32(param_1 + 0x828u)) {
                a.r[0] = 0x817fdf98u;
                a.r[1] = param_1 + r28 + 0xb7cu;
                a.r[2] = r27;
                r3 = tc_call(0x80307650u, &a);
                if (r3 == 0u) {
                    a.r[0] = 0x80563da0u;
                    (void)tc_call(0x8022d648u, &a);
                    return;
                }
                r27 = r27 + 1u;
                r28 = r28 + 0x38u;
            }
            if (((ppc_cntlzw(rd32(param_1 + 0xdcu) - 3u) >> 5u) & 0x7ffffffu) != 0u) {
                r27 = 0u;
                r28 = 0u;
                while ((s32)r27 < (s32)rd32(param_1 + 0x82cu)) {
                    r5 = param_1 + r28;
                    r4 = r5 + 0x838u;
                    r5 = r5 + 0x860u;
                    a.r[0] = 0x817fdf98u;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r27;
                    r3 = tc_call(0x8030768cu, &a);
                    if (r3 == 0u) {
                        a.r[0] = 0x80563da0u;
                        (void)tc_call(0x8022d648u, &a);
                        return;
                    }
                    r27 = r27 + 1u;
                    r28 = r28 + 0x34u;
                }
                if ((u32)param_4 != 0u) {
                    if ((u32)param_3 != 0u && (u32)param_3 == 1u) {
                        r0 = (u32)((s32)ppc_mulhw(274877907, (s32)((u32)param_4 * rd32(param_1 + 0xe8u))) >> 6);
                        r30 = r0 + ((r0 >> 0x1fu) & 1u);
                    }
                    a.r[0] = 0x817fdf98u;
                    a.r[1] = 0x817fdfc8u;
                    a.r[2] = 0x817fdfa8u;
                    a.r[3] = (u32)ppc_divw((s32)r30, (s32)rd32(param_1 + 0x104u));
                    a.r[4] = rd32(param_1 + 0xe4u);
                    r3 = tc_call(0x8030781cu, &a);
                    if (r3 == 0u) {
                        a.r[0] = 0x80563da0u;
                        (void)tc_call(0x8022d648u, &a);
                        return;
                    }
                    r8 = 0u;
                    r3 = 0u;
                    r4 = 0u;
                    while ((s32)r8 < (s32)rd32(param_1 + 0xe4u)) {
                        r6 = param_1 + r3;
                        r8 = r8 + 1u;
                        r3 = r3 + 0x34u;
                        wr16(r6 + 0x85cu, rd16(r4 - 0x7e802038u));
                        r0 = (u32)rd16(r4 - 0x7e802058u);
                        r4 = r4 + 2u;
                        wr16(r6 + 0x85eu, (u16)r0);
                    }
                }
            }
            a.r[0] = param_1;
            r3 = tc_call(0x80308c14u, &a);
            if (r3 != 0u) {
                r27 = 0u;
                wr32(param_1 + 0x130u, 0u);
                while ((s32)r27 < (s32)rd32(param_1 + 0x140u)) {
                    a.r[0] = param_1;
                    (void)tc_call(0x80309b04u, &a);
                    c0eq = (u32)rd8(param_1 + 0x12au) == 0u;
                    wr32(param_1 + 0x130u, rd32(param_1 + 0x130u) + 1u);
                    if (!c0eq) break;
                    r27 = r27 + 1u;
                }
                r4 = rd32(param_1 + 0xfcu);
                if (r4 <= 2u && (u32)rd8(param_1 + 0xe0u) == 0u) {
                    r4 = r4 - 1u;
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    (void)tc_call(0x80309a14u, &a);
                }
                a.r[0] = 0x80563da0u;
                (void)tc_call(0x8022d648u, &a);
            } else {
                a.r[0] = 0x80563da0u;
                (void)tc_call(0x8022d648u, &a);
            }
        } else {
            a.r[0] = 0x80563da0u;
            (void)tc_call(0x8022d648u, &a);
        }
    } else {
        a.r[0] = 0x80563da0u;
        (void)tc_call(0x8022d648u, &a);
    }
    return;
}
