#include "tc_rt.h"

s32 fn_8008df44(void)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0xffffffffu;
    f1 = tc_callf(0x80040a00u, &a);
    r0 = rd32(0x80492c58u);
    f1 = (f64)(f32)((f64)rdf32(0x80572990u) * f1);
    if ((r0 & 4u) != 0u) {
        if (!(f1 < (f64)rdf32(0x80572994u))) {
            return (s32)r31;
        }
        r31 = 3u;
    } else {
        if ((r0 & 8u) != 0u) {
            if (!(f1 < (f64)rdf32(0x80572998u))) {
                return (s32)r31;
            }
            r31 = 0x10u;
        } else {
            if ((r0 & 0x10u) != 0u) {
                if (!(f1 < (f64)rdf32(0x80572998u))) {
                    return (s32)r31;
                }
                r31 = 0x11u;
            } else {
                r0 = r0 & 0x20u;
                if (r0 != 0u) {
                    r3 = tc_call(0x80040b64u, &a);
                    r3 = r3 - (ppc_divwu(r3, 9u) * 9u);
                    r31 = r3 + 5u;
                }
            }
        }
    }
    return (s32)r31;
}
