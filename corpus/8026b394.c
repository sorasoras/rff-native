#include "tc_rt.h"

s32 fn_8026b394(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdaf0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x8026b9e8u, &a);
    r31 = r3;
    if ((s32)r3 <= 0) {
        r3 = 0u;
    } else {
        a.r[0] = 0x817fdaf8u;
        a.r[1] = r3;
        r3 = tc_call(0x8026ba8cu, &a);
        if (r3 == 0u) {
            a.r[0] = 0x805031b0u;
            a.r[1] = 0x817fdaf8u;
            a.r[2] = r31;
            (void)tc_call(0x8026b738u, &a);
            r3 = r31;
        } else {
            r3 = 0xffffd8e7u;
        }
    }
    return (s32)r3;
}
