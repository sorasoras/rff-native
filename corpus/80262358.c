#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_80262358(f64 param_1)
{
    u32 r0 = 0, r4 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f13 = 0.0;
    f1 = param_1;
    r6 = (u32)(px_f2b(param_1) >> 0x20ull);
    r4 = r6 & 0x7fffffffu;
    if ((s32)r4 < 1141899264) {
        if ((s32)r4 >= 1071382528) {
            f3 = ppc_fabs(param_1);
            if ((s32)r4 >= 1072889856) {
                if ((s32)r4 >= 1073971200) {
                    r0 = 3u;
                    f1 = px_fdiv(rdf64(0x80577238u), f3);
                } else {
                    f2 = rdf64(0x80577230u);
                    r0 = 2u;
                    f1 = f2 * f3;
                    f2 = f3 - f2;
                    f1 = px_fdiv(f2, rdf64(0x80577220u) + f1);
                }
            } else if ((s32)r4 >= 1072037888) {
                f0 = rdf64(0x80577220u);
                r0 = 1u;
                f1 = f3 - f0;
                f0 = f0 + f3;
                f1 = px_fdiv(f1, f0);
            } else {
                f0 = rdf64(0x80577228u);
                r0 = 0u;
                f2 = f0 * f3;
                f0 = f0 + f3;
                f1 = px_fdiv(f2 - rdf64(0x80577220u), f0);
            }
        } else {
            if ((s32)r4 < 1042284544 && (rdf64(0x80577218u) + param_1) > rdf64(0x80577220u)) {
                return f1;
            }
            r0 = 0xffffffffu;
        }
        f0 = f1 * f1;
        f13 = f0 * f0;
        f4 = f13 * (rdf64(0x8033da38u) + (f13 * (rdf64(0x8033da48u) + (f13 * (rdf64(0x8033da58u) + (f13 * (rdf64(0x8033da68u) + (f13 * rdf64(0x8033da78u)))))))));
        f0 = f0 * (rdf64(0x8033da30u) + (f13 * (rdf64(0x8033da40u) + (f13 * (rdf64(0x8033da50u) + (f13 * (rdf64(0x8033da60u) + (f13 * (rdf64(0x8033da70u) + (f13 * rdf64(0x8033da80u)))))))))));
        if ((s32)r0 >= 0) {
            f0 = f0 + f4;
            r0 = (r0 << 3u) & 0xfffffff8u;
            f1 = (f1 * f0) - rdf64(r0 - 0x7fcc25f0u) - f1;
            f1 = rdf64(r0 - 0x7fcc2610u) - f1;
            if ((s32)r6 < 0) {
                f1 = -f1;
            }
        } else {
            f0 = f0 + f4;
            f0 = f1 * f0;
            f1 = f1 - f0;
        }
    } else if ((s32)r4 > 2146435072 || ((r4 - 0x7ff00000u) == 0u && (u32)px_f2b(param_1) != 0u)) {
        f1 = param_1 + param_1;
    } else if ((s32)r6 <= 0) {
        f1 = -rdf64(0x8033da08u) - rdf64(0x8033da28u);
    } else {
        f1 = rdf64(0x8033da08u) + rdf64(0x8033da28u);
    }
    return f1;
}
