#include "tc_rt.h"

u32 fn_8010bda4(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0xffffffffu;
    a.r[1] = 0xffffffffu;
    r3 = tc_call(0x800a74e4u, &a);
    if ((s32)r3 >= 0) {
        a.r[0] = 1u;
        a.r[1] = 0x13u;
        a.r[2] = r3 + 0xau;
        r3 = tc_call(0x800a6dccu, &a);
        if (r3 != 0u) {
            (void)tc_call(0x8010bd38u, &a);
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
