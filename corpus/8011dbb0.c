#include "tc_rt.h"

void fn_8011dbb0(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf30u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if ((u32)(s8)rd8(0x80571288u) == 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8011d534u, &a);
        a.r[0] = 0x804bc390u;
        a.r[1] = r3;
        (void)tc_call(0x802e619cu, &a);
        a.r[0] = 0x804bc390u;
        a.r[1] = 0x800fe6a4u;
        a.r[2] = 0x804bc380u;
        (void)tc_call(0x802551b8u, &a);
        wr8(0x80571288u, 1u);
    }
    a.f[0] = (f64)rdf32(0x804bc394u);
    a.f[1] = (f64)rdf32(0x804bc39cu);
    a.f[2] = (f64)rdf32(0x804bc390u);
    a.f[3] = (f64)rdf32(0x804bc398u);
    a.f[4] = (f64)rdf32(0x8057128cu);
    a.f[5] = (f64)rdf32(0x80570808u);
    a.r[0] = 0x817fdfb0u;
    (void)tc_call(0x802342e8u, &a);
    a.r[0] = 0x817fdfb0u;
    a.r[1] = 1u;
    (void)tc_call(0x802543b0u, &a);
    a.r[0] = 0x817fdf80u;
    (void)tc_call(0x80233740u, &a);
    f2 = (f64)rdf32((u32)param_1 + 0x134u);
    f1 = (f64)rdf32((u32)param_1 + 0x130u);
    f3 = (f64)rdf32(0x8057424cu);
    wrf32d(0x817fdf40u, f1);
    wrf32d(0x817fdf44u, f2);
    wrf32d(0x817fdf48u, f3);
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.r[0] = 0x817fdf80u;
    a.r[1] = 0x817fdf80u;
    (void)tc_call(0x80233d2cu, &a);
    f1 = (f64)rdf32(0x80574248u);
    a.f[0] = f1;
    a.f[1] = f1;
    a.f[2] = (f64)(f32)((f64)rdf32(0x8057425cu) * (f64)rdf32((u32)param_1 + 0x138u));
    a.r[0] = 0x817fdf50u;
    (void)tc_call(0x802f01bcu, &a);
    a.r[0] = 0x817fdf80u;
    a.r[1] = 0x817fdf50u;
    a.r[2] = 0x817fdf80u;
    (void)tc_call(0x802337a0u, &a);
    f0 = (f64)rdf32(0x80574248u);
    wrf32d(0x817fdf40u, (f64)rdf32((u32)param_1 + 0x128u));
    wrf32d(0x817fdf44u, (f64)rdf32((u32)param_1 + 0x12cu));
    wrf32d(0x817fdf48u, f0);
    a.r[0] = 0x817fdf40u;
    a.r[1] = 0x817fdf44u;
    (void)tc_call(0x8011d808u, &a);
    a.f[0] = (f64)rdf32(0x817fdf40u);
    a.f[1] = (f64)rdf32(0x817fdf44u);
    a.f[2] = (f64)rdf32(0x817fdf48u);
    a.r[0] = 0x817fdf80u;
    a.r[1] = 0x817fdf80u;
    (void)tc_call(0x80233cb8u, &a);
    if (rd32(0x80571100u) == 1u) {
        f1 = (f64)rdf32(0x80574260u);
        f0 = (f64)rdf32(0x8057424cu);
        wr8((u32)param_2 + 0x50u, (u8)((u32)rd8((u32)param_2 + 0x50u) | 0x20u));
        wrf32d(0x817fdf38u, f1);
        wrf32d(0x817fdf3cu, f0);
        wrf32d((u32)param_2 + 0x44u, f1);
        wrf32d((u32)param_2 + 0x48u, f0);
    } else {
        wr8((u32)param_2 + 0x50u, (u8)((u32)rd8((u32)param_2 + 0x50u) & 0xffffffdfu));
    }
    wrf32d((u32)param_2 + 0x34u, (f64)rdf32(0x804bc390u));
    wrf32d((u32)param_2 + 0x38u, (f64)rdf32(0x804bc394u));
    wrf32d((u32)param_2 + 0x3cu, (f64)rdf32(0x804bc398u));
    wrf32d((u32)param_2 + 0x40u, (f64)rdf32(0x804bc39cu));
    r0 = rd32(0x817fdf84u);
    wr32((u32)param_2 + 4u, rd32(0x817fdf80u));
    wr32((u32)param_2 + 8u, r0);
    r0 = rd32(0x817fdf8cu);
    wr32((u32)param_2 + 0xcu, rd32(0x817fdf88u));
    wr32((u32)param_2 + 0x10u, r0);
    r0 = rd32(0x817fdf94u);
    wr32((u32)param_2 + 0x14u, rd32(0x817fdf90u));
    wr32((u32)param_2 + 0x18u, r0);
    r0 = rd32(0x817fdf9cu);
    wr32((u32)param_2 + 0x1cu, rd32(0x817fdf98u));
    wr32((u32)param_2 + 0x20u, r0);
    r0 = rd32(0x817fdfa4u);
    wr32((u32)param_2 + 0x24u, rd32(0x817fdfa0u));
    wr32((u32)param_2 + 0x28u, r0);
    r0 = rd32(0x817fdfacu);
    wr32((u32)param_2 + 0x2cu, rd32(0x817fdfa8u));
    wr32((u32)param_2 + 0x30u, r0);
    return;
}
