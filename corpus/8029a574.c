#include "tc_rt.h"

u32 fn_8029a574(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = 0x8053f1acu;
    do {
        a.r[0] = r30 + 0x28u;
        a.r[1] = param_1;
        a.r[2] = 6u;
        r3 = tc_call(0x802592d8u, &a);
        if (r3 == 0u && (u32)rd16(r30 + 8u) == 4u) {
            r3 = 1u;
            return r3;
        }
        r31 = r31 + 1u;
        r30 = r30 + 0x34u;
    } while (r31 < 3u);
    r3 = 0u;
    return r3;
}
