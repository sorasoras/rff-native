#include "tc_rt.h"

void fn_8008fd20(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r26 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    r30 = param_3 * param_4;
    wr32(0x817fdfb0u, 0x43300000u);
    wr32(0x817fdfb8u, 0x43300000u);
    wr32(param_1 + 0x10u, param_2);
    r3 = tc_call(0x8009000cu, &a);
    r4 = (r30 * 0x9cu) + 0x10u;
    if (r4 == 0u) {
        r3 = 0u;
    } else {
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r6 = r3 + 0x18u;
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            r3 = tc_call(0x80040db8u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = r4;
                r3 = tc_call(0x80094e80u, &a);
            } else {
                r5 = rd32(r3 + 0xcu);
                r6 = r3 + 0x18u;
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                r3 = tc_call(0x80040cd8u, &a);
            }
        }
    }
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x80090018u;
        a.r[2] = 0x8009009cu;
        a.r[3] = 0x9cu;
        a.r[4] = r30;
        r3 = tc_call(0x80255464u, &a);
    }
    wr32(param_1 + 8u, r3);
    f1 = (f64)rdf32(0x805729a8u);
    wr32(param_1, param_4);
    r31 = 0u;
    f30 = rdf64(0x805729b0u);
    wr32(param_1 + 4u, param_3);
    f31 = (f64)rdf32(0x80572990u);
    r4 = rd32(param_5 + 8u);
    wr32(0x817fdfa4u, rd32(param_5));
    r5 = rd32(param_5 + 4u);
    f0 = (f64)rdf32(0x817fdfa4u);
    wr32(0x817fdfacu, r4);
    f4 = (f64)(f32)(f0 - f1);
    f0 = (f64)rdf32(0x817fdfacu);
    wr32(0x817fdfa8u, r5);
    f3 = (f64)(f32)(f0 - f1);
    f2 = (f64)rdf32(0x817fdfa8u);
    wr32(0x817fdfb4u, param_3 ^ 0x80000000u);
    wr32(0x817fdfbcu, param_4 ^ 0x80000000u);
    f0 = rdf64(0x817fdfb8u);
    f1 = (f64)(f32)(rdf64(0x817fdfb0u) - f30);
    wrf32d(0x817fdfa4u, f4);
    f0 = (f64)(f32)(f0 - f30);
    wrf32d(0x817fdfacu, f3);
    f1 = ppc_fmadds(f31, f1, f4);
    f0 = ppc_fmadds(f31, f0, f3);
    wrf32d(param_1 + 0x18u, f4);
    wrf32d(param_1 + 0x1cu, f2);
    wrf32d(param_1 + 0x20u, f3);
    wrf32d(param_1 + 0x24u, f1);
    wrf32d(param_1 + 0x2cu, f0);
    wrf32d(param_1 + 0x28u, f2);
    while ((s32)r31 < (s32)rd32(param_1 + 4u)) {
        r26 = r31 ^ 0x80000000u;
        r30 = 0u;
        while ((s32)r30 < (s32)rd32(param_1)) {
            wr32(0x817fdfb4u, r26);
            r3 = rd32(param_5 + 4u);
            f0 = rdf64(0x817fdfb0u);
            wr32(0x817fdf98u, rd32(param_5));
            wr32(0x817fdfbcu, r30 ^ 0x80000000u);
            f1 = (f64)rdf32(0x817fdf98u);
            wr32(0x817fdf9cu, r3);
            f2 = ppc_fmadds(f31, (f64)(f32)(f0 - f30), f1);
            f1 = (f64)(f32)(rdf64(0x817fdfb8u) - f30);
            wr32(0x817fdfa0u, rd32(param_5 + 8u));
            f0 = (f64)rdf32(0x817fdfa0u);
            wrf32d(0x817fdf98u, f2);
            f0 = ppc_fmadds(f31, f1, f0);
            wrf32d(0x817fdfa0u, f0);
            r0 = r31 + (rd32(param_1 + 4u) * r30);
            r3 = r0 * 0x9cu;
            r0 = (r0 << 3u) & 0xfffffff8u;
            r3 = rd32(param_1 + 8u) + r3;
            a.r[0] = r3;
            a.r[1] = rd32(param_1 + 0x10u) + r0;
            a.r[2] = 0x817fdf98u;
            a.r[3] = param_6;
            a.r[4] = 1u;
            (void)tc_call(0x8008d3e8u, &a);
            r30 = r30 + 1u;
        }
        r31 = r31 + 1u;
    }
    wr32(param_1 + 0x14u, param_6);
    wr32(param_1 + 0xcu, 0u);
    return;
}
