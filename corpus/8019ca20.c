#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8019ca20(u32 param_r3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r24 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdec0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, 0.0);
    wrf32d(0x817fdfbcu, 0.0);
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, 0.0);
    wrf32d(0x817fdfacu, 0.0);
    wr32(0x817fdf70u, 0u);
    wr32(0x817fdf74u, 0u);
    wr32(0x817fdf78u, 0u);
    wr32(0x817fdf7cu, 0u);
    wr32(0x817fdf80u, 0u);
    wr32(0x817fdf84u, 0u);
    wr32(0x817fdf88u, 0u);
    wr32(0x817fdf8cu, 0u);
    wr32(0x817fdf90u, 0u);
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf9cu, 0u);
    r4 = rd32(param_r3 + 0x5c0u);
    r0 = rd32(param_r3 + 0x6e8u);
    wr32(0x817fdf60u, 0x43300000u);
    wr32(0x817fdf68u, 0x43300000u);
    r28 = (u32)rd8(((r4 - 0x1f8u) * 0x14u) - 0x7fb60831u);
    if (r0 != 0u) {
        r5 = param_r3 + 0x5f8u;
    } else {
        r5 = 0u;
    }
    r0 = rd32(param_r3 + 0xa08u);
    r5 = rd32(r5 + 0x30u);
    r29 = r5 | 0x20au;
    if (r0 <= 0x1du) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r5 = rd32(r0 - 0x7fc8f3b8u);
        sw_ = r5;
        switch (sw_) {
        case 0x8019d36cu:
            return;
        case 0x8019cad4u:
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = r28;
            a.r[3] = r29;
            (void)tc_call(0x8019d3b4u, &a);
            return;
        case 0x8019cafcu:
            break;
        case 0x8019cae8u:
            if (rd32(0x80499178u) == 0u) {
                return;
            }
            break;
        case 0x8019d234u:
            r5 = 1u;
            if (rd32(param_r3 + 0x15c0u) == 0u) {
                r4 = rd32(param_r3 + 0x1518u);
                if (((((0u - r4) | r4) >> 0x1fu) & 1u) == 0u) {
                    r5 = 0u;
                }
            }
            if (r5 != 0u) {
                return;
            }
            f0 = (f64)rdf32(0x80575788u);
            wrf32d(0x817fdef8u, f0);
            wrf32d(0x817fdef4u, f0);
            wrf32d(0x817fdef0u, f0);
            r3 = param_r3 + 0x54cu;
            a.r[0] = r3;
            a.r[1] = 0x817fdef0u;
            a.r[2] = 0xc8u;
            a.r[3] = 0x804890c8u;
            a.r[4] = 0x43300000u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = 0.0;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x34u), &a);
            f1 = tc_lastf();
            if (r3 == 0u) {
                a.r[0] = param_r3;
                a.r[1] = 0x817fdef0u;
                a.r[2] = 0x15u;
                a.r[3] = 0x804890c8u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                (void)tc_call(rd32(rd32(param_r3) + 0x34u), &a);
            }
            r29 = r29 | 0x2000u;
            r3 = rd32(0x8033ae70u);
            r7 = (u32)rd8(0x80499099u) + rd32(0x8049e140u);
            r4 = rd32(0x8033ae6cu);
            r0 = rd32(0x8033ae74u);
            wr32(0x817fdee0u, rd32(0x8033ae68u));
            wr32(0x817fdee4u, r4);
            wr32(0x817fdee8u, r3);
            wr32(0x817fdeecu, r0);
            if ((s32)r7 <= 0) {
                r7 = 0u;
            }
            if ((s32)r7 >= 999) {
                r7 = 0x3e7u;
            }
            if ((s32)r7 < 0) {
                r7 = 0u;
            }
            wr32(0x817fdf64u, r7 & 0xffffu);
            f3 = (f64)rdf32((((r28 - 1u) << 2u) & 0xfffffffcu) - 0x7e802120u);
            a.f[0] = (f64)rdf32(0x8057575cu);
            a.f[1] = (f64)(f32)(f3 - (f64)rdf32(0x805757a8u));
            a.f[2] = f3;
            a.f[3] = (f64)(f32)(rdf64(0x817fdf60u) - rdf64(0x80575760u));
            a.r[0] = param_r3 + 0x14d0u;
            a.r[1] = 0x817fdef0u;
            a.r[2] = r29;
            a.r[3] = 0u;
            a.r[4] = param_r3;
            (void)tc_call(0x800cdc78u, &a);
            return;
        case 0x8019d0c8u:
            wr32(0x817fdf64u, r28 - 1u);
            f4 = (f64)rdf32(0x805757acu);
            a.f[0] = (f64)rdf32(0x805757b0u);
            a.f[1] = ppc_fmadds(f4, (f64)(f32)(rdf64(0x817fdf60u) - rdf64(0x80575760u)), (f64)rdf32(0x805757a8u));
            a.f[2] = (f64)rdf32(0x805757b4u);
            a.f[3] = f4;
            a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
            f1 = tc_callf(0x80056b18u, &a);
            if (rd32(0x803541b8u) == 1u) {
                a.f[0] = (f64)rdf32(0x80575770u);
                a.r[0] = 0u;
                f1 = tc_callf(0x80079434u, &a);
            }
            r4 = 1u;
            if (rd32(param_r3 + 0x15c0u) == 0u) {
                r3 = rd32(param_r3 + 0x1518u);
                if (((((0u - r3) | r3) >> 0x1fu) & 1u) == 0u) {
                    r4 = 0u;
                }
            }
            if (r4 != 0u) {
                return;
            }
            f0 = (f64)rdf32(0x80575788u);
            wrf32d(0x817fdf04u, f0);
            wrf32d(0x817fdf00u, f0);
            wrf32d(0x817fdefcu, f0);
            a.r[0] = param_r3 + 0x54cu;
            a.r[1] = 0x817fdefcu;
            a.r[2] = 0xc8u;
            a.r[3] = 0x804890c8u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(param_r3 + 0x54cu) + 0x34u), &a);
            f1 = tc_lastf();
            if (r3 == 0u) {
                a.r[0] = param_r3;
                a.r[1] = 0x817fdefcu;
                a.r[2] = 0x15u;
                a.r[3] = 0x804890c8u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                (void)tc_call(rd32(rd32(param_r3) + 0x34u), &a);
            }
            r29 = r29 | 0x2000u;
            r0 = (u32)rd8(0x80499099u) + rd32(0x8049e140u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 999) {
                r0 = 0x3e7u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r0 = r0 & 0xffffu;
            f3 = rdf64(0x80575760u);
            wr32(0x817fdf6cu, r0);
            a.f[0] = (f64)rdf32(0x80575778u);
            a.f[1] = (f64)rdf32(0x805757b8u);
            a.f[2] = (f64)rdf32(0x80575758u);
            a.f[3] = (f64)(f32)(rdf64(0x817fdf68u) - f3);
            a.r[0] = param_r3 + 0x14d0u;
            a.r[1] = 0x817fdefcu;
            a.r[2] = r29;
            a.r[3] = 0u;
            a.r[4] = param_r3;
            (void)tc_call(0x800cdc78u, &a);
            return;
        case 0x8019cc0cu:
            r4 = 1u;
            if (rd32(param_r3 + 0x15c0u) == 0u) {
                r3 = rd32(param_r3 + 0x1518u);
                if (((((0u - r3) | r3) >> 0x1fu) & 1u) == 0u) {
                    r4 = 0u;
                }
            }
            if (r4 != 0u) {
                return;
            }
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 0x8049f1b0u;
            a.r[4] = 0x43300000u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = 0.0;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
            r7 = rd32(r3);
            r6 = rd32(r3 + 4u);
            wr32(0x817fdf64u, r28 - 1u);
            f1 = rdf64(0x80575760u);
            wr32(0x817fdf48u, r6);
            r29 = r29 | 0x400u;
            f0 = rdf64(0x817fdf60u);
            wr32(0x817fdf44u, r7);
            f2 = (f64)(f32)(f0 - f1);
            f3 = (f64)rdf32(0x80575770u);
            f0 = (f64)rdf32(0x817fdf48u);
            wr32(0x817fdf4cu, rd32(r3 + 8u));
            f4 = ppc_fmadds(f3, (f64)rdf32(param_r3 + 0xb4u), f0);
            r0 = (u32)rd8(0x80499099u) + rd32(0x8049e140u);
            f3 = ppc_fmadds((f64)rdf32(0x80575784u), f2, (f64)rdf32(0x80575780u));
            wrf32d(0x817fdf48u, f4);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 999) {
                r0 = 0x3e7u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r0 = r0 & 0xffffu;
            f0 = (f64)rdf32(0x8057577cu);
            wr32(0x817fdf6cu, r0);
            a.f[0] = (f64)rdf32(0x80575778u);
            a.f[1] = (f64)(f32)(f0 * f3);
            a.f[2] = f3;
            a.f[3] = (f64)(f32)(rdf64(0x817fdf68u) - rdf64(0x80575760u));
            a.r[0] = param_r3 + 0x14d0u;
            a.r[1] = 0x817fdf44u;
            a.r[2] = r29;
            a.r[3] = 0u;
            a.r[4] = param_r3;
            (void)tc_call(0x800cdc78u, &a);
            return;
        case 0x8019cd1cu:
            r3 = tc_call(0x8007491cu, &a);
            f1 = tc_lastf();
            r28 = r3;
            if (r3 == 0u) {
                return;
            }
            r5 = rd32(0x804890d4u);
            r4 = rd32(0x804890d8u);
            r0 = rd32(0x804890dcu);
            wr32(0x817fdf38u, r5);
            wr32(0x817fdf3cu, r4);
            wr32(0x817fdf40u, r0);
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 0x804890d4u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            f1 = tc_callf(rd32(rd32(param_r3) + 0x2cu), &a);
            f28 = f1;
            r3 = rd32(0x817fdf3cu);
            r0 = rd32(0x817fdf40u);
            wr32(0x817fded4u, rd32(0x817fdf38u));
            wr32(0x817fded8u, r3);
            wr32(0x817fdedcu, r0);
            a.f[0] = f1;
            f1 = tc_callf(0x80262704u, &a);
            f27 = (f64)(f32)f1;
            a.f[0] = f28;
            f1 = tc_callf(0x80262b10u, &a);
            f5 = (f64)(f32)f1;
            f2 = (f64)rdf32(0x817fdedcu);
            f4 = (f64)rdf32(0x817fded4u);
            f1 = (f64)rdf32(0x80575778u);
            wrf32d(0x817fdf38u, ppc_fmadds(f4, f27, (f64)(f32)(f2 * f5)));
            wrf32d(0x817fdf40u, ppc_fmadds(f4, -f5, (f64)(f32)(f2 * f27)));
            a.f[0] = f1;
            a.r[0] = 0x817fdf38u;
            a.r[1] = 0x817fdf38u;
            f1 = tc_callf(0x802343c8u, &a);
            f0 = (f64)rdf32(0x80575788u);
            wrf32d(0x817fdf34u, f0);
            wrf32d(0x817fdf30u, f0);
            wrf32d(0x817fdf2cu, f0);
            a.r[0] = param_r3 + 0x54cu;
            a.r[1] = 0x817fdf2cu;
            a.r[2] = 0xc8u;
            a.r[3] = 0x804890c8u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(param_r3 + 0x54cu) + 0x34u), &a);
            f1 = tc_lastf();
            if (r3 == 0u) {
                a.r[0] = param_r3;
                a.r[1] = 0x817fdf2cu;
                a.r[2] = 0x15u;
                a.r[3] = 0x804890c8u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                (void)tc_call(rd32(rd32(param_r3) + 0x34u), &a);
            }
            r0 = (u32)rd8(0x80499099u) + rd32(0x8049e140u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 999) {
                r0 = 0x3e7u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r0 = r0 & 0xffffu;
            wr32(0x817fdf64u, r0);
            a.f[0] = (f64)rdf32(0x80575758u);
            a.f[1] = (f64)rdf32(0x8057578cu);
            a.f[2] = (f64)(f32)(rdf64(0x817fdf60u) - rdf64(0x80575760u));
            a.r[0] = r28;
            a.r[1] = param_r3;
            a.r[2] = 0x817fdf2cu;
            a.r[3] = 0x817fdf38u;
            a.r[4] = 0x804890c8u;
            a.r[5] = 6u;
            a.r[6] = r29;
            a.r[7] = 0u;
            (void)tc_call(0x80094a50u, &a);
            wr32(r28 + 0x40u, 0u);
            wr32(r28 + 0x64u, rd32(r28 + 0x64u) | 0xf0000000u);
            return;
        case 0x8019cebcu:
            r27 = 0u;
            r3 = rd32(0x8033ae5cu);
            r0 = rd32(0x8033ae60u);
            wr32(0x817fdf20u, rd32(0x8033ae58u));
            f28 = (f64)rdf32(0x80575790u);
            wr32(0x817fdf24u, r3);
            f29 = (f64)rdf32(0x80575794u);
            r24 = 0u;
            wr32(0x817fdf28u, r0);
            f30 = (f64)rdf32(0x80575788u);
            f31 = rdf64(0x80575760u);
            do {
                if (r28 == 3u && r27 != 0u) {
                    return;
                }
                r3 = tc_call(0x8007491cu, &a);
                f1 = tc_lastf();
                r26 = r3;
                if (r3 != 0u) {
                    r5 = rd32(0x804890d4u);
                    r4 = rd32(0x804890d8u);
                    r0 = rd32(0x804890dcu);
                    wr32(0x817fdf14u, r5);
                    wr32(0x817fdf18u, r4);
                    wr32(0x817fdf1cu, r0);
                    a.r[0] = param_r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
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
                    f1 = tc_callf(rd32(rd32(param_r3) + 0x2cu), &a);
                    f0 = (f64)(f32)(f28 * (f64)rdf32(r24 - 0x7e8020e0u));
                    r3 = rd32(0x817fdf18u);
                    r0 = rd32(0x817fdf1cu);
                    wr32(0x817fdec8u, rd32(0x817fdf14u));
                    f0 = (f64)(f32)px_fdiv(f0, f29);
                    wr32(0x817fdeccu, r3);
                    wr32(0x817fded0u, r0);
                    f27 = (f64)(f32)(f0 + f1);
                    a.f[0] = f27;
                    f1 = tc_callf(0x80262704u, &a);
                    f26 = (f64)(f32)f1;
                    a.f[0] = f27;
                    f1 = tc_callf(0x80262b10u, &a);
                    f4 = (f64)(f32)f1;
                    f1 = (f64)rdf32(0x817fded0u);
                    f3 = (f64)rdf32(0x817fdec8u);
                    wrf32d(0x817fdf14u, ppc_fmadds(f3, f26, (f64)(f32)(f1 * f4)));
                    wrf32d(0x817fdf1cu, ppc_fmadds(f3, -f4, (f64)(f32)(f1 * f26)));
                    if (r28 != 3u) {
                        f1 = (f64)rdf32(0x8057579cu);
                    } else {
                        f1 = (f64)rdf32(0x80575798u);
                    }
                    a.f[0] = f1;
                    a.r[0] = 0x817fdf14u;
                    a.r[1] = 0x817fdf14u;
                    f1 = tc_callf(0x802343c8u, &a);
                    wrf32d(0x817fdf10u, f30);
                    wrf32d(0x817fdf0cu, f30);
                    wrf32d(0x817fdf08u, f30);
                    a.r[0] = param_r3 + 0x54cu;
                    a.r[1] = 0x817fdf08u;
                    a.r[2] = 0xc8u;
                    a.r[3] = 0x804890c8u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    r3 = tc_call(rd32(rd32(param_r3 + 0x54cu) + 0x34u), &a);
                    f1 = tc_lastf();
                    if (r3 == 0u) {
                        a.r[0] = param_r3;
                        a.r[1] = 0x817fdf08u;
                        a.r[2] = 0x15u;
                        a.r[3] = 0x804890c8u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        (void)tc_call(rd32(rd32(param_r3) + 0x34u), &a);
                    }
                    r0 = (u32)rd8(0x80499099u) + rd32(0x8049e140u);
                    if ((s32)r0 <= 0) {
                        r0 = 0u;
                    }
                    if ((s32)r0 >= 999) {
                        r0 = 0x3e7u;
                    }
                    if ((s32)r0 < 0) {
                        r0 = 0u;
                    }
                    r0 = r0 & 0xffffu;
                    f1 = (f64)rdf32(0x805757a0u);
                    wr32(0x817fdf6cu, r0);
                    a.f[0] = f1;
                    a.f[1] = (f64)rdf32(0x805757a4u);
                    a.f[2] = (f64)(f32)(rdf64(0x817fdf68u) - f31);
                    a.r[0] = r26;
                    a.r[1] = param_r3;
                    a.r[2] = 0x817fdf08u;
                    a.r[3] = 0x817fdf14u;
                    a.r[4] = 0x804890c8u;
                    a.r[5] = 6u;
                    a.r[6] = r29;
                    a.r[7] = 0u;
                    (void)tc_call(0x80094a50u, &a);
                    wr32(r26 + 0x40u, 0u);
                    wr32(r26 + 0x64u, rd32(r26 + 0x64u) | 0xf0000000u);
                }
                r27 = r27 + 1u;
                r24 = r24 + 4u;
            } while (r27 < 3u);
            return;
        default:
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 0x8049f1b0u;
            a.r[4] = 0x43300000u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = 0.0;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(sw_, &a);
            r0 = 0u;
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            r11 = 0u;
            r12 = 0u;
            f0 = 0.0;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            f9 = 0.0;
            f10 = 0.0;
            f11 = 0.0;
            f12 = 0.0;
            f13 = 0.0;
            ctr = 0u;
            return;
        }
        r4 = 1u;
        if (rd32(param_r3 + 0x15c0u) == 0u) {
            r3 = rd32(param_r3 + 0x1518u);
            if (((((0u - r3) | r3) >> 0x1fu) & 1u) == 0u) {
                r4 = 0u;
            }
        }
        if (r4 == 0u) {
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 0x8049f1b0u;
            a.r[4] = 0x43300000u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = 0.0;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
            r7 = rd32(r3);
            r6 = rd32(r3 + 4u);
            wr32(0x817fdf64u, r28 - 1u);
            f1 = rdf64(0x80575760u);
            wr32(0x817fdf54u, r6);
            r29 = r29 | 0x400u;
            f0 = rdf64(0x817fdf60u);
            wr32(0x817fdf50u, r7);
            f2 = (f64)(f32)(f0 - f1);
            f3 = (f64)rdf32(0x80575770u);
            f0 = (f64)rdf32(0x817fdf54u);
            wr32(0x817fdf58u, rd32(r3 + 8u));
            f4 = ppc_fmadds(f3, (f64)rdf32(param_r3 + 0xb4u), f0);
            r0 = (u32)rd8(0x80499099u) + rd32(0x8049e140u);
            f3 = ppc_fmadds((f64)rdf32(0x80575774u), f2, (f64)rdf32(0x80575758u));
            wrf32d(0x817fdf54u, f4);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 999) {
                r0 = 0x3e7u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r0 = r0 & 0xffffu;
            f0 = (f64)rdf32(0x8057577cu);
            wr32(0x817fdf6cu, r0);
            a.f[0] = (f64)rdf32(0x80575778u);
            a.f[1] = (f64)(f32)(f0 * f3);
            a.f[2] = f3;
            a.f[3] = (f64)(f32)(rdf64(0x817fdf68u) - rdf64(0x80575760u));
            a.r[0] = param_r3 + 0x14d0u;
            a.r[1] = 0x817fdf50u;
            a.r[2] = r29;
            a.r[3] = 0u;
            a.r[4] = param_r3;
            (void)tc_call(0x800cdc78u, &a);
        }
    }
    return;
}
