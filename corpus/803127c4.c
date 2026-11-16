#include "tc_rt.h"

void fn_803127c4(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5, s32 param_6)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0, t0 = 0, t3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, t7 = 0.0, t9 = 0.0, t12 = 0.0, t22 = 0.0, t24 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdd30u, 0x817fe000u);
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
    if ((rd32(param_2 + 8u) & 0x40000000u) != 0u) {
        wr32(0x817fde9cu, 0x8039d828u);
        a.r[0] = 0x817fdf40u;
        a.r[1] = 0x14u;
        (void)tc_call(0x802de7dcu, &a);
        a.r[0] = 0x817fdf4cu;
        a.r[1] = 0x14u;
        (void)tc_call(0x802de7dcu, &a);
        wr16(0x817fdf58u, 0u);
        a.r[0] = 0x817fde80u;
        a.r[1] = param_2;
        a.r[2] = rd32(param_1 + 0xbcu);
        (void)tc_call(0x803120b4u, &a);
        wr16(0x817fdf68u, (u16)((u32)rd16(0x817fdf68u) + (u32)param_5));
        wr32(0x817fdf3cu, rd32(param_1 + 0xbcu));
        wr32(0x817fdf74u, param_1);
        wr8(0x817fdee4u, 0u);
        if ((rd32(param_1 + 0x20u) & 0x1000u) != 0u) {
            wr8(0x817fdee4u, 1u);
        }
        if ((rd32(param_1 + 0x20u) & 0x2000u) != 0u) {
            wr8(0x817fdee4u, (u8)((u32)rd8(0x817fdee4u) | 2u));
        }
        r3 = (u32)rd8(rd32(param_1 + 0xb8u) + 0x15u);
        wr8(0x817fdee5u, (u8)r3);
        if ((u32)(s8)r3 != 0u) {
            wr8(0x817fdee5u, 0x64u);
        }
        if ((rd32(param_1 + 0x20u) & 0x800u) != 0u) {
            wr8(0x817fdee4u, (u8)((u32)rd8(0x817fdee4u) | 4u));
        }
        if (((u32)rd8(param_3 + 7u) & 1u) != 0u && (u32)(s16)rd16(param_3) != 0u) {
            a.r[0] = rd32((u32)param_4 + 0xc8u);
            a.r[1] = 0x817fde20u;
            (void)tc_call(0x8031efa8u, &a);
            f0 = (f64)rdf32(0x8057787cu);
            wrf32d(0x817fde4cu, f0);
            wrf32d(0x817fde3cu, f0);
            wrf32d(0x817fde2cu, f0);
            t0 = (u32)param_4 + 0xacu;
            t3 = (u32)param_4 + 0xb8u;
            t7 = (f64)(f32)((f64)rdf32(t0 + 4u) - (f64)rdf32(t3 + 4u));
            t9 = (f64)rdf32((u32)param_4 + 0xb4u);
            t12 = (f64)rdf32((u32)param_4 + 0xc0u);
            wrf32d(0x817fdd38u, (f64)(f32)((f64)rdf32(t0) - (f64)rdf32(t3)));
            wrf32d(0x817fdd3cu, t7);
            f2 = (f64)rdf32(0x817fdd38u);
            wrf32d(0x817fdd40u, (f64)(f32)(t9 - t12));
            f1 = (f64)rdf32(0x817fdd3cu);
            f0 = (f64)rdf32(0x817fdd40u);
            wrf32d(0x817fdd50u, f2);
            wrf32d(0x817fdd54u, f1);
            wrf32d(0x817fdd58u, f0);
            a.r[0] = 0x817fde20u;
            a.r[1] = 0x817fdd50u;
            a.r[2] = 0x817fdd50u;
            (void)tc_call(0x8023411cu, &a);
            a.r[0] = 0x817fdd50u;
            a.r[1] = 0x817fdd50u;
            r3 = tc_call(0x80320984u, &a);
            if (r3 != 0u) {
                if ((s32)(s16)rd16(param_3) < 0) {
                    f0 = (f64)rdf32(0x80577890u);
                    t22 = (f64)(f32)((f64)rdf32(0x817fdd54u) * f0);
                    t24 = (f64)rdf32(0x817fdd58u);
                    wrf32d(0x817fdd50u, (f64)(f32)((f64)rdf32(0x817fdd50u) * f0));
                    wrf32d(0x817fdd54u, t22);
                    wrf32d(0x817fdd58u, (f64)(f32)(t24 * f0));
                }
                a.r[0] = 0x817fde50u;
                a.r[1] = 0x817fdd50u;
                (void)tc_call(0x80320130u, &a);
                a.f[0] = (f64)rdf32(0x817fdf28u);
                a.f[1] = (f64)rdf32(0x817fdf2cu);
                a.f[2] = (f64)rdf32(0x817fdf30u);
                a.r[0] = 0x817fde20u;
                (void)tc_call(0x80320c10u, &a);
                a.r[0] = 0x817fde50u;
                a.r[1] = 0x817fde20u;
                a.r[2] = 0x817fde50u;
                (void)tc_call(0x802337a0u, &a);
                a.r[0] = 0x817fde50u;
                a.r[1] = 0x817fdf28u;
                (void)tc_call(0x80320350u, &a);
            }
        }
        r4 = rd32(0x817fdf14u);
        f0 = (f64)rdf32(0x8057787cu);
        r0 = rd32(0x817fdf18u);
        wr32(0x817fdd44u, rd32(0x817fdf10u));
        wr32(0x817fdd48u, r4);
        wr32(0x817fdd4cu, r0);
        wrf32d(0x817fdf10u, f0);
        wrf32d(0x817fdf14u, f0);
        wrf32d(0x817fdf18u, f0);
        a.r[0] = 0x817fde80u;
        (void)tc_call(0x80313cecu, &a);
        a.r[0] = 0x817fddf0u;
        (void)tc_call(0x80233740u, &a);
        a.f[0] = (f64)rdf32(0x817fdf28u);
        a.f[1] = (f64)rdf32(0x817fdf2cu);
        a.f[2] = (f64)rdf32(0x817fdf30u);
        a.r[0] = 0x817fddf0u;
        (void)tc_call(0x80320c10u, &a);
        a.r[0] = 0x817fddf0u;
        a.r[1] = 0x817fddf0u;
        a.r[2] = 0x817fdf1cu;
        (void)tc_call(0x80320d7cu, &a);
        a.r[0] = 0x817fde80u;
        a.r[1] = 0x817fddc0u;
        (void)tc_call(0x80313b9cu, &a);
        a.r[0] = 0x817fddc0u;
        a.r[1] = 0x817fddc0u;
        (void)tc_call(0x8023386cu, &a);
        a.r[0] = 0x817fddf0u;
        a.r[1] = 0x817fddc0u;
        a.r[2] = 0x817fddf0u;
        (void)tc_call(0x802337a0u, &a);
        if ((u32)param_4 != 0u) {
            a.r[0] = rd32((u32)param_4 + 0xc8u);
            a.r[1] = 0x817fddc0u;
            (void)tc_call(0x8031efa8u, &a);
            a.r[0] = 0x817fddf0u;
            a.r[1] = 0x817fddc0u;
            a.r[2] = 0x817fddf0u;
            (void)tc_call(0x802337a0u, &a);
        }
        if ((u32)param_6 != 0u) {
            a.r[0] = 0x817fddf0u;
            a.r[1] = 0x817fddf0u;
            a.r[2] = (u32)param_6;
            (void)tc_call(0x802f0118u, &a);
        } else if ((u32)param_4 != 0u) {
            a.r[0] = 0x817fddf0u;
            a.r[1] = 0x817fddf0u;
            a.r[2] = (u32)param_4 + 0xacu;
            (void)tc_call(0x802f0118u, &a);
        }
        a.f[0] = (f64)rdf32(0x817fdf28u);
        a.f[1] = (f64)rdf32(0x817fdf2cu);
        a.f[2] = (f64)rdf32(0x817fdf30u);
        a.r[0] = 0x817fddc0u;
        (void)tc_call(0x80320c10u, &a);
        a.r[0] = 0x817fddc0u;
        a.r[1] = 0x817fddc0u;
        a.r[2] = 0x817fdf1cu;
        (void)tc_call(0x80320d7cu, &a);
        a.r[0] = 0x817fddc0u;
        a.r[1] = 0x817fddc0u;
        (void)tc_call(0x8023386cu, &a);
        a.r[0] = 0x817fddf0u;
        a.r[1] = 0x817fddc0u;
        a.r[2] = 0x817fddf0u;
        (void)tc_call(0x802337a0u, &a);
        f1 = (f64)rdf32(0x817fdd4cu);
        f0 = (f64)rdf32(0x817fde1cu);
        f2 = (f64)(f32)((f64)rdf32(0x817fdd48u) + (f64)rdf32(0x817fde0cu));
        wrf32d(0x817fdf10u, (f64)(f32)((f64)rdf32(0x817fdd44u) + (f64)rdf32(0x817fddfcu)));
        f0 = (f64)(f32)(f1 + f0);
        wrf32d(0x817fdf14u, f2);
        wrf32d(0x817fdf18u, f0);
        a.r[0] = 0x817fde80u;
        (void)tc_call(0x80313cecu, &a);
        a.r[0] = 0x817fde80u;
        (void)tc_call(0x8031343cu, &a);
        a.r[0] = 0x817fde80u;
        (void)tc_call(0x80313790u, &a);
        r3 = rd32(param_1 + 0x20u);
        r31 = 0u;
        if ((r3 & 0x1000u) != 0u && (rd32(param_2 + 8u) & 0x20u) != 0u) {
            r31 = 1u;
        }
        r30 = 0u;
        if ((r3 & 0x2000u) != 0u && (rd32(param_2 + 8u) & 0x40u) != 0u) {
            r30 = 1u;
        }
        r29 = 1u;
        if ((r3 & 0x800u) == 0u && (rd32(param_2 + 8u) & 0x400u) == 0u) {
            r29 = 0u;
        }
        r28 = (u32)(s8)rd8(param_2 + 0x22u);
        r0 = (u32)(s8)rd8(rd32(param_1 + 0xb8u) + 0x15u);
        if (r0 == 0u || r28 == 0u) {
            r28 = 0u;
        } else if (r0 != 0x64u) {
            if (r28 != 0x64u) {
                r0 = r0 * r28;
                r0 = ppc_mulhw(1374389535, (s32)r0);
                r0 = (u32)((s32)r0 >> 5);
                r0 = r0 + ((r0 >> 0x1fu) & 1u);
                r28 = (u32)(s8)r0;
            } else {
                r28 = r0;
            }
        }
        r27 = (u32)rd8(param_3 + 5u);
        a.r[0] = param_1 + 0xc0u;
        a.r[1] = 0u;
        r3 = tc_call(0x802de9f0u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r5 = 0u;
        for (;;) {
            if (r3 == 0u) {
                r3 = 0u;
                break;
            }
            if (rd32(r3 + 0x24u) == param_2) {
                r5 = rd32(r3 + 0x28u);
                if ((r5 & 1u) == r31 && ((r5 >> 1u) & 1u) == r30) {
                    r4 = (u32)(s8)rd8(r3 + 0x88u);
                    if (r4 == (u32)(s8)r28 && ((r5 >> 2u) & 1u) == r29 && (u32)rd8(r3 + 0x89u) == r27) break;
                }
            }
            a.r[0] = param_1 + 0xc0u;
            a.r[1] = r3;
            r3 = tc_call(0x802de9f0u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r5 = 0u;
        }
        r27 = r3;
        if (r3 == 0u) {
            r3 = rd32(rd32(rd32(param_1 + 0xbcu) + 0x20u));
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x38u), &a);
            f1 = tc_lastf();
            r27 = r3;
            if (r3 == 0u) {
                return;
            }
            a.r[0] = r3;
            a.r[1] = param_1;
            a.r[2] = param_2;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(r3 + 0x1cu) + 0x10u), &a);
            if (r3 == 0u) {
                return;
            }
            a.r[0] = param_1 + 0xc0u;
            a.r[1] = r27;
            f1 = tc_callf(0x802de7f4u, &a);
            wr16(param_1 + 0xd8u, (u16)((u32)rd16(param_1 + 0xd8u) + 1u));
            wr32(r27 + 0xcu, 1u);
            wr32(r27 + 0x28u, 0u);
            if (r31 != 0u) {
                wr32(r27 + 0x28u, rd32(r27 + 0x28u) | 1u);
            }
            if (r30 != 0u) {
                wr32(r27 + 0x28u, rd32(r27 + 0x28u) | 2u);
            }
            wr8(r27 + 0x88u, (u8)r28);
            if (r29 != 0u) {
                wr32(r27 + 0x28u, rd32(r27 + 0x28u) | 4u);
            }
            wr8(r27 + 0x89u, rd8(param_3 + 5u));
            r4 = rd32(param_1 + 0xbcu);
            r3 = rd32(r4 + 0x9cu);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r27;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            (void)tc_call(rd32(rd32(r3) + 8u), &a);
        }
        if ((u32)(s16)rd16(param_3) != 0u || (u32)rd8(param_3 + 2u) != 0u || (u32)rd8(param_3 + 3u) != 0u || (u32)rd8(param_3 + 4u) != 0u || ((u32)rd8(param_3 + 7u) & 2u) != 0u) {
            wr32(0x817fdf78u, (u32)param_4);
            wr32((u32)param_4 + 0x10u, rd32((u32)param_4 + 0x10u) + 1u);
            wr16(0x817fdf7cu, rd16(param_3));
            wr8(0x817fdf7eu, rd8(param_3 + 2u));
            wr8(0x817fdf7fu, rd8(param_3 + 3u));
            wr8(0x817fdf80u, rd8(param_3 + 4u));
            wr8(0x817fdf81u, rd8(param_3 + 5u));
            wr8(0x817fdf82u, rd8(param_3 + 6u));
            wr8(0x817fdf83u, rd8(param_3 + 7u));
            wr8(0x817fdf84u, rd8(param_3 + 8u));
            wr8(0x817fdf85u, rd8(param_3 + 9u));
        } else {
            wr32(0x817fdf78u, 0u);
        }
        a.r[0] = r27;
        a.r[1] = 0x817fdd60u;
        (void)tc_call(0x8031efa8u, &a);
        a.r[0] = 0x817fdd60u;
        a.r[1] = 0x817fdd60u;
        (void)tc_call(0x8023386cu, &a);
        a.r[0] = 0x817fde80u;
        a.r[1] = 0x817fdd90u;
        (void)tc_call(0x80313b9cu, &a);
        a.r[0] = 0x817fdd60u;
        a.r[1] = 0x817fdd90u;
        a.r[2] = 0x817fdd90u;
        (void)tc_call(0x802337a0u, &a);
        a.r[0] = 0x817fde80u;
        a.r[1] = r27;
        a.r[2] = 0x817fdd90u;
        f1 = tc_callf(0x80312ff8u, &a);
        r4 = tc_lastr4();
        r0 = rd32(0x817fdf78u);
        wr32(0x817fdf74u, 0u);
        wr32(0x817fdf3cu, 0u);
        if (r0 != 0u) {
            r0 = rd32((u32)param_4 + 0x10u) - 1u;
            wr32((u32)param_4 + 0x10u, r0);
            if (r0 == 0u && rd32((u32)param_4 + 0xcu) == 2u) {
                a.r[0] = (u32)param_4;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                f1 = tc_callf(rd32(rd32((u32)param_4 + 0x1cu) + 8u), &a);
            }
            wr32(0x817fdf78u, 0u);
        }
        if (rd32(param_1 + 0xcu) != 1u) {
            c0eq = rd32(r27 + 0xcu) == 1u;
            if (c0eq && c0eq) {
                r4 = (u32)rd16(param_1 + 0xd8u);
                wr16(param_1 + 0xd8u, (u16)(r4 - 1u));
                a.r[0] = r27;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                f1 = tc_callf(rd32(rd32(r27 + 0x1cu) + 0xcu), &a);
                r4 = tc_lastr4();
                wr32(r27 + 0xcu, 2u);
                if (rd32(r27 + 0x10u) == 0u) {
                    a.r[0] = r27;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    (void)tc_call(rd32(rd32(r27 + 0x1cu) + 8u), &a);
                }
            }
        }
    }
    return;
}
