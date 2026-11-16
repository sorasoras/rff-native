#include "tc_rt.h"

void fn_801de4c8(u32 param_r3, u32 param_r5, u32 param_r6, u32 param_r7)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r19 = 0, r25 = 0;
    u32 r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdef0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
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
    a.r[0] = param_r3;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    r3 = tc_call(0x801e7148u, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        return;
    }
    wr32(0x8057118cu, rd32(0x8057118cu) & 0xfffdffffu);
    a.r[0] = param_r3;
    a.r[1] = 0xffffffffu;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    (void)tc_call(rd32(rd32(param_r3) + 0xd4u), &a);
    f0 = (f64)rdf32(0x80576238u);
    r0 = rd32(param_r3 + 0x148u) | 0x800000u;
    wr32(param_r3 + 0x9cu, rd32(param_r3 + 0x9cu) | 0xa000000u);
    wr32(param_r3 + 0x148u, r0);
    c0eq = (u32)(s8)rd8(0x805713b0u) == 0u;
    wrf32d((rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e568u, f0);
    if (c0eq) {
        f0 = (f64)rdf32(0x805761f0u);
        wrf32d(0x817fdf10u, f0);
        wrf32d(0x817fdf14u, f0);
        r5 = rd32(0x817fdf10u);
        wrf32d(0x817fdf18u, f0);
        r4 = rd32(0x817fdf14u);
        r3 = rd32(0x817fdf18u);
        wr32(0x803752c0u, r5);
        wr32(0x803752c4u, r4);
        wr32(0x803752c8u, r3);
        wr8(0x805713b0u, 1u);
    }
    wr32(param_r3 + 0x29cu, 1u);
    f0 = (f64)rdf32(0x8057623cu);
    wr32(param_r3 + 0x298u, 0x803752bcu);
    wrf32d(param_r3 + 0x1ecu, (f64)rdf32(param_r6));
    f1 = (f64)rdf32(param_r6 + 4u);
    wrf32d(param_r3 + 0x1f0u, f1);
    f0 = (f64)(f32)(f1 + f0);
    wrf32d(param_r3 + 0x1f4u, (f64)rdf32(param_r6 + 8u));
    wrf32d(param_r3 + 0x1f0u, f0);
    a.r[0] = 0u;
    r3 = tc_call(0x801ddb88u, &a);
    wr32(param_r3 + 0xd0cu, r3);
    wr32(r3, param_r3);
    a.r[0] = rd32(param_r3 + 0xd0cu);
    (void)tc_call(0x801dd8bcu, &a);
    f0 = (f64)rdf32(0x805761f0u);
    wr32(param_r3 + 0xd54u, 1u);
    r4 = rd32(param_r3 + 0x150u);
    wr32(param_r3 + 0xd58u, 1u);
    wr32(param_r3 + 0xd5cu, 1u);
    wrf32d(param_r3 + 0xd20u, f0);
    wr32(param_r3 + 0xd60u, 0xffffffffu);
    wrf32d(param_r3 + 0xd64u, f0);
    a.r[0] = param_r3 + 0x1bcu;
    a.r[1] = r4;
    (void)tc_call(0x801dc614u, &a);
    a.r[0] = param_r3;
    a.r[1] = rd32(param_r3 + 0x150u);
    (void)tc_call(0x801e79bcu, &a);
    r10 = rd32(0x8033c0d8u);
    r5 = rd32(0x8033c0e8u);
    f31 = (f64)rdf32(0x805761f0u);
    f10 = (f64)rdf32(0x80576244u);
    r29 = param_r3;
    f9 = (f64)rdf32(0x80576248u);
    r30 = 0x817fdf88u;
    f8 = (f64)rdf32(0x8057624cu);
    r28 = 0x817fdf30u;
    f7 = (f64)rdf32(0x80576250u);
    r27 = 0x817fdf20u;
    f6 = (f64)rdf32(0x80576254u);
    r26 = 0x817fdf58u;
    f5 = (f64)rdf32(0x80576258u);
    f4 = (f64)rdf32(0x8057625cu);
    f3 = (f64)rdf32(0x80576260u);
    r25 = 0u;
    f2 = (f64)rdf32(0x80576264u);
    f1 = (f64)rdf32(0x80576268u);
    f0 = (f64)rdf32(0x8057626cu);
    r9 = rd32(0x8033c0dcu);
    r8 = rd32(0x8033c0e0u);
    r7 = rd32(0x8033c0e4u);
    r4 = rd32(0x8033c0ecu);
    r3 = rd32(0x8033c0f0u);
    r0 = rd32(0x8033c0f4u);
    wrf32d(0x817fdf88u, (f64)rdf32(0x80576240u));
    wrf32d(0x817fdf8cu, f31);
    wrf32d(0x817fdf90u, f10);
    wrf32d(0x817fdf94u, f9);
    wrf32d(0x817fdf98u, f31);
    wrf32d(0x817fdf9cu, f8);
    wrf32d(0x817fdfa0u, f7);
    wrf32d(0x817fdfa4u, f31);
    wrf32d(0x817fdfa8u, f6);
    wrf32d(0x817fdfacu, f5);
    wrf32d(0x817fdfb0u, f31);
    wrf32d(0x817fdfb4u, f4);
    wrf32d(0x817fdf58u, f31);
    wrf32d(0x817fdf5cu, f3);
    wrf32d(0x817fdf60u, f31);
    wrf32d(0x817fdf64u, f31);
    wrf32d(0x817fdf68u, f2);
    wrf32d(0x817fdf6cu, f31);
    wrf32d(0x817fdf70u, f31);
    wrf32d(0x817fdf74u, f1);
    wrf32d(0x817fdf78u, f31);
    wrf32d(0x817fdf7cu, f31);
    wrf32d(0x817fdf80u, f0);
    wrf32d(0x817fdf84u, f31);
    wr32(0x817fdf30u, r10);
    wr32(0x817fdf34u, r9);
    wr32(0x817fdf38u, r8);
    wr32(0x817fdf3cu, r7);
    wr32(0x817fdf20u, r5);
    wr32(0x817fdf24u, r4);
    wr32(0x817fdf28u, r3);
    wr32(0x817fdf2cu, r0);
    do {
        wr32(0x817fdf50u, 0u);
        f0 = (f64)rdf32(r30 + 8u);
        f2 = (f64)rdf32(r30);
        wrf32d(0x817fdf40u, f31);
        f1 = (f64)rdf32(r30 + 4u);
        wrf32d(0x817fdf44u, f31);
        wrf32d(0x817fdf4cu, f31);
        wr8(0x817fdf54u, 0u);
        wr8(0x817fdf55u, 0u);
        wrf32d(0x817fdf40u, f2);
        wrf32d(0x817fdf44u, f1);
        wrf32d(0x817fdf48u, f0);
        wr32(0x817fdf50u, 0xffffffffu);
        r3 = tc_call(0x800545e4u, &a);
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x334u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r19 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x334u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x334u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
            r19 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            f1 = tc_callf(0x8007dde4u, &a);
            wr32(r19, 0x8037577cu);
        }
        wr32(r29 + 0xcfcu, r19);
        a.r[0] = r19;
        a.r[1] = rd32(r27);
        a.r[2] = rd32(r28);
        a.r[3] = r25;
        a.r[4] = 0x817fdf40u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        (void)tc_call(rd32(rd32(r19) + 0xc4u), &a);
        f1 = (f64)rdf32(r26 + 4u);
        wrf32d(r19 + 0x10u, (f64)rdf32(r26));
        f0 = (f64)rdf32(r26 + 8u);
        wrf32d(r19 + 0x14u, f1);
        wrf32d(r19 + 0x18u, f0);
        a.r[0] = r19;
        a.r[1] = param_r3;
        (void)tc_call(0x801dc7f8u, &a);
        a.r[0] = 0x8046ad74u;
        a.r[1] = r19;
        (void)tc_call(0x8007b03cu, &a);
        r25 = r25 + 1u;
        r29 = r29 + 4u;
        wr32(r19 + 0x15cu, rd32(0x8046ad78u));
        r28 = r28 + 4u;
        r27 = r27 + 4u;
        r26 = r26 + 0xcu;
        r30 = r30 + 0xcu;
    } while ((s32)r25 < 4);
    a.r[0] = param_r3;
    r3 = tc_call(0x801dfcbcu, &a);
    f1 = tc_lastf();
    a.r[0] = param_r3;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    f1 = tc_callf(rd32(rd32(param_r3) + 0xd8u), &a);
    a.r[0] = param_r3;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    (void)tc_call(rd32(rd32(param_r3) + 0xd4u), &a);
    r3 = tc_call(0x800545e4u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0xa00u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        r19 = r3;
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0xa00u;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0xa00u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        }
        r19 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        (void)tc_call(0x801dcb9cu, &a);
    }
    wr32(param_r3 + 0xd10u, r19);
    r3 = tc_call(0x800545e4u, &a);
    r6 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = 0xe200u;
        a.r[2] = r5;
        a.r[3] = r6;
        r3 = tc_call(0x80040db8u, &a);
        r19 = r3;
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0xe200u;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = 0xe200u;
            a.r[2] = r5;
            a.r[3] = r6;
            r3 = tc_call(0x80040cd8u, &a);
        }
        r19 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        (void)tc_call(0x801dcec4u, &a);
    }
    wr32(param_r3 + 0xd14u, r19);
    r3 = tc_call(0x800545e4u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0xc10u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0xc10u;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0xc10u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        }
    }
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x801dee90u;
        a.r[2] = 0u;
        a.r[3] = 0x30u;
        a.r[4] = 0x40u;
        r3 = tc_call(0x80255464u, &a);
    }
    wr32(param_r3 + 0xd18u, r3);
    r3 = tc_call(0x800545e4u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x24u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        r4 = tc_lastr4();
        r31 = r3;
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x24u;
            r3 = tc_call(0x80094e80u, &a);
            r4 = tc_lastr4();
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x24u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            r4 = tc_lastr4();
        }
        r31 = r3;
    }
    if (r3 != 0u) {
        f1 = (f64)rdf32(0x805761f0u);
        r4 = 0x80490000u;
        f0 = (f64)rdf32(0x80576200u);
        wrf32d(r3 + 8u, f1);
        wrf32d(r3 + 4u, f1);
        wrf32d(r3, f1);
        wrf32d(r3 + 0x14u, f1);
        wrf32d(r3 + 0x10u, f1);
        wrf32d(r3 + 0xcu, f1);
        wr32(r3 + 0x1cu, 0u);
        wr32(r3 + 0x20u, 0u);
        wrf32d(r3, (f64)rdf32(0x804890c8u));
        wrf32d(r3 + 4u, (f64)rdf32(0x804890ccu));
        wrf32d(r3 + 8u, (f64)rdf32(0x804890d0u));
        wrf32d(r3 + 0xcu, (f64)rdf32(0x804890c8u));
        wrf32d(r3 + 0x10u, (f64)rdf32(0x804890ccu));
        wrf32d(r3 + 0x14u, (f64)rdf32(0x804890d0u));
        wr32(r3 + 0x1cu, 0u);
        wrf32d(r3 + 0x18u, f0);
    }
    wr32(param_r3 + 0xd1cu, r3);
    f0 = (f64)rdf32(0x80576200u);
    wr32(r3 + 0x20u, 0u);
    wrf32d(r3, (f64)rdf32(0x804890c8u));
    wrf32d(r3 + 4u, (f64)rdf32(0x804890ccu));
    wrf32d(r3 + 8u, (f64)rdf32(0x804890d0u));
    wrf32d(r3 + 0xcu, (f64)rdf32(0x804890c8u));
    wrf32d(r3 + 0x10u, (f64)rdf32(0x804890ccu));
    f1 = (f64)rdf32(0x804890d0u);
    wrf32d(r3 + 0x14u, f1);
    wr32(r3 + 0x1cu, 0u);
    wrf32d(r3 + 0x18u, f0);
    wr32(r3 + 0x20u, param_r3);
    a.r[0] = param_r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
    r4 = rd32(r3);
    wr32(0x817fdefcu, rd32(r3 + 4u));
    r0 = rd32(r3 + 8u);
    wr32(0x817fdef8u, r4);
    f0 = (f64)rdf32(0x817fdef8u);
    f1 = (f64)(f32)((f64)rdf32(0x817fdefcu) + (f64)rdf32(0x80576220u));
    wr32(0x817fdf00u, r0);
    wrf32d(r31, f0);
    f0 = (f64)rdf32(0x817fdf00u);
    wrf32d(r31 + 4u, f1);
    wrf32d(r31 + 8u, f0);
    wrf32d(0x817fdefcu, f1);
    a.r[0] = rd32(r31 + 0x20u);
    r3 = tc_call(0x801e00fcu, &a);
    r30 = r3;
    if (r3 == 0u) {
        wr32(r31 + 0x20u, 0u);
        f0 = (f64)rdf32(0x80576200u);
        wrf32d(r31, (f64)rdf32(0x804890c8u));
        wrf32d(r31 + 4u, (f64)rdf32(0x804890ccu));
        wrf32d(r31 + 8u, (f64)rdf32(0x804890d0u));
        wrf32d(r31 + 0xcu, (f64)rdf32(0x804890c8u));
        wrf32d(r31 + 0x10u, (f64)rdf32(0x804890ccu));
        wrf32d(r31 + 0x14u, (f64)rdf32(0x804890d0u));
        wr32(r31 + 0x1cu, 0u);
        wrf32d(r31 + 0x18u, f0);
    } else {
        r3 = rd32(r3 + 0x114u);
        f31 = (f64)rdf32(r31 + 0x18u);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 != 0u) {
                a.r[0] = rd32(r30 + 0x114u);
                (void)tc_call(0x80157f30u, &a);
            }
        }
        wr32(r30 + 0x114u, 0u);
        f1 = (f64)rdf32(0x80576200u);
        wr32(r30 + 0x118u, 0xffffffffu);
        f0 = (f64)rdf32(0x8057621cu);
        wrf32d(r30 + 0x11cu, f1);
        f1 = (f64)rdf32(0x80576204u);
        wrf32d(r30 + 0x120u, f0);
        f0 = (f64)rdf32(0x8057622cu);
        wr32(r30 + 0x118u, 0xbau);
        wrf32d(r30 + 0x11cu, f31);
        wrf32d(r30 + 0x120u, f0);
        wr32(r30 + 0x128u, 0u);
        wrf32d(r30 + 0x124u, f1);
        r3 = rd32(r30 + 0x12cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 != 0u) {
                a.r[0] = rd32(r30 + 0x12cu);
                (void)tc_call(0x80157f30u, &a);
            }
        }
        wr32(r30 + 0x12cu, 0u);
        f1 = (f64)rdf32(0x80576200u);
        wr32(r30 + 0x130u, 0xffffffffu);
        f0 = (f64)rdf32(0x8057621cu);
        wrf32d(r30 + 0x134u, f1);
        f5 = (f64)rdf32(0x80576204u);
        wrf32d(r30 + 0x138u, f0);
        f4 = (f64)rdf32(0x817fdef8u);
        wr32(r30 + 0x130u, 0x19u);
        f3 = (f64)rdf32(0x817fdefcu);
        wrf32d(r30 + 0x134u, f1);
        f2 = (f64)rdf32(0x817fdf00u);
        wrf32d(r30 + 0x138u, f0);
        f1 = (f64)rdf32(0x8057622cu);
        wr32(r30 + 0x140u, 0u);
        f0 = (f64)rdf32(0x805761f0u);
        wrf32d(r30 + 0x13cu, f5);
        wr32(r30 + 0x1bcu, 0x23a4u);
        wrf32d(r30 + 8u, f4);
        wrf32d(r30 + 0xcu, f3);
        wrf32d(r30 + 0x10u, f2);
        wr32(0x817fdf04u, rd32(0x804890c8u));
        r7 = rd32(0x804890d0u);
        wr32(0x817fdf08u, rd32(0x804890ccu));
        f2 = (f64)rdf32(0x817fdf04u);
        wr32(0x817fdf0cu, r7);
        f3 = (f64)rdf32(0x817fdf08u);
        wrf32d(r30 + 0x174u, f2);
        f2 = (f64)rdf32(0x817fdf0cu);
        wrf32d(r30 + 0x178u, f3);
        wrf32d(r30 + 0x17cu, f2);
        wrf32d(r30 + 0x190u, f1);
        wrf32d(r30 + 0x20u, f0);
        wr32(r30 + 0x30u, 0x1080c5u);
        wrf32d(r30 + 0x24u, f0);
        wr32(r30 + 0x1b0u, 0x801def1cu);
        wr32(r30 + 0x1b4u, 0x801def20u);
        wr32(r30 + 0x1b8u, r31);
        a.r[0] = r30;
        a.r[1] = 0u;
        (void)tc_call(0x801dc5acu, &a);
        wr32(r31 + 0x1cu, r30);
    }
    return;
}
