#include "tc_rt.h"

void fn_8018f4a8(u32 param_r3, u32 param_r4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r27 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    r28 = 3u;
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    r3 = tc_call(0x80190000u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        f30 = rdf64(0x80575350u);
        r27 = 0u;
        wr32(0x817fdfa4u, rd32(r3));
        r31 = 0u;
        f31 = (f64)rdf32(0x8057535cu);
        wr32(0x817fdfa8u, r0);
        wr32(0x817fdfacu, rd32(r3 + 8u));
        do {
            r7 = r31 - 0x7fc8fffcu;
            r5 = rd32(r7 + 4u);
            r0 = rd32(r31 - 0x7fc8fffcu) ^ 0x80000000u;
            r6 = rd32(r7 + 8u) ^ 0x80000000u;
            wr32(0x817fdfb0u, 0x43300000u);
            r5 = r5 ^ 0x80000000u;
            wr32(0x817fdfb4u, r6);
            f0 = rdf64(0x817fdfb0u);
            wr32(0x817fdfbcu, r5);
            f2 = (f64)(f32)(f0 - f30);
            wr32(0x817fdfb8u, 0x43300000u);
            f0 = rdf64(0x817fdfb8u);
            wr32(0x817fdfc4u, r0);
            f1 = (f64)(f32)(f0 - f30);
            wr32(0x817fdfc0u, 0x43300000u);
            f0 = rdf64(0x817fdfc0u);
            wrf32d(0x817fdf9cu, f1);
            f0 = (f64)(f32)(f0 - f30);
            wrf32d(0x817fdfa0u, f2);
            wrf32d(0x817fdf98u, f0);
            a.r[0] = 0x817fdf98u;
            a.r[1] = 0x817fdfa4u;
            f1 = tc_callf(0x802344e8u, &a);
            c0lt = f1 < f31;
            if (((((c0lt << 0x1fu) | ((f1 > f31) << 0x1eu) | ((c0lt || (f1 == f31)) << 0x1du) | (((f1 != f1) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                r28 = r27;
                break;
            }
            r27 = r27 + 1u;
            r31 = r31 + 0xcu;
        } while ((s32)r27 < 3);
        if (r28 == 3u) {
            f1 = (f64)rdf32(0x817fdfa8u);
            f0 = (f64)rdf32(param_r3 + 0x504u);
        }
    }
    return;
}
