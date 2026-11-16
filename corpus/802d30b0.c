#include "tc_rt.h"

void fn_802d30b0(u32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    f1 = (f64)rdf32(0x80348a80u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    wrf32d(param_1, f1);
    wrf32d(param_1 + 4u, f1);
    wrf32d(param_1 + 8u, f1);
    wrf32d(param_1 + 0xcu, f1);
    a.f[0] = f1;
    a.f[1] = f1;
    a.r[0] = param_3;
    (void)tc_call(0x802d72e8u, &a);
    f1 = (f64)rdf32((u32)param_2 + 0x4cu);
    wr8(0x817fdf88u, rd8(param_3));
    r6 = (u32)rd16((u32)param_2 + 0xfau);
    r5 = rd32((u32)param_2 + 0xd4u);
    wr8(0x817fdf89u, rd8(param_3 + 1u));
    wr8(0x817fdf8au, rd8(param_3 + 2u));
    wr8(0x817fdf8bu, rd8(param_3 + 3u));
    wr8(0x817fdf8cu, rd8(param_3 + 4u));
    wr8(0x817fdf8du, rd8(param_3 + 5u));
    wr8(0x817fdf8eu, rd8(param_3 + 6u));
    wr8(0x817fdf8fu, rd8(param_3 + 7u));
    wr8(0x817fdf90u, rd8(param_3 + 8u));
    wr8(0x817fdf91u, rd8(param_3 + 9u));
    wr8(0x817fdf92u, rd8(param_3 + 0xau));
    wr8(0x817fdf93u, rd8(param_3 + 0xbu));
    wr8(0x817fdf94u, rd8(param_3 + 0xcu));
    wr8(0x817fdf95u, rd8(param_3 + 0xdu));
    wr8(0x817fdf96u, rd8(param_3 + 0xeu));
    wr8(0x817fdf97u, rd8(param_3 + 0xfu));
    wr8(0x817fdf98u, rd8(param_3 + 0x10u));
    wr8(0x817fdf99u, rd8(param_3 + 0x11u));
    wr8(0x817fdf9au, rd8(param_3 + 0x12u));
    wr8(0x817fdf9bu, rd8(param_3 + 0x13u));
    wr8(0x817fdf9cu, rd8(param_3 + 0x14u));
    wr8(0x817fdf9du, rd8(param_3 + 0x15u));
    wr8(0x817fdf9eu, rd8(param_3 + 0x16u));
    wr8(0x817fdf9fu, rd8(param_3 + 0x17u));
    wr8(0x817fdfa0u, rd8(param_3 + 0x18u));
    wr8(0x817fdfa1u, rd8(param_3 + 0x19u));
    wr8(0x817fdfa2u, rd8(param_3 + 0x1au));
    wr8(0x817fdfa3u, rd8(param_3 + 0x1bu));
    wr8(0x817fdfa4u, rd8(param_3 + 0x1cu));
    wr8(0x817fdfa5u, rd8(param_3 + 0x1du));
    wr8(0x817fdfa6u, rd8(param_3 + 0x1eu));
    wr8(0x817fdfa7u, rd8(param_3 + 0x1fu));
    wr32(0x817fdfa8u, rd32(param_3 + 0x20u));
    r0 = rd32(param_3 + 0x28u);
    wr32(0x817fdfacu, rd32(param_3 + 0x24u));
    wr32(0x817fdfb0u, r0);
    r0 = rd32(param_3 + 0x30u);
    wr32(0x817fdfb4u, rd32(param_3 + 0x2cu));
    wr32(0x817fdfb8u, r0);
    wr32(0x817fdfbcu, rd32(param_3 + 0x34u));
    r0 = rd32(param_3 + 0x3cu);
    wr32(0x817fdfc0u, rd32(param_3 + 0x38u));
    wr32(0x817fdfc4u, r0);
    wr8(0x817fdfc8u, rd8(param_3 + 0x40u));
    wr8(0x817fdfc9u, rd8(param_3 + 0x41u));
    wr8(0x817fdfcau, rd8(param_3 + 0x42u));
    wr8(0x817fdfcbu, rd8(param_3 + 0x43u));
    wrf32d(0x817fdfccu, (f64)rdf32(param_3 + 0x44u));
    wr32(0x817fdfd0u, rd32(param_3 + 0x48u));
    wrf32d(0x817fdfd4u, (f64)rdf32(param_3 + 0x4cu));
    wrf32d(0x817fdfd8u, (f64)rdf32(param_3 + 0x50u));
    wr32(0x817fdfdcu, rd32(param_3 + 0x54u));
    wr32(0x817fdfe0u, rd32(param_3 + 0x58u));
    wr32(0x817fdfe4u, rd32(param_3 + 0x5cu));
    a.f[0] = f1;
    a.r[0] = param_1;
    a.r[1] = 0x817fdf88u;
    a.r[2] = r5;
    a.r[3] = r6;
    (void)tc_call(0x802d33e8u, &a);
    a.r[0] = 0x817fdf88u;
    a.r[1] = 0xffffffffu;
    (void)tc_call(0x802d8dacu, &a);
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x802d1834u, &a);
    r4 = tc_lastr4();
    r6 = (u32)rd8((u32)param_2 + 0xfcu);
    wr32(0x817fdf7cu, r4);
    r5 = ppc_mulhw(1431655766, (s32)r6);
    wr32(0x817fdf78u, r3);
    wr32(0x817fdf80u, r3);
    wr32(0x817fdf84u, r4);
    r0 = (r6 - ((r5 + ((r5 >> 0x1fu) & 1u)) * 3u)) & 0xffu;
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        f6 = (f64)rdf32(0x80348a90u);
    } else if (!c0lt) {
        if ((s32)r0 >= 3) {
            f6 = (f64)rdf32(0x80348a80u);
        } else {
            f6 = (f64)rdf32(0x80348a94u);
        }
    } else {
        f6 = (f64)rdf32(0x80348a80u);
    }
    r3 = ppc_mulhw(1431655766, (s32)r6);
    r0 = (r3 + ((r3 >> 0x1fu) & 1u)) & 0xffu;
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        f7 = (f64)rdf32(0x80348a90u);
    } else if (!c0lt) {
        if ((s32)r0 >= 3) {
            f7 = (f64)rdf32(0x80348a80u);
        } else {
            f7 = (f64)rdf32(0x80348a94u);
        }
    } else {
        f7 = (f64)rdf32(0x80348a80u);
    }
    f4 = (f64)(f32)((f64)rdf32(param_1 + 0xcu) - (f64)rdf32(param_1 + 4u));
    f5 = (f64)(f32)((f64)rdf32(param_1 + 8u) - (f64)rdf32(param_1));
    f3 = (f64)(f32)((f64)rdf32(0x817fdf84u) + (f64)(f32)((f64)(f32)((f64)rdf32((u32)param_2 + 0x50u) - f4) * f7));
    f2 = (f64)(f32)((f64)rdf32(0x817fdf80u) + (f64)(f32)((f64)(f32)((f64)rdf32((u32)param_2 + 0x4cu) - f5) * f6));
    wrf32d(param_1 + 4u, f3);
    wrf32d(param_1, f2);
    wrf32d(param_1 + 0xcu, (f64)(f32)(f3 + f4));
    wrf32d(param_1 + 8u, (f64)(f32)(f2 + f5));
    return;
}
