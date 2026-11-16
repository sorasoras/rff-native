#include "tc_rt.h"

void fn_800d8144(f64 param_f1, u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    wrf32d(0x817fdfc0u, param_f1);
    wrf32d(0x817fdfc4u, param_f1);
    f3 = (f64)rdf32(param_r4 + 8u);
    f2 = (f64)rdf32(param_r4 + 4u);
    f0 = (f64)rdf32(param_r4);
    wrf32d(0x817fdfd4u, param_f1);
    wrf32d(0x817fdfd8u, param_f1);
    wrf32d(0x817fdfdcu, param_f1);
    wrf32d(0x817fdfc8u, f0);
    wrf32d(0x817fdfccu, f2);
    wrf32d(0x817fdfd0u, f3);
    r3 = tc_call(0x80311554u, &a);
    r30 = r3;
    r3 = tc_call(0x8031f650u, &a);
    a.r[0] = 0x817fdfa8u;
    a.r[1] = r3;
    a.r[2] = rd32(((param_r3 << 2u) & 0xfffffffcu) - 0x7fcaa2a0u);
    a.r[3] = 0u;
    (void)tc_call(0x8031faccu, &a);
    if (rd32(0x817fdfa8u) != 0u) {
        r3 = tc_call(0x800d7c88u, &a);
        f1 = tc_lastf();
        r29 = r3;
        if (r3 != 0u) {
            r31 = rd32(0x817fdfa8u);
            r4 = 1u;
            r5 = 1u;
            r6 = 1u;
            r10 = r31 & 0xff000000u;
            r7 = 1u;
            r8 = 1u;
            r9 = 1u;
            if ((r10 - 0x80000000u) != 0u && ((r31 & 0xff800000u) + 0x7f000000u) != 0u) {
                r9 = 0u;
            }
            if (r9 == 0u && ((r31 & 0xf8000000u) + 0x70000000u) != 0u) {
                r8 = 0u;
            }
            if (r8 == 0u && (r10 + 0x40000000u) != 0u) {
                r7 = 0u;
            }
            if (r7 == 0u && ((r31 & 0xff800000u) + 0x3f000000u) != 0u) {
                r6 = 0u;
            }
            if (r6 == 0u && ((r31 & 0xf8000000u) + 0x30000000u) != 0u) {
                r5 = 0u;
            }
            if (r5 == 0u && ((r31 & 0xffffc000u) + 0x20000000u) != 0u) {
                r4 = 0u;
            }
            if (r4 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803568fcu;
                a.r[1] = 0x5fu;
                a.r[2] = 0x803568c8u;
                a.r[3] = r31;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                (void)tc_call(0x802e41c0u, &a);
            }
            a.r[0] = r30;
            a.r[1] = r31;
            a.r[2] = 0u;
            a.r[3] = 0u;
            r3 = tc_call(0x80311714u, &a);
            a.r[0] = 0x817fdfb8u;
            a.r[1] = r3;
            (void)tc_call(0x80320fa8u, &a);
            a.r[0] = 0x817fdfb8u;
            r3 = tc_call(0x80321010u, &a);
            if (r3 == 0u) {
                return;
            }
            a.r[0] = 0x817fdfb8u;
            r3 = tc_call(0x80321010u, &a);
            a.r[0] = r3;
            a.r[1] = 0x800d83acu;
            a.r[2] = 0x817fdfc0u;
            a.r[3] = 1u;
            (void)tc_call(0x80311200u, &a);
            a.r[0] = 0x817fdfb8u;
            r3 = tc_call(0x80321010u, &a);
            a.r[0] = r3;
            r3 = tc_call(0x803111f8u, &a);
            f1 = (f64)rdf32(0x817fdfd8u);
            wrf32d(r3 + 0x9cu, (f64)rdf32(0x817fdfd4u));
            f0 = (f64)rdf32(0x817fdfdcu);
            wrf32d(r3 + 0xa0u, f1);
            wrf32d(r3 + 0xa4u, f0);
            a.r[0] = r3;
            (void)tc_call(0x80313cecu, &a);
            a.r[0] = 0x817fdfb8u;
            r3 = tc_call(0x80321010u, &a);
            a.r[0] = r3;
            r3 = tc_call(0x803111f8u, &a);
            f1 = (f64)rdf32(0x817fdfccu);
            wrf32d(r3 + 0x90u, (f64)rdf32(0x817fdfc8u));
            f0 = (f64)rdf32(0x817fdfd0u);
            wrf32d(r3 + 0x94u, f1);
            wrf32d(r3 + 0x98u, f0);
            a.r[0] = r3;
            (void)tc_call(0x80313cecu, &a);
            a.r[0] = 0x817fdfb0u;
            a.r[1] = 0x817fdfb8u;
            (void)tc_call(0x80320f94u, &a);
            a.r[0] = r29;
            a.r[1] = 0x817fdfb0u;
            a.r[2] = param_r3;
            a.r[3] = param_r4;
            (void)tc_call(0x800d83c0u, &a);
        }
    }
    return;
}
