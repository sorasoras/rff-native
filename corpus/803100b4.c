#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_803100b4(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0;
    f64 f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf00u, 0x817fe000u);
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
    wrf64(0x817fdf80u, 0.0);
    wrf32d(0x817fdf88u, 0.0);
    wrf32d(0x817fdf8cu, 0.0);
    wrf64(0x817fdf70u, 0.0);
    wrf32d(0x817fdf78u, 0.0);
    wrf32d(0x817fdf7cu, 0.0);
    wr32(0x817fdf58u, 0u);
    wr32(0x817fdf5cu, 0u);
    wr32(0x817fdf60u, 0u);
    wr32(0x817fdf64u, 0u);
    wr32(0x817fdf68u, 0u);
    wr32(0x817fdf6cu, 0u);
    wr32(0x817fdf40u, 0x43300000u);
    wr32(0x817fdf48u, 0x43300000u);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    if (rd32(param_r3 + 0x130u) == 0u) {
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    } else {
        r3 = (u32)rd8(param_r3 + 0x128u);
        f28 = (f64)(f32)((f64)(f32)((f64)rdf32(0x80577840u) * (f64)rdf32(param_r3 + 8u)) * (f64)rdf32(param_r3 + 0x124u));
        f29 = (f64)(f32)((f64)rdf32(0x80577840u) * (f64)rdf32(param_r3 + 4u));
        f27 = (f64)rdf32(0x80577844u);
        if (r3 <= 1u) {
            f2 = rdf64(0x80577858u);
            f0 = (f64)rdf32(0x80577848u);
            wr32(0x817fdf44u, (r3 - 0x3fu) ^ 0x80000000u);
            f0 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdf40u) - f2), f0);
            f27 = (f64)(f32)(f27 + f0);
        } else {
            f2 = rdf64(0x80577858u);
            f0 = (f64)rdf32(0x80577848u);
            wr32(0x817fdf4cu, (r3 - 0x40u) ^ 0x80000000u);
            f0 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdf48u) - f2), f0);
            f27 = (f64)(f32)(f27 + f0);
        }
        r3 = (u32)rd8(param_r3 + 0x129u);
        f27 = (f64)(f32)(f27 * (f64)rdf32(param_r3 + 0xf0u));
        f26 = (f64)rdf32(0x80577844u);
        f27 = (f64)(f32)(f27 + (f64)rdf32(param_r3 + 0xcu));
        if (r3 <= 1u) {
            f2 = rdf64(0x80577858u);
            f0 = (f64)rdf32(0x80577848u);
            wr32(0x817fdf44u, (r3 + 1u) ^ 0x80000000u);
            f0 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdf40u) - f2), f0);
            f26 = (f64)(f32)(f26 + f0);
        } else {
            wr32(0x817fdf4cu, r3);
            f26 = (f64)(f32)(f26 + (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdf48u) - rdf64(0x80577860u)), (f64)rdf32(0x80577848u)));
        }
        r0 = (u32)rd8(param_r3 + 0x12du);
        r27 = 0x817fdf30u;
        wr32(0x817fdf44u, r3);
        r28 = 0x817fdf08u;
        f24 = (f64)rdf32(0x80577844u);
        r29 = 0u;
        wr32(0x817fdf4cu, r0);
        f30 = rdf64(0x80577860u);
        f31 = (f64)rdf32(0x80577850u);
        f3 = (f64)(f32)(rdf64(0x817fdf40u) - f30);
        f2 = (f64)rdf32(0x8057784cu);
        f1 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdf48u) - f30), f31);
        f0 = (f64)rdf32(0x80577840u);
        r3 = (u32)rd8(param_r3 + 0x12bu);
        r0 = (u32)rd8(param_r3 + 0x12cu);
        f4 = (f64)rdf32(param_r3 + 0x10u);
        wr8(0x817fdf08u, rd8(param_r3 + 0x12au));
        f2 = (f64)(f32)(f3 * f2);
        f0 = (f64)(f32)(f1 - f0);
        f1 = (f64)rdf32(param_r3 + 0x24u);
        f25 = (f64)(f32)(f24 + (f64)rdf32(param_r3 + 0x14u));
        wr8(0x817fdf09u, (u8)r3);
        f26 = (f64)(f32)(f26 + f2);
        r31 = rd32(param_r3 + 0x18u);
        f24 = (f64)(f32)(f24 + f0);
        wr8(0x817fdf0au, (u8)r0);
        f23 = (f64)rdf32(0x80577844u);
        f26 = (f64)(f32)(f26 + f4);
        f24 = (f64)(f32)(f24 + f1);
        do {
            r0 = (u32)rd8(r28);
            wrf32d(r27, f23);
            wr32(0x817fdf44u, r0);
            wrf32d(r27, (f64)(f32)((f64)rdf32(r27) + (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdf40u) - f30), f31)));
            a.r[0] = param_r3;
            a.r[1] = r29;
            f1 = tc_callf(0x802f5d18u, &a);
            r29 = r29 + 1u;
            r28 = r28 + 1u;
            wrf32d(r27, (f64)(f32)((f64)rdf32(r27) + f1));
            r27 = r27 + 4u;
        } while ((s32)r29 < 3);
        f30 = (f64)rdf32(0x80577844u);
        r27 = 0x817fdf20u;
        r28 = 0x817fdf10u;
        r29 = 0u;
        do {
            wrf32d(r27, f30);
            a.r[0] = param_r3;
            a.r[1] = r29;
            f1 = tc_callf(0x802f5d48u, &a);
            f0 = (f64)rdf32(r27);
            wrf32d(r28, f30);
            f0 = (f64)(f32)(f0 + f1);
            wrf32d(r27, f0);
            a.r[0] = param_r3;
            a.r[1] = r29;
            f1 = tc_callf(0x802f5d58u, &a);
            r29 = r29 + 1u;
            r27 = r27 + 4u;
            wrf32d(r28, (f64)(f32)((f64)rdf32(r28) + f1));
            r28 = r28 + 4u;
        } while ((s32)r29 < 4);
        r29 = 0x817fdf20u;
        r28 = 0x817fdf10u;
        f0 = (f64)rdf32(0x817fdf30u);
        r27 = 0u;
        wr32(rd32(param_r3 + 0x130u) + 0xd0u, rd32(param_r3 + 0x28u));
        r30 = 0u;
        f3 = (f64)rdf32(0x817fdf34u);
        f2 = (f64)rdf32(0x817fdf38u);
        wr32(rd32(param_r3 + 0x130u) + 0xd4u, rd32(param_r3 + 0x2cu));
        wrf32d(rd32(param_r3 + 0x130u) + 0x3cu, f29);
        wrf32d(rd32(param_r3 + 0x130u) + 0x40u, f28);
        wrf32d(rd32(param_r3 + 0x130u) + 0x44u, f27);
        wrf32d(rd32(param_r3 + 0x130u) + 0x48u, f26);
        wrf32d(rd32(param_r3 + 0x130u) + 0x4cu, f25);
        wr32(rd32(param_r3 + 0x130u) + 0x50u, r31);
        wr32(rd32(param_r3 + 0x130u) + 0x54u, rd32(param_r3 + 0x1cu));
        wrf32d(rd32(param_r3 + 0x130u) + 0x58u, (f64)rdf32(param_r3 + 0x20u));
        wrf32d(rd32(param_r3 + 0x130u) + 0x5cu, f24);
        wrf32d(rd32(param_r3 + 0x130u) + 0x60u, f0);
        wrf32d(rd32(param_r3 + 0x130u) + 0x64u, f3);
        wrf32d(rd32(param_r3 + 0x130u) + 0x68u, f2);
        do {
            a.r[0] = param_r3;
            a.r[1] = r27;
            f1 = tc_callf(0x802f5d38u, &a);
            r27 = r27 + 1u;
            f0 = (f64)rdf32(r29);
            f2 = (f64)rdf32(r28);
            wrf32d(rd32(param_r3 + 0x130u) + r30 + 0x6cu, f1);
            r29 = r29 + 4u;
            r28 = r28 + 4u;
            wrf32d(rd32(param_r3 + 0x130u) + r30 + 0x7cu, f0);
            r3 = rd32(param_r3 + 0x130u) + r30;
            r30 = r30 + 4u;
            wrf32d(r3 + 0x8cu, f2);
        } while ((s32)r27 < 4);
        r27 = param_r3 + 0x6cu;
        r28 = 0u;
        while ((s32)r28 < (s32)rd32(param_r3 + 0xf4u)) {
            a.r[0] = rd32(rd32(param_r3 + 0x130u) + 0xecu);
            a.r[1] = r28;
            a.r[2] = r27;
            (void)tc_call(0x8030c7d4u, &a);
            r27 = r27 + 0x18u;
            r28 = r28 + 1u;
        }
        r3 = rd32(param_r3 + 0x130u);
        wrf32d(r3 + 0x1cu, (f64)rdf32(param_r3 + 0x114u));
        wrf32d(r3 + 0x20u, (f64)rdf32(param_r3 + 0x118u));
        wr32(r3 + 0x24u, rd32(param_r3 + 0x11cu));
        wr8(r3 + 0x28u, rd8(param_r3 + 0x120u));
        wr8(r3 + 0x29u, rd8(param_r3 + 0x121u));
        wr8(r3 + 0x2au, rd8(param_r3 + 0x122u));
        wr8(r3 + 0x2bu, rd8(param_r3 + 0x123u));
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    }
    return;
}
