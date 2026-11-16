#include "tc_rt.h"

u32 fn_8010bcc0(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800a7460u, &a);
    a.r[0] = r3;
    a.r[1] = 7u;
    r3 = tc_call(0x8014da9cu, &a);
    if (r3 != 0u) {
        r3 = 0u;
    } else {
        a.r[0] = 0xe002u;
        r3 = tc_call(0x8014d9a4u, &a);
        a.r[0] = 1u;
        a.r[1] = 0x12u;
        a.r[2] = r3;
        r3 = tc_call(0x800a6dccu, &a);
        if (r3 != 0u) {
            r3 = tc_call(0x800a7460u, &a);
            a.r[0] = r3;
            a.r[1] = 7u;
            a.r[2] = 3u;
            (void)tc_call(0x8014dadcu, &a);
            r3 = 1u;
        } else {
            r3 = 0u;
        }
    }
    return r3;
}
