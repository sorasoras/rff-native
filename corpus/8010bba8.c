#include "tc_rt.h"

u32 fn_8010bba8(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)tc_call(0x800a7460u, &a);
    a.r[0] = 0xffffffffu;
    r3 = tc_call(0x8010b914u, &a);
    if (r3 == 0u) {
        a.r[0] = 1u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x8010b91cu, &a);
        a.r[0] = 1u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x8010b99cu, &a);
        a.r[0] = 1u;
        a.r[1] = 0xfu;
        r3 = tc_call(0x800a6d5cu, &a);
        if (r3 != 0u) {
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
