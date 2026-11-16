#include "tc_rt.h"

void fn_801aaca8(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0;
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
    r4 = rd32((u32)param_1 + 0x3e9cu) + 1u;
    wr32((u32)param_1 + 0x3e9cu, r4);
    r0 = (u32)((s32)ppc_mulhw(458129845, (s32)r4) >> 5);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    r0 = r0 * 0x12cu;
    r0 = r4 - r0;
    if (r0 == 0u) {
        r3 = tc_call(0x80040b64u, &a);
        r5 = rd32((u32)param_1 + 0x3e9cu);
        r0 = r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u);
        if ((s32)r5 > 300) {
            if ((s32)r5 > 600) {
                wr32((u32)param_1 + 0x3e9cu, 0u);
                if ((u32)(s8)rd8(0x80571360u) == 0u) {
                    wr32(0x804db888u, 0x80371cf0u);
                    a.r[0] = 0x804db888u;
                    r3 = tc_call(0x801c38acu, &a);
                    wr32(0x804db88cu, r3);
                    wr32(0x804db888u, 0x80372f50u);
                    wr8(0x80571360u, 1u);
                }
                a.r[0] = (u32)param_1 + 0xcfcu;
                a.r[1] = rd32(0x804db88cu);
                (void)tc_call(0x801c3608u, &a);
                return;
            }
            if ((s32)r0 < 60) {
                wr32((u32)param_1 + 0x3e9cu, 0u);
                if ((u32)(s8)rd8(0x80571360u) == 0u) {
                    wr32(0x804db888u, 0x80371cf0u);
                    a.r[0] = 0x804db888u;
                    r3 = tc_call(0x801c38acu, &a);
                    wr32(0x804db88cu, r3);
                    wr32(0x804db888u, 0x80372f50u);
                    wr8(0x80571360u, 1u);
                }
                a.r[0] = (u32)param_1 + 0xcfcu;
                a.r[1] = rd32(0x804db88cu);
                (void)tc_call(0x801c3608u, &a);
                return;
            }
        } else if ((s32)r0 < 30) {
            wr32((u32)param_1 + 0x3e9cu, 0u);
            if ((u32)(s8)rd8(0x80571360u) == 0u) {
                wr32(0x804db888u, 0x80371cf0u);
                a.r[0] = 0x804db888u;
                r3 = tc_call(0x801c38acu, &a);
                wr32(0x804db88cu, r3);
                wr32(0x804db888u, 0x80372f50u);
                wr8(0x80571360u, 1u);
            }
            a.r[0] = (u32)param_1 + 0xcfcu;
            a.r[1] = rd32(0x804db88cu);
            (void)tc_call(0x801c3608u, &a);
            return;
        }
    }
    r0 = rd32((u32)param_1 + 0x3e98u) + 1u;
    wr32((u32)param_1 + 0x3e98u, r0);
    if ((s32)r0 >= 16) {
        wr32((u32)param_1 + 0x3e98u, 0u);
        r3 = tc_call(0x80040b64u, &a);
        r28 = r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u);
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801c298cu, &a);
        c0lt = (s32)r3 < 1;
        if (r3 == 1u) {
            r28 = r28 - 0x14u;
            if ((s32)r28 > 0) {
                if ((s32)(r28 - 0x28u) <= 0) {
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
                    a.r[0] = (u32)param_1 + 0xcfcu;
                    a.r[1] = rd32(0x804db784u);
                    (void)tc_call(0x801c3608u, &a);
                }
            } else {
                if ((u32)(s8)rd8(0x80571352u) == 0u) {
                    a.r[0] = 0x804db688u;
                    (void)tc_call(0x801abdfcu, &a);
                    a.r[0] = 0x804db688u;
                    a.r[1] = 0x801aabe8u;
                    a.r[2] = 0x804db620u;
                    (void)tc_call(0x802551b8u, &a);
                    wr8(0x80571352u, 1u);
                }
                a.r[0] = (u32)param_1 + 0xcfcu;
                a.r[1] = rd32(0x804db68cu);
                (void)tc_call(0x801c3608u, &a);
            }
        } else {
            if (c0lt && (s32)r3 >= 0) {
                r28 = r28 - 0x19u;
                if ((s32)r28 > 0) {
                    r28 = r28 - 0x14u;
                    if ((s32)r28 > 0) {
                        if ((s32)(r28 - 0xfu) > 0) {
                            return;
                        }
                        if ((u32)(s8)rd8(0x80571352u) == 0u) {
                            a.r[0] = 0x804db688u;
                            (void)tc_call(0x801abdfcu, &a);
                            a.r[0] = 0x804db688u;
                            a.r[1] = 0x801aabe8u;
                            a.r[2] = 0x804db620u;
                            (void)tc_call(0x802551b8u, &a);
                            wr8(0x80571352u, 1u);
                        }
                        a.r[0] = (u32)param_1 + 0xcfcu;
                        a.r[1] = rd32(0x804db68cu);
                        (void)tc_call(0x801c3608u, &a);
                        return;
                    }
                    if ((u32)(s8)rd8(0x80571362u) == 0u) {
                        wr32(0x804dba78u, 0x80371d10u);
                        a.r[0] = 0x804dba78u;
                        r3 = tc_call(0x801c38acu, &a);
                        wr32(0x804dba7cu, r3);
                        wr32(0x804dba78u, 0x80372f70u);
                        a.r[0] = 0x804dba80u;
                        (void)tc_call(0x8006f1b4u, &a);
                        wr32(0x804dba80u, 0x80350198u);
                        a.r[0] = 0x804dba78u;
                        a.r[1] = 0x801ab518u;
                        a.r[2] = 0x804db644u;
                        (void)tc_call(0x802551b8u, &a);
                        wr8(0x80571362u, 1u);
                    }
                    a.r[0] = (u32)param_1 + 0xcfcu;
                    a.r[1] = rd32(0x804dba7cu);
                    (void)tc_call(0x801c3608u, &a);
                    return;
                }
                if ((u32)(s8)rd8(0x80571361u) == 0u) {
                    a.r[0] = 0x804db898u;
                    (void)tc_call(0x801ab6a0u, &a);
                    a.r[0] = 0x804db898u;
                    a.r[1] = 0x801ab454u;
                    a.r[2] = 0x804db638u;
                    (void)tc_call(0x802551b8u, &a);
                    wr8(0x80571361u, 1u);
                }
                a.r[0] = (u32)param_1 + 0xcfcu;
                a.r[1] = rd32(0x804db89cu);
                (void)tc_call(0x801c3608u, &a);
                return;
            }
            r28 = r28 - 0x19u;
            if ((s32)r28 > 0) {
                if ((s32)(r28 - 0x3cu) <= 0) {
                    if ((s32)rd32(0x805713a0u) < 6) {
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
                        a.r[0] = (u32)param_1 + 0xcfcu;
                        a.r[1] = rd32(0x804db784u);
                        (void)tc_call(0x801c3608u, &a);
                    } else {
                        if ((u32)(s8)rd8(0x80571363u) == 0u) {
                            wr32(0x804dbb68u, 0x80371dd0u);
                            a.r[0] = 0x804dbb68u;
                            r3 = tc_call(0x801c38acu, &a);
                            wr32(0x804dbb6cu, r3);
                            wr32(0x804dbb68u, 0x80372fb0u);
                            a.r[0] = 0x804dbb70u;
                            a.r[1] = 0x8007d670u;
                            a.r[2] = 0x80066970u;
                            a.r[3] = 0xe4u;
                            a.r[4] = 2u;
                            (void)tc_call(0x80255624u, &a);
                            f0 = (f64)rdf32(0x80575a50u);
                            wrf32d(0x804dbd4cu, f0);
                            wrf32d(0x804dbd48u, f0);
                            wrf32d(0x804dbd44u, f0);
                            a.r[0] = 0x804dbd50u;
                            (void)tc_call(0x8006f1b4u, &a);
                            wr32(0x804dbd50u, 0x80350198u);
                            a.r[0] = 0x804dbb68u;
                            a.r[1] = 0x801ab578u;
                            a.r[2] = 0x804db650u;
                            (void)tc_call(0x802551b8u, &a);
                            wr8(0x80571363u, 1u);
                        }
                        a.r[0] = (u32)param_1 + 0xcfcu;
                        a.r[1] = rd32(0x804dbb6cu);
                        (void)tc_call(0x801c3608u, &a);
                    }
                }
            } else {
                if ((u32)(s8)rd8(0x80571363u) == 0u) {
                    wr32(0x804dbb68u, 0x80371dd0u);
                    a.r[0] = 0x804dbb68u;
                    r3 = tc_call(0x801c38acu, &a);
                    wr32(0x804dbb6cu, r3);
                    wr32(0x804dbb68u, 0x80372fb0u);
                    a.r[0] = 0x804dbb70u;
                    a.r[1] = 0x8007d670u;
                    a.r[2] = 0x80066970u;
                    a.r[3] = 0xe4u;
                    a.r[4] = 2u;
                    (void)tc_call(0x80255624u, &a);
                    f0 = (f64)rdf32(0x80575a50u);
                    wrf32d(0x804dbd4cu, f0);
                    wrf32d(0x804dbd48u, f0);
                    wrf32d(0x804dbd44u, f0);
                    a.r[0] = 0x804dbd50u;
                    (void)tc_call(0x8006f1b4u, &a);
                    wr32(0x804dbd50u, 0x80350198u);
                    a.r[0] = 0x804dbb68u;
                    a.r[1] = 0x801ab578u;
                    a.r[2] = 0x804db650u;
                    (void)tc_call(0x802551b8u, &a);
                    wr8(0x80571363u, 1u);
                }
                a.r[0] = (u32)param_1 + 0xcfcu;
                a.r[1] = rd32(0x804dbb6cu);
                (void)tc_call(0x801c3608u, &a);
            }
        }
    }
    return;
}
