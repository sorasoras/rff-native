#include "tc_rt.h"

u32 fn_80076f00(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(0x80571148u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x14u), &a);
        if (r3 == 0u) {
            (void)tc_call(0x80076d88u, &a);
            r3 = 0u;
            return r3;
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
