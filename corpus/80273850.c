#include "tc_rt.h"

u32 fn_80273850(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    if (param_2 < 0x4000u) {
        r3 = 0xffffff80u;
    } else {
        wr32(0x805038dcu, param_3);
        wr8(0x80571ab0u, 1u);
        wr32(0x805038e0u, 0u);
        wr8(0x805038dau, 0u);
        wr32(0x805038fcu, 0u);
        wr32(0x80503900u, 0u);
        wr32(0x805038e4u, 0x8033dde8u);
        wr32(0x805038e8u, 0x8033de00u);
        wr32(0x805038ecu, (u32)param_1);
        wr32(0x805038f0u, 0x80003800u);
        wr32(0x805038f4u, 0x4000u);
        wr32(0x805038f8u, 0x100u);
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        a.r[2] = 0x4000u;
        (void)tc_call(0x8000443cu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x80570d78u;
        a.r[2] = 4u;
        (void)tc_call(0x80004338u, &a);
        a.r[0] = (u32)param_1 + 0x3ffcu;
        a.r[1] = 0x80570d80u;
        a.r[2] = 4u;
        (void)tc_call(0x80004338u, &a);
        wr16((u32)param_1 + 6u, 8u);
        r0 = (u32)rd8(0x805038dau);
        wr8(0x805038d9u, 0u);
        r0 = (r0 << 2u) & 0xfffffffcu;
        wr32(0x80571ac0u, 0u);
        r3 = rd32(r0 - 0x7fafc71cu);
        wr32(0x80571ab8u, 0u);
        wr32(0x80571ab4u, 0u);
        a.r[0] = r3;
        a.r[1] = 0x80503788u;
        a.r[2] = 1u;
        a.r[3] = 0x80273964u;
        a.r[4] = 0x80503814u;
        r3 = tc_call(0x80271bf4u, &a);
    }
    return r3;
}
