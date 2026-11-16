#include "tc_rt.h"

void fn_8011e068(u32 param_1)
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
                a.r[0] = r31 + 0x9a8u;
                (void)tc_call(0x800a62ccu, &a);
                a.r[0] = r31;
                (void)tc_call(0x8011ca88u, &a);
                return;
            }
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x9bcu;
    } while ((s32)r30 < 4);
    return;
}
