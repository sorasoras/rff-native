#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80069bb8(s32 param_1)
{
    u32 c0gt = 0, r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32((u32)param_1 + 0x9e4u) == 0u) {
        f1 = (f64)rdf32(0x80572678u);
        f0 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32((u32)param_1 + 0x99cu) - (f64)rdf32((u32)param_1 + 0x9c8u)));
        r0 = (ppc_cntlzw(((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1fu) & 1u) >> 5u) & 0x7ffffffu;
        if (r0 == 0u) {
            f0 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32((u32)param_1 + 0x9a0u) - (f64)rdf32((u32)param_1 + 0x9ccu)));
            r0 = (ppc_cntlzw(((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1fu) & 1u) >> 5u) & 0x7ffffffu;
        }
        if (r0 == 0u) {
            f0 = (f64)rdf32(0x80572678u);
            f1 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32((u32)param_1 + 0x9a4u) - (f64)rdf32((u32)param_1 + 0x9d0u)));
            r0 = (ppc_cntlzw(((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u) >> 5u) & 0x7ffffffu;
        }
        if (r0 != 0u) {
            f2 = (f64)rdf32((u32)param_1 + 0x9c0u);
            f1 = (f64)rdf32((u32)param_1 + 0x9c4u);
            f0 = (f64)rdf32(0x8057267cu);
            wrf32d((u32)param_1 + 0x9d4u, (f64)rdf32((u32)param_1 + 0x9bcu));
            wrf32d((u32)param_1 + 0x9d8u, f2);
            wrf32d((u32)param_1 + 0x9dcu, f1);
            wrf32d((u32)param_1 + 0x9e0u, f0);
        }
        f4 = (f64)rdf32((u32)param_1 + 0x99cu);
        f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x9e0u) - (f64)rdf32(0x805725e0u));
        f3 = (f64)rdf32((u32)param_1 + 0x9a0u);
        f2 = (f64)rdf32((u32)param_1 + 0x9a4u);
        c0gt = f1 > (f64)rdf32(0x805725d8u);
        wrf32d((u32)param_1 + 0x9c8u, f4);
        wrf32d((u32)param_1 + 0x9ccu, f3);
        wrf32d((u32)param_1 + 0x9d0u, f2);
        wrf32d((u32)param_1 + 0x9e0u, f1);
        if (c0gt) {
            r0 = rd32((u32)param_1 + 0x9ccu);
            wr32(0x817fdfecu, rd32((u32)param_1 + 0x9c8u));
            wr32(0x817fdff0u, r0);
            wr32(0x817fdff4u, rd32((u32)param_1 + 0x9d0u));
            a.r[0] = 0x817fdfecu;
            a.r[1] = (u32)param_1 + 0x9d4u;
            a.r[2] = 0x817fdfecu;
            (void)tc_call(0x802343a4u, &a);
            f1 = (f64)rdf32(0x8057267cu);
            wrf32d(0x817fdff0u, (f64)rdf32(0x805725d8u));
            f1 = (f64)(f32)px_fdiv((f64)rdf32((u32)param_1 + 0x9e0u), f1);
            f1 = (f64)(f32)((f64)rdf32(0x805725e0u) - f1);
            a.f[0] = f1;
            a.r[0] = 0x817fdfecu;
            a.r[1] = 0x817fdfecu;
            (void)tc_call(0x802343c8u, &a);
            r0 = rd32((u32)param_1 + 0x9d8u);
            wr32(0x817fdfd4u, rd32((u32)param_1 + 0x9d4u));
            wr32(0x817fdfd8u, r0);
            wr32(0x817fdfdcu, rd32((u32)param_1 + 0x9dcu));
            a.r[0] = 0x817fdfd4u;
            a.r[1] = 0x817fdfecu;
            a.r[2] = 0x817fdfd4u;
            (void)tc_call(0x80234380u, &a);
            f0 = (f64)rdf32(0x805725d8u);
            wrf32d((u32)param_1 + 0x9bcu, (f64)rdf32(0x817fdfd4u));
            wrf32d((u32)param_1 + 0x9c0u, (f64)rdf32(0x817fdfd8u));
            wrf32d((u32)param_1 + 0x9c4u, (f64)rdf32(0x817fdfdcu));
            wrf32d((u32)param_1 + 0x9e0u, f0);
            return;
        }
        wrf32d((u32)param_1 + 0x9bcu, f4);
        wrf32d((u32)param_1 + 0x9c0u, f3);
        wrf32d((u32)param_1 + 0x9c4u, f2);
    } else {
        f1 = (f64)rdf32(0x80572678u);
        f0 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32((u32)param_1 + 0x990u) - (f64)rdf32((u32)param_1 + 0x9c8u)));
        r0 = (ppc_cntlzw(((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1fu) & 1u) >> 5u) & 0x7ffffffu;
        if (r0 == 0u) {
            f0 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32((u32)param_1 + 0x994u) - (f64)rdf32((u32)param_1 + 0x9ccu)));
            r0 = (ppc_cntlzw(((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1fu) & 1u) >> 5u) & 0x7ffffffu;
        }
        if (r0 == 0u) {
            f0 = (f64)rdf32(0x80572678u);
            f1 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32((u32)param_1 + 0x998u) - (f64)rdf32((u32)param_1 + 0x9d0u)));
            r0 = (ppc_cntlzw(((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u) >> 5u) & 0x7ffffffu;
        }
        if (r0 != 0u) {
            f2 = (f64)rdf32((u32)param_1 + 0x9c0u);
            f1 = (f64)rdf32((u32)param_1 + 0x9c4u);
            f0 = (f64)rdf32(0x8057267cu);
            wrf32d((u32)param_1 + 0x9d4u, (f64)rdf32((u32)param_1 + 0x9bcu));
            wrf32d((u32)param_1 + 0x9d8u, f2);
            wrf32d((u32)param_1 + 0x9dcu, f1);
            wrf32d((u32)param_1 + 0x9e0u, f0);
        }
        f5 = (f64)rdf32((u32)param_1 + 0x990u);
        f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x9e0u) - (f64)rdf32(0x805725e0u));
        f4 = (f64)rdf32((u32)param_1 + 0x994u);
        f3 = (f64)rdf32((u32)param_1 + 0x998u);
        c0gt = f1 > (f64)rdf32(0x805725d8u);
        wrf32d((u32)param_1 + 0x9c8u, f5);
        wrf32d((u32)param_1 + 0x9ccu, f4);
        wrf32d((u32)param_1 + 0x9d0u, f3);
        wrf32d((u32)param_1 + 0x9e0u, f1);
        if (c0gt) {
            r0 = rd32((u32)param_1 + 0x9ccu);
            wr32(0x817fdfe0u, rd32((u32)param_1 + 0x9c8u));
            wr32(0x817fdfe4u, r0);
            wr32(0x817fdfe8u, rd32((u32)param_1 + 0x9d0u));
            a.r[0] = 0x817fdfe0u;
            a.r[1] = (u32)param_1 + 0x9d4u;
            a.r[2] = 0x817fdfe0u;
            (void)tc_call(0x802343a4u, &a);
            f1 = (f64)rdf32(0x8057267cu);
            wrf32d(0x817fdfe4u, (f64)rdf32(0x805725d8u));
            f1 = (f64)(f32)px_fdiv((f64)rdf32((u32)param_1 + 0x9e0u), f1);
            f1 = (f64)(f32)((f64)rdf32(0x805725e0u) - f1);
            a.f[0] = f1;
            a.r[0] = 0x817fdfe0u;
            a.r[1] = 0x817fdfe0u;
            (void)tc_call(0x802343c8u, &a);
            r0 = rd32((u32)param_1 + 0x9d8u);
            wr32(0x817fdfc8u, rd32((u32)param_1 + 0x9d4u));
            wr32(0x817fdfccu, r0);
            wr32(0x817fdfd0u, rd32((u32)param_1 + 0x9dcu));
            a.r[0] = 0x817fdfc8u;
            a.r[1] = 0x817fdfe0u;
            a.r[2] = 0x817fdfc8u;
            (void)tc_call(0x80234380u, &a);
            r3 = (u32)param_1 + 0x9b0u;
            f0 = (f64)rdf32(0x805725d8u);
            wrf32d((u32)param_1 + 0x9bcu, (f64)rdf32(0x817fdfc8u));
            wrf32d((u32)param_1 + 0x9c0u, (f64)rdf32(0x817fdfccu));
            wrf32d((u32)param_1 + 0x9c4u, (f64)rdf32(0x817fdfd0u));
            wrf32d((u32)param_1 + 0x9e0u, f0);
            a.r[0] = r3;
            a.r[1] = (u32)param_1 + 0x9bcu;
            a.r[2] = r3;
            (void)tc_call(0x80234380u, &a);
        } else {
            f2 = (f64)rdf32((u32)param_1 + 0x99cu);
            f1 = (f64)rdf32((u32)param_1 + 0x9a0u);
            f0 = (f64)rdf32((u32)param_1 + 0x9a4u);
            wrf32d((u32)param_1 + 0x9bcu, f5);
            wrf32d((u32)param_1 + 0x9c0u, f4);
            wrf32d((u32)param_1 + 0x9c4u, f3);
            wrf32d((u32)param_1 + 0x9b0u, f2);
            wrf32d((u32)param_1 + 0x9b4u, f1);
            wrf32d((u32)param_1 + 0x9b8u, f0);
        }
    }
    return;
}
