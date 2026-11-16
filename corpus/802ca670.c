#include "tc_rt.h"

u32 fn_802ca670(f64 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    if ((u32)param_3 != 1u) {
        f0 = (f64)rdf32(param_2);
        if (!((param_1 < f0) || (param_1 == f0))) {
            r5 = param_2 + (((u32)param_3 << 3u) & 0xfffffff8u);
            f0 = (f64)rdf32(r5 - 8u);
            if (!((param_1 > f0) || (param_1 == f0))) {
                r5 = (u32)param_3 - 1u;
                r6 = 0u;
                while (r6 != (r5 - 1u) && r6 != r5) {
                    r4 = r6 + r5;
                    r4 = ((r4 >> 0x1fu) & 1u) + r4;
                    f0 = (f64)rdf32(param_2 + ((r4 << 2u) & 0xfffffff8u));
                    r4 = (u32)((s32)r4 >> 1);
                    r0 = ((((param_1 < f0) << 0x1fu) | ((param_1 > f0) << 0x1eu) | ((param_1 == f0) << 0x1du) | (((param_1 != param_1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                    if (r0 != 0u) {
                        r5 = r4;
                    }
                    if (r0 == 0u) {
                        r6 = r4;
                    }
                }
                r5 = (r5 << 3u) & 0xfffffff8u;
                r0 = 0u;
                f1 = (f64)(f32)(param_1 - (f64)rdf32(param_2 + r5));
                if ((f64)rdf32(0x803489e8u) < f1 && f1 < (f64)rdf32(0x803489ecu)) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    return (u32)rd16(param_2 + ((r6 << 3u) & 0xfffffff8u) + 4u);
                }
                return (u32)rd16(param_2 + r5 + 4u);
            }
            return (u32)rd16(r5 - 4u);
        }
    }
    return (u32)rd16(param_2 + 4u);
}
