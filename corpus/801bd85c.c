#include "tc_rt.h"

void fn_801bd85c(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r4 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r27 = rd32((u32)param_2 + 0x3e8u);
    r28 = (u32)param_1 + (r27 * 0x68u) + 0x2d8u;
    a.r[0] = r28;
    (void)tc_call(0x801f10e4u, &a);
    a.r[0] = r28;
    a.r[1] = 0x8033b883u;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = r28;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    r4 = r27 + 9u;
    r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r4) >> 2);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    r0 = r0 * 0xau;
    r24 = r4 - r0;
    if (rd32((u32)param_1 + 0x3cu) == 9u) {
        if (r24 != 9u) {
            r31 = 1u;
        }
    } else if (r24 == 9u) {
        r31 = 1u;
    }
    a.r[0] = (u32)param_2;
    a.r[1] = rd32((u32)param_2 + 0x3ecu);
    a.r[2] = r24;
    (void)tc_call(0x80119fb0u, &a);
    r26 = r24 * 0x68u;
    wr32((u32)param_2 + 0x3e8u, r24);
    wr32((u32)param_1 + r26 + 0x32cu, 0u);
    a.r[0] = rd32(0x80571398u);
    a.r[1] = 0u;
    a.r[2] = r24 - 1u;
    (void)tc_call(0x801c09c8u, &a);
    a.r[0] = (u32)param_2;
    a.r[1] = 0u;
    a.r[2] = rd32((u32)param_2 + 0x3e8u);
    (void)tc_call(0x80119fb0u, &a);
    r25 = (u32)param_1 + r26 + 0x2d8u;
    wr32((u32)param_2 + 0x3ecu, 0u);
    a.r[0] = r25;
    a.r[1] = 0x8033b888u;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = r25;
    (void)tc_call(0x801f10d8u, &a);
    a.r[0] = (u32)param_1 + 0x4cu;
    a.r[1] = rd32((u32)param_1 + r26 + 0x334u) - 4u;
    (void)tc_call(0x80190b28u, &a);
    a.r[0] = (u32)param_1 + 0x4cu;
    (void)tc_call(0x80190bd8u, &a);
    wr32((u32)param_1 + 0x3cu, r24);
    if (r24 != 9u) {
        if (r31 != 0u) {
            a.r[0] = (u32)param_1 + 0x114u;
            a.r[1] = 0x8033b86eu;
            (void)tc_call(0x801f100cu, &a);
            a.r[0] = (u32)param_1 + 0x114u;
            a.r[1] = 0u;
            (void)tc_call(0x801f10b8u, &a);
        }
    } else if (r31 != 0u) {
        a.r[0] = (u32)param_1 + 0x114u;
        a.r[1] = 0x8033b88fu;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = (u32)param_1 + 0x114u;
        a.r[1] = 0u;
        (void)tc_call(0x801f10b8u, &a);
    }
    return;
}
