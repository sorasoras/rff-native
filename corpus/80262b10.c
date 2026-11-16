#include "tc_rt.h"

f64 fn_80262b10(f64 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    f2 = rdf64(0x80577298u);
    wrf64(0x817fdfe8u, param_1);
    wr32(0x817fe004u, 0x817ff000u);
    r3 = rd32(0x817fdfe8u) & 0x7fffffffu;
    if ((s32)r3 > 1072243195) {
        if ((s32)r3 < 2146435072) {
            a.f[0] = param_1;
            a.r[0] = 0x817fdff0u;
            r3 = tc_call(0x8026048cu, &a);
            r0 = r3 & 3u;
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                a.f[0] = rdf64(0x817fdff0u);
                a.f[1] = rdf64(0x817fdff8u);
                f1 = tc_callf(0x80260824u, &a);
            } else {
                if (!c0lt) {
                    if ((s32)r0 < 3) {
                        a.f[0] = rdf64(0x817fdff0u);
                        a.f[1] = rdf64(0x817fdff8u);
                        a.r[0] = 1u;
                        f1 = tc_callf(0x80262040u, &a);
                        f1 = -f1;
                        return f1;
                    }
                } else if ((s32)r0 >= 0) {
                    a.f[0] = rdf64(0x817fdff0u);
                    a.f[1] = rdf64(0x817fdff8u);
                    a.r[0] = 1u;
                    f1 = tc_callf(0x80262040u, &a);
                    return f1;
                }
                a.f[0] = rdf64(0x817fdff0u);
                a.f[1] = rdf64(0x817fdff8u);
                f1 = tc_callf(0x80260824u, &a);
                f1 = -f1;
            }
        } else {
            f1 = param_1 - param_1;
        }
    } else {
        a.f[0] = param_1;
        a.f[1] = f2;
        a.r[0] = 0u;
        f1 = tc_callf(0x80262040u, &a);
    }
    return f1;
}
