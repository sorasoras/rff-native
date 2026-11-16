#include "tc_rt.h"

void fn_80195f30(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_r3;
    (void)tc_call(0x8005250cu, &a);
    wr32(param_r3 + 0x28u, 1u);
    a.r[0] = 0x2bu;
    r3 = tc_call(0x8014d9a4u, &a);
    if (r3 != 0u) {
        a.r[0] = param_r3 + 0x128u;
        (void)tc_call(0x8005250cu, &a);
        wr32(param_r3 + 0x150u, 1u);
    }
    a.r[0] = 0x202du;
    r3 = tc_call(0x8014d9a4u, &a);
    if (r3 != 0u) {
        a.r[0] = param_r3 + 0x1bcu;
        (void)tc_call(0x8005250cu, &a);
        wr32(param_r3 + 0x1e4u, 1u);
    }
    a.r[0] = 0x2cu;
    r3 = tc_call(0x8014d9a4u, &a);
    if (r3 != 0u) {
        a.r[0] = param_r3 + 0x250u;
        (void)tc_call(0x8005250cu, &a);
        wr32(param_r3 + 0x278u, 1u);
    }
    if ((u32)rd8(0x80492833u) != 0u) {
        a.r[0] = param_r3 + 0x2e4u;
        (void)tc_call(0x8005250cu, &a);
        wr32(param_r3 + 0x30cu, 1u);
    }
    a.r[0] = param_r3 + 0x378u;
    (void)tc_call(0x8005250cu, &a);
    wr32(param_r3 + 0x3a0u, 1u);
    a.r[0] = 0x2au;
    r3 = tc_call(0x8014d9a4u, &a);
    if (r3 != 0u) {
        a.r[0] = param_r3 + 0x40cu;
        (void)tc_call(0x8005250cu, &a);
        wr32(param_r3 + 0x434u, 1u);
    }
    r0 = rd32(0x805706e8u);
    if (((s32)r0 <= 63 && r0 != 0x35u) && (r0 != 0x36u && r0 != 0x37u)) {
        a.r[0] = param_r3 + 0x534u;
        (void)tc_call(0x8005250cu, &a);
        wr32(param_r3 + 0x55cu, 1u);
    }
    wr8(0x817fdfb8u, 0xffu);
    f2 = (f64)rdf32(0x80575418u);
    r30 = (u32)rd8(param_r3 + 0x793u);
    r28 = 0xffffffffu;
    r0 = rd32(param_r3 + 0x51cu);
    wr32(0x817fdfccu, rd32(param_r3 + 0x518u));
    wr32(0x817fdfd0u, r0);
    f1 = (f64)rdf32(0x817fdfccu);
    f0 = (f64)rdf32(0x817fdfd0u);
    wr32(0x817fdfd4u, rd32(param_r3 + 0x520u));
    f1 = ppc_fmadds((f64)rdf32(param_r3 + 0x524u), f2, f1);
    wrf32d(0x817fdfccu, f1);
    f0 = ppc_fnmsubs((f64)rdf32(param_r3 + 0x528u), f2, f0);
    wrf32d(0x817fdfd0u, f0);
    a.r[0] = param_r3;
    a.r[1] = 0x817fdfccu;
    a.r[2] = 0x817fdfb8u;
    r3 = tc_call(0x80196a3cu, &a);
    if (r3 != 0u) {
        if (rd32(param_r3 + 0x4bcu) == 0u) {
            r3 = rd32(param_r3 + 0x4b8u);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x8004c630u, &a);
                if ((s32)r3 > 1) {
                    wr32(param_r3 + 0x4bcu, 1u);
                }
            }
            if ((s32)(s8)r30 >= 0) {
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0xd51u;
                (void)tc_call(0x8010a74cu, &a);
            }
        }
        r28 = 0x15u;
    } else {
        a.r[0] = param_r3;
        a.r[1] = 0x817fdfccu;
        a.r[2] = 0x817fdfb8u;
        r3 = tc_call(0x80196c9cu, &a);
        if (r3 != 0u) {
            if (rd32(param_r3 + 0x4bcu) == 0u || (u32)(s8)rd8(param_r3 + 0x793u) != (u32)(s8)r30) {
                r3 = rd32(param_r3 + 0x4b8u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x8004c630u, &a);
                    if ((s32)r3 > 1) {
                        wr32(param_r3 + 0x4bcu, 1u);
                    }
                }
                if ((s32)(s8)r30 >= 0) {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 0xd51u;
                    (void)tc_call(0x8010a74cu, &a);
                }
            }
            r28 = 0x15u;
        } else {
            r3 = rd32(param_r3 + 0x4b8u);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x8004c630u, &a);
                if ((s32)r3 > 0) {
                    wr32(param_r3 + 0x4bcu, 0u);
                }
            }
            a.r[0] = param_r3;
            r3 = tc_call(0x801965dcu, &a);
            if ((u32)(s8)r3 != 0xfu) {
                a.r[0] = param_r3;
                r3 = tc_call(0x801965dcu, &a);
                wr8(0x817fdfb8u, (u8)r3);
                r28 = 9u;
            }
            wr8(param_r3 + 0x793u, 0u);
        }
    }
    a.r[0] = param_r3 + 0x4a0u;
    (void)tc_call(0x8005250cu, &a);
    wr32(param_r3 + 0x4c8u, 1u);
    a.r[0] = r28;
    a.r[1] = (u32)(s8)rd8(0x817fdfb8u);
    a.r[2] = 0u;
    r3 = tc_call(0x801412f8u, &a);
    r28 = r3;
    if ((r3 != 0u && (u32)rd8(param_r3 + 0x791u) == 2u) && (u32)(s8)rd8(0x817fdfb8u) != 0xffffffffu) {
        r3 = tc_call(0x80052c30u, &a);
        a.r[0] = r3;
        a.r[1] = r28;
        f1 = tc_callf(0x80079bf8u, &a);
        a.f[0] = f1;
        r3 = tc_call(0x802558e4u, &a);
        r27 = r3;
        a.r[0] = param_r3;
        a.r[1] = r3;
        (void)tc_call(0x80196908u, &a);
        r8 = (u32)rd8(param_r3 + 0x794u);
        r30 = 0u;
        r7 = (u32)rd8(param_r3 + 0x795u);
        r26 = 0u;
        r6 = (u32)rd8(param_r3 + 0x796u);
        r5 = (u32)rd8(param_r3 + 0x797u);
        r4 = (u32)rd8(param_r3 + 0x794u);
        r3 = (u32)rd8(param_r3 + 0x795u);
        r0 = (u32)rd8(param_r3 + 0x796u);
        wr8(param_r3 + 0x614u, (u8)r8);
        wr8(param_r3 + 0x615u, (u8)r7);
        wr8(param_r3 + 0x616u, (u8)r6);
        wr8(param_r3 + 0x617u, (u8)r5);
        wr8(param_r3 + 0x618u, (u8)r8);
        wr8(param_r3 + 0x619u, (u8)r7);
        wr8(param_r3 + 0x61au, (u8)r6);
        wr8(param_r3 + 0x61bu, (u8)r5);
        wr8(param_r3 + 0x61cu, (u8)r8);
        wr8(param_r3 + 0x61du, (u8)r7);
        wr8(param_r3 + 0x61eu, (u8)r6);
        wr8(param_r3 + 0x61fu, (u8)r5);
        wr8(param_r3 + 0x620u, (u8)r8);
        wr8(param_r3 + 0x621u, (u8)r7);
        wr8(param_r3 + 0x622u, (u8)r6);
        wr8(param_r3 + 0x623u, (u8)r5);
        wr8(0x817fdfbcu, (u8)r4);
        wr8(0x817fdfbdu, (u8)r3);
        wr8(0x817fdfbeu, (u8)r0);
        wr8(0x817fdfbfu, 0u);
        wr8(param_r3 + 0x6a8u, (u8)r4);
        wr8(param_r3 + 0x6a9u, (u8)r3);
        wr8(param_r3 + 0x6aau, (u8)r0);
        wr8(param_r3 + 0x6abu, 0u);
        wr8(param_r3 + 0x6acu, (u8)r8);
        wr8(param_r3 + 0x6adu, (u8)r7);
        wr8(param_r3 + 0x6aeu, (u8)r6);
        wr8(param_r3 + 0x6afu, (u8)r5);
        wr8(param_r3 + 0x6b0u, (u8)r4);
        wr8(param_r3 + 0x6b1u, (u8)r3);
        wr8(param_r3 + 0x6b2u, (u8)r0);
        wr8(param_r3 + 0x6b3u, 0u);
        wr8(param_r3 + 0x6b4u, (u8)r8);
        wr8(param_r3 + 0x6b5u, (u8)r7);
        wr8(param_r3 + 0x6b6u, (u8)r6);
        wr8(param_r3 + 0x6b7u, (u8)r5);
        wr8(param_r3 + 0x73cu, (u8)r8);
        wr8(param_r3 + 0x73du, (u8)r7);
        wr8(param_r3 + 0x73eu, (u8)r6);
        wr8(param_r3 + 0x73fu, (u8)r5);
        wr8(param_r3 + 0x740u, (u8)r4);
        wr8(param_r3 + 0x741u, (u8)r3);
        wr8(param_r3 + 0x742u, (u8)r0);
        wr8(param_r3 + 0x743u, 0u);
        wr8(param_r3 + 0x744u, (u8)r8);
        wr8(param_r3 + 0x745u, (u8)r7);
        wr8(param_r3 + 0x746u, (u8)r6);
        wr8(param_r3 + 0x747u, (u8)r5);
        wr8(param_r3 + 0x748u, (u8)r4);
        wr8(param_r3 + 0x749u, (u8)r3);
        wr8(param_r3 + 0x74au, (u8)r0);
        wr8(param_r3 + 0x74bu, 0u);
        do {
            a.r[0] = param_r3 + r30 + 0x5c8u;
            (void)tc_call(0x8005250cu, &a);
            r26 = r26 + 1u;
            wr32(param_r3 + r30 + 0x5f0u, 1u);
            r30 = r30 + 0x94u;
        } while ((s32)r26 < 3);
        f7 = (f64)rdf32(0x80575408u);
        wr32(0x817fdfdcu, r27);
        f3 = rdf64(0x805754a8u);
        wr32(0x817fdfd8u, 0x43300000u);
        f5 = (f64)rdf32(0x80575418u);
        f6 = (f64)(f32)(rdf64(0x817fdfd8u) - f3);
        f4 = ppc_fmadds((f64)rdf32(param_r3 + 0x64cu), f5, (f64)rdf32(param_r3 + 0x640u));
        f3 = (f64)rdf32(0x80575428u);
        f2 = (f64)(f32)((f64)rdf32(0x80575470u) + (f64)rdf32(param_r3 + 0x644u));
        wrf32d(0x817fdfc8u, f7);
        f1 = ppc_fnmsubs(f6, f5, f4);
        f4 = (f64)rdf32(0x805754b0u);
        wrf32d(0x817fdfc4u, f2);
        wrf32d(0x817fdfc0u, f1);
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.r[0] = r28;
        a.r[1] = 0u;
        (void)tc_call(0x80052a08u, &a);
    }
    return;
}
