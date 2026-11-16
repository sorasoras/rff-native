#include "tc_rt.h"

f64 fn_80262be8(f64 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    f2 = rdf64(0x805772a0u);
    wrf64(0x817fdfe8u, param_1);
    wr32(0x817fe004u, 0x817ff000u);
    r3 = rd32(0x817fdfe8u) & 0x7fffffffu;
    if ((s32)r3 <= 1072243195) {
        a.f[0] = param_1;
        a.f[1] = f2;
        a.r[0] = 1u;
        f1 = tc_callf(0x80262100u, &a);
    } else {
        if ((s32)r3 >= 2146435072) {
            f1 = param_1 - param_1;
        } else {
            a.f[0] = param_1;
            a.r[0] = 0x817fdff0u;
            r3 = tc_call(0x8026048cu, &a);
            r3 = 1u - ((r3 << 1u) & 2u);
            a.f[0] = rdf64(0x817fdff0u);
            a.f[1] = rdf64(0x817fdff8u);
            a.r[0] = r3;
            f1 = tc_callf(0x80262100u, &a);
        }
    }
    return f1;
}
