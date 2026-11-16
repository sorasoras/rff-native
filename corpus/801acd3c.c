#include "tc_rt.h"

void fn_801acd3c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0xd04u);
    if ((u32)(s8)rd8(0x80571340u) == 0u) {
        wr32(0x804db65cu, 0x80371eb0u);
        a.r[0] = 0x804db65cu;
        r3 = tc_call(0x801c38acu, &a);
        wr32(0x804db660u, r3);
        wr32(0x804db65cu, 0x80373170u);
        wr8(0x80571340u, 1u);
    }
    if (r31 != rd32(0x804db660u)) {
        if ((u32)(s8)rd8(0x80571350u) == 0u) {
            wr32(0x804db668u, 0x80371e70u);
            a.r[0] = 0x804db668u;
            r3 = tc_call(0x801c38acu, &a);
            wr32(0x804db66cu, r3);
            wr32(0x804db668u, 0x80373130u);
            wr8(0x80571350u, 1u);
        }
        if (r31 != rd32(0x804db66cu)) {
            if ((u32)(s8)rd8(0x80571351u) == 0u) {
                wr32(0x804db674u, 0x80371e50u);
                a.r[0] = 0x804db674u;
                r3 = tc_call(0x801c38acu, &a);
                wr32(0x804db678u, r3);
                wr32(0x804db674u, 0x80373110u);
                wr8(0x80571351u, 1u);
            }
            if (r31 != rd32(0x804db678u)) {
                if ((u32)(s8)rd8(0x80571356u) == 0u) {
                    wr32(0x80571358u, 0x80371e30u);
                    a.r[0] = 0x80571358u;
                    r3 = tc_call(0x801c38acu, &a);
                    wr32(0x8057135cu, r3);
                    wr32(0x80571358u, 0x803730d0u);
                    wr8(0x80571356u, 1u);
                }
                if (r31 != rd32(0x8057135cu)) {
                    return;
                }
            }
        }
    }
    r0 = rd32((u32)param_1 + 0xf6cu) + 1u;
    wr32((u32)param_1 + 0xf6cu, r0);
    if ((s32)r0 >= 90) {
        wr32((u32)param_1 + 0xf6cu, 0u);
        r3 = tc_call(0x80040b64u, &a);
        r3 = r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u);
        r3 = r3 - 0x28u;
        if ((s32)r3 <= 0) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x801c298cu, &a);
            if (r3 == 0u) {
                if ((u32)(s8)rd8(0x8057136au) == 0u) {
                    wr32(0x804dc008u, 0x803721b0u);
                    a.r[0] = 0x804dc008u;
                    r3 = tc_call(0x801c38acu, &a);
                    wr32(0x804dc00cu, r3);
                    wr32(0x804dc008u, 0x80372190u);
                    a.r[0] = 0x804dc014u;
                    (void)tc_call(0x8006f1b4u, &a);
                    wr32(0x804dc014u, 0x80350198u);
                    a.r[0] = 0x804dc0f8u;
                    (void)tc_call(0x80157d94u, &a);
                    a.r[0] = 0x804dc008u;
                    a.r[1] = 0x801ad128u;
                    a.r[2] = 0x804dbe54u;
                    (void)tc_call(0x802551b8u, &a);
                    wr8(0x8057136au, 1u);
                }
                a.r[0] = (u32)param_1 + 0xcfcu;
                a.r[1] = rd32(0x804dc00cu);
                (void)tc_call(0x801c3608u, &a);
                return;
            }
            if ((u32)(s8)rd8(0x8057136bu) == 0u) {
                wr32(0x804dc14cu, 0x80372290u);
                a.r[0] = 0x804dc14cu;
                r3 = tc_call(0x801c38acu, &a);
                wr32(0x804dc150u, r3);
                wr32(0x804dc14cu, 0x80372270u);
                wr8(0x8057136bu, 1u);
            }
            a.r[0] = (u32)param_1 + 0xcfcu;
            a.r[1] = rd32(0x804dc150u);
            (void)tc_call(0x801c3608u, &a);
        } else {
            r3 = r3 - 0x14u;
            if ((s32)r3 <= 0) {
                if ((u32)(s8)rd8(0x8057136bu) == 0u) {
                    wr32(0x804dc14cu, 0x80372290u);
                    a.r[0] = 0x804dc14cu;
                    r3 = tc_call(0x801c38acu, &a);
                    wr32(0x804dc150u, r3);
                    wr32(0x804dc14cu, 0x80372270u);
                    wr8(0x8057136bu, 1u);
                }
                a.r[0] = (u32)param_1 + 0xcfcu;
                a.r[1] = rd32(0x804dc150u);
                (void)tc_call(0x801c3608u, &a);
            } else {
                r3 = r3 - 0x1eu;
                if ((s32)r3 <= 0) {
                    if ((u32)(s8)rd8(0x8057136cu) == 0u) {
                        wr32(0x804dc160u, 0x80372250u);
                        a.r[0] = 0x804dc160u;
                        r3 = tc_call(0x801c38acu, &a);
                        wr32(0x804dc164u, r3);
                        wr32(0x804dc160u, 0x80372230u);
                        wr8(0x8057136cu, 1u);
                    }
                    a.r[0] = (u32)param_1 + 0xcfcu;
                    a.r[1] = rd32(0x804dc164u);
                    (void)tc_call(0x801c3608u, &a);
                } else {
                    if ((s32)(r3 - 0xau) <= 0) {
                        r3 = tc_call(0x801ac3e0u, &a);
                        if (r3 == 0u) {
                            if ((u32)(s8)rd8(0x8057136du) == 0u) {
                                wr32(0x804dc16cu, 0x803722d0u);
                                a.r[0] = 0x804dc16cu;
                                r3 = tc_call(0x801c38acu, &a);
                                wr32(0x804dc170u, r3);
                                wr32(0x804dc16cu, 0x803722b0u);
                                wr8(0x8057136du, 1u);
                            }
                            a.r[0] = (u32)param_1 + 0xcfcu;
                            a.r[1] = rd32(0x804dc170u);
                            (void)tc_call(0x801c3608u, &a);
                        }
                    }
                }
            }
        }
    }
    return;
}
