#include "tc_rt.h"

s32 fn_801aa800(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r5 = 0, r25 = 0, r26 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
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
                if ((u32)(s8)rd8(0x80571352u) == 0u) {
                    a.r[0] = 0x804db688u;
                    (void)tc_call(0x801abdfcu, &a);
                    a.r[0] = 0x804db688u;
                    a.r[1] = 0x801aabe8u;
                    a.r[2] = 0x804db620u;
                    (void)tc_call(0x802551b8u, &a);
                    wr8(0x80571352u, 1u);
                }
                if (r31 != rd32(0x804db68cu)) {
                    if ((u32)(s8)rd8(0x80571353u) == 0u) {
                        wr32(0x804db780u, 0x80371d30u);
                        a.r[0] = 0x804db780u;
                        r3 = tc_call(0x801c38acu, &a);
                        wr32(0x804db784u, r3);
                        wr32(0x804db780u, 0x80372f90u);
                        a.r[0] = 0x804db788u;
                        (void)tc_call(0x8006f1b4u, &a);
                        wr32(0x804db788u, 0x80350198u);
                        a.r[0] = 0x804db780u;
                        a.r[1] = 0x801aac48u;
                        a.r[2] = 0x804db62cu;
                        (void)tc_call(0x802551b8u, &a);
                        wr8(0x80571353u, 1u);
                    }
                    if (r31 != rd32(0x804db784u)) {
                        a.r[0] = (u32)param_1;
                        a.r[1] = param_2;
                        a.r[2] = param_3;
                        r3 = tc_call(0x801c2c50u, &a);
                        f1 = tc_lastf();
                        r5 = 0u;
                        r30 = r3;
                        if (r3 != 1u) {
                            if ((u32)(s8)rd8(0x80571356u) == 0u) {
                                wr32(0x80571358u, 0x80371e30u);
                                a.r[0] = 0x80571358u;
                                r3 = tc_call(0x801c38acu, &a);
                                f1 = tc_lastf();
                                r5 = 0x80571358u;
                                wr32(0x8057135cu, r3);
                                wr32(0x80571358u, 0x803730d0u);
                                wr8(0x80571356u, 1u);
                            }
                            if (r31 == rd32(0x8057135cu)) {
                                r3 = rd32((u32)param_1 + 0xd0cu);
                                a.r[0] = r3;
                                a.r[1] = (u32)param_1;
                                a.r[2] = r5;
                                a.f[0] = f1;
                                r3 = tc_call(rd32(rd32(r3) + 8u), &a);
                                if (r3 != 0u) {
                                    if ((u32)(s8)rd8(0x80571354u) == 0u) {
                                        wr32(0x804db870u, 0x80371df0u);
                                        a.r[0] = 0x804db870u;
                                        r3 = tc_call(0x801c38acu, &a);
                                        wr32(0x804db874u, r3);
                                        wr32(0x804db870u, 0x80372fd0u);
                                        wr8(0x80571354u, 1u);
                                    }
                                    a.r[0] = (u32)param_1 + 0xcfcu;
                                    a.r[1] = rd32(0x804db874u);
                                    (void)tc_call(0x801c3608u, &a);
                                    r3 = 2u;
                                    return (s32)r3;
                                }
                            }
                            r3 = r30;
                            return (s32)r3;
                        }
                        r25 = (u32)param_1 + 0xf18u;
                        r26 = 0u;
                        do {
                            a.r[0] = r25;
                            (void)tc_call(0x801c1c30u, &a);
                            r26 = r26 + 1u;
                            r25 = r25 + 0xfcu;
                        } while ((s32)r26 < 32);
                        r25 = (u32)param_1 + 0x2e98u;
                        r26 = 0u;
                        do {
                            a.r[0] = r25;
                            (void)tc_call(0x801c1770u, &a);
                            r26 = r26 + 1u;
                            r25 = r25 + 0x100u;
                        } while ((s32)r26 < 16);
                        if ((u32)(s8)rd8(0x80571355u) == 0u) {
                            wr32(0x804db87cu, 0x80371e10u);
                            a.r[0] = 0x804db87cu;
                            r3 = tc_call(0x801c38acu, &a);
                            wr32(0x804db880u, r3);
                            wr32(0x804db87cu, 0x803730b0u);
                            wr8(0x80571355u, 1u);
                        }
                        a.r[0] = (u32)param_1 + 0xcfcu;
                        a.r[1] = rd32(0x804db880u);
                        (void)tc_call(0x801c362cu, &a);
                        r3 = r30;
                        return (s32)r3;
                    }
                }
            }
        }
    }
    if ((u32)(s8)rd8(0x80571354u) == 0u) {
        wr32(0x804db870u, 0x80371df0u);
        a.r[0] = 0x804db870u;
        r3 = tc_call(0x801c38acu, &a);
        wr32(0x804db874u, r3);
        wr32(0x804db870u, 0x80372fd0u);
        wr8(0x80571354u, 1u);
    }
    a.r[0] = (u32)param_1 + 0xcfcu;
    a.r[1] = rd32(0x804db874u);
    (void)tc_call(0x801c3608u, &a);
    r3 = 2u;
    return (s32)r3;
}
