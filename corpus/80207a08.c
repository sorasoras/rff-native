#include "tc_rt.h"

u32 fn_80207a08(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(rd32(0x80571398u) + 0xe4u);
    if (r31 != 0x21u) {
        r3 = (u32)rd8((r31 * 0x38u) - 0x7fb64fcbu);
        if (r31 != (u32)rd8(0x8049912au)) {
            if (r31 == 0xcu || r31 == 0xdu) {
                a.r[0] = 0x2038u;
                r3 = tc_call(0x8014d9a4u, &a);
                if (r3 != 0u) {
                    r31 = r31 + 0x29u;
                }
            } else if (r31 != 7u) {
                if (r31 != 0x1eu) {
                    if (r31 == 0x1fu) {
                        r31 = r3 + 0x42u;
                    }
                } else {
                    r31 = r3 + 0x3fu;
                }
            } else {
                r31 = r3 + 0x3cu;
            }
        } else {
            r31 = r31 + 0x27u;
        }
        a.r[0] = 0xcu;
        a.r[1] = r31;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        a.r[0] = param_1;
        a.r[1] = r3;
        a.r[2] = 0u;
        (void)tc_call(0x801006a4u, &a);
    }
    return 1u;
}
