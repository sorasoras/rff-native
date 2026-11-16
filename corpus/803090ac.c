#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_803090ac(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r6 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf20u, 0x817fe000u);
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
    wrf64(0x817fdf90u, 0.0);
    wrf32d(0x817fdf98u, 0.0);
    wrf32d(0x817fdf9cu, 0.0);
    wr32(0x817fdf74u, 0u);
    wr32(0x817fdf78u, 0u);
    wr32(0x817fdf7cu, 0u);
    wr32(0x817fdf80u, 0u);
    wr32(0x817fdf84u, 0u);
    wr32(0x817fdf88u, 0u);
    wr32(0x817fdf8cu, 0u);
    if ((u32)rd8(param_r4) != 0u) {
        r6 = (u32)rd8(param_r4 + 9u);
        wr32(0x817fdf6cu, (u32)rd8(param_r4 + 8u));
        f2 = rdf64(0x80577790u);
        wr32(0x817fdf68u, 0x43300000u);
        f2 = (f64)(f32)(rdf64(0x817fdf68u) - f2);
        f30 = (f64)(f32)((f64)rdf32(0x80577798u) * (f64)rdf32(param_r3 + 8u));
        f29 = (f64)(f32)((f64)rdf32(0x80577780u) + (f64)rdf32(param_r3 + 0xcu));
        f31 = (f64)(f32)((f64)(f32)((f64)(f32)((f64)rdf32(0x80577798u) * (f64)rdf32(param_r3 + 4u)) * (f64)(f32)px_fdiv(f2, (f64)rdf32(0x8057779cu))) * (f64)rdf32(param_r4 + 0x30u));
        if (r6 <= 1u) {
            wr32(0x817fdf68u, 0x43300000u);
            f2 = rdf64(0x80577788u);
            wr32(0x817fdf6cu, (r6 - 0x3fu) ^ 0x80000000u);
            f29 = (f64)(f32)(f29 + (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdf68u) - f2), (f64)rdf32(0x805777a0u)));
        } else {
            wr32(0x817fdf68u, 0x43300000u);
            f2 = rdf64(0x80577788u);
            wr32(0x817fdf6cu, (r6 - 0x40u) ^ 0x80000000u);
            f29 = (f64)(f32)(f29 + (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdf68u) - f2), (f64)rdf32(0x805777a0u)));
        }
        r27 = 0x817fdf58u;
        r28 = 0u;
        f29 = (f64)(f32)(f29 + (f64)rdf32(param_r4 + 0x34u));
        f25 = (f64)rdf32(0x80577780u);
        f27 = (f64)(f32)((f64)rdf32(0x80577780u) + (f64)rdf32(param_r3 + 0x10u));
        f28 = f25;
        f26 = (f64)(f32)((f64)rdf32(0x80577798u) + (f64)rdf32(param_r3 + 0x14u));
        f25 = (f64)(f32)(f25 + (f64)rdf32(param_r3 + 0x24u));
        r26 = rd32(param_r3 + 0x18u);
        do {
            wrf32d(r27, f28);
            a.r[0] = param_r3;
            a.r[1] = r28;
            f1 = tc_callf(0x802f5d18u, &a);
            r28 = r28 + 1u;
            wrf32d(r27, (f64)(f32)((f64)rdf32(r27) + f1));
            r27 = r27 + 4u;
        } while ((s32)r28 < 3);
        f28 = (f64)rdf32(0x80577780u);
        r27 = 0x817fdf48u;
        r28 = 0x817fdf38u;
        r29 = 0x817fdf28u;
        r30 = 0u;
        do {
            a.r[0] = param_r3;
            a.r[1] = r30;
            f1 = tc_callf(0x802f5d38u, &a);
            wrf32d(r27, f1);
            wrf32d(r28, f28);
            a.r[0] = param_r3;
            a.r[1] = r30;
            f1 = tc_callf(0x802f5d48u, &a);
            f0 = (f64)rdf32(r28);
            wrf32d(r29, f28);
            f0 = (f64)(f32)(f0 + f1);
            wrf32d(r28, f0);
            a.r[0] = param_r3;
            a.r[1] = r30;
            f1 = tc_callf(0x802f5d58u, &a);
            r30 = r30 + 1u;
            r27 = r27 + 4u;
            r28 = r28 + 4u;
            wrf32d(r29, (f64)(f32)((f64)rdf32(r29) + f1));
            r29 = r29 + 4u;
        } while ((s32)r30 < 4);
        r3 = tc_call(0x8022c2b0u, &a);
        r25 = rd32(param_r4 + 4u);
        r30 = r3;
        if (r25 != 0u) {
            a.f[0] = f31;
            a.r[0] = r25;
            (void)tc_call(0x8030c3f0u, &a);
            a.f[0] = f30;
            a.r[0] = r25;
            (void)tc_call(0x8030c4d8u, &a);
            a.f[0] = f29;
            a.r[0] = r25;
            (void)tc_call(0x8030c538u, &a);
            a.f[0] = f27;
            a.r[0] = r25;
            (void)tc_call(0x8030c558u, &a);
            a.f[0] = f26;
            a.r[0] = r25;
            (void)tc_call(0x8030c578u, &a);
            a.r[0] = r25;
            a.r[1] = r26;
            (void)tc_call(0x8030c5bcu, &a);
            a.r[0] = r25;
            a.r[1] = rd32(param_r3 + 0x1cu);
            (void)tc_call(0x8030c5f4u, &a);
            a.f[0] = (f64)rdf32(param_r3 + 0x20u);
            a.r[0] = r25;
            (void)tc_call(0x8030c614u, &a);
            a.f[0] = f25;
            a.r[0] = r25;
            (void)tc_call(0x8030c658u, &a);
            r27 = 0x817fdf58u;
            r26 = 0u;
            do {
                a.f[0] = (f64)rdf32(r27);
                a.r[0] = r25;
                a.r[1] = r26;
                (void)tc_call(0x8030c6a0u, &a);
                r26 = r26 + 1u;
                r27 = r27 + 4u;
            } while ((s32)r26 < 3);
            r29 = 0x817fdf48u;
            r28 = 0x817fdf38u;
            r27 = 0x817fdf28u;
            r26 = 0u;
            do {
                a.f[0] = (f64)rdf32(r29);
                a.r[0] = r25;
                a.r[1] = r26;
                (void)tc_call(0x8030c6ecu, &a);
                a.f[0] = (f64)rdf32(r28);
                a.r[0] = r25;
                a.r[1] = r26;
                (void)tc_call(0x8030c738u, &a);
                a.f[0] = (f64)rdf32(r27);
                a.r[0] = r25;
                a.r[1] = r26;
                (void)tc_call(0x8030c788u, &a);
                r26 = r26 + 1u;
                r28 = r28 + 4u;
                r27 = r27 + 4u;
                r29 = r29 + 4u;
            } while ((s32)r26 < 4);
            r29 = param_r3 + 0x6cu;
            r26 = 0u;
            while ((s32)r26 < (s32)rd32(param_r3 + 0x830u)) {
                a.r[0] = r25;
                a.r[1] = r26;
                a.r[2] = r29;
                (void)tc_call(0x8030c7d4u, &a);
                r29 = r29 + 0x18u;
                r26 = r26 + 1u;
            }
        }
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
