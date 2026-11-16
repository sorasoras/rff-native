#include "tc_rt.h"

u32 fn_80036be4(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 0x803359f0u;
    a.r[1] = 0x817fdfb8u;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    r3 = tc_call(0x802348dcu, &a);
    if (r3 != 0u) {
        r31 = (rd32(0x817fdfecu) + 0x1fu) & 0xffffffe0u;
        a.r[0] = 0u;
        a.r[1] = r31;
        a.r[2] = 0x4e4f5320u;
        a.r[3] = 0x8034f620u;
        r3 = tc_call(0x80040cd8u, &a);
        f1 = tc_lastf();
        r30 = r3;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x817fdfb8u;
        a.r[1] = r3;
        a.r[2] = r31;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 2u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80234db8u, &a);
        (void)tc_call(0x8003ce24u, &a);
        for (;;) {
            a.r[0] = 1u;
            (void)tc_call(0x8003cdc0u, &a);
            a.r[0] = 0x817fdfb8u;
            r3 = tc_call(0x80036be0u, &a);
            if (r3 == 0u) break;
            (void)tc_call(0x8003ce24u, &a);
        }
        a.r[0] = 0x817fdfb8u;
        (void)tc_call(0x80234b88u, &a);
        a.r[0] = r30;
        (void)tc_call(0x80036828u, &a);
        r3 = r30;
    } else {
        r3 = 0u;
    }
    return r3;
}
