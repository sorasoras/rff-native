#include "tc_rt.h"

u32 fn_8011dfdc(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x804bc3b0u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        r3 = tc_call(0x8011d534u, &a);
        if (((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu) == 0u) {
            a.r[0] = r31;
            r3 = tc_call(0x8011d000u, &a);
            a.r[0] = r3;
            a.r[1] = param_1;
            r3 = tc_call(0x8025beb0u, &a);
            if (r3 == 0u) {
                r3 = r31;
                return r3;
            }
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x9bcu;
    } while ((s32)r30 < 4);
    r3 = 0u;
    return r3;
}
