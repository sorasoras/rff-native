#include "tc_rt.h"

void fn_8010f67c(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r3 = tc_call(0x800a7460u, &a);
    r30 = r3;
    r29 = 0u;
    a.r[0] = 0xffffffffu;
    a.r[1] = 0xffffffffu;
    (void)tc_call(0x800a74e4u, &a);
    a.r[0] = 0xffffffffu;
    a.r[1] = 0xffffffffu;
    (void)tc_call(0x800a7528u, &a);
    a.r[0] = r30;
    a.r[1] = 0xffffffffu;
    a.r[2] = 0xffffffffu;
    r3 = tc_call(0x800a7e80u, &a);
    r31 = r3;
    a.r[0] = r30;
    a.r[1] = 6u;
    a.r[2] = 1u;
    (void)tc_call(0x8014dadcu, &a);
    c0lt = param_2 < 100001;
    do {
        if ((u32)param_2 != 0x186a1u) {
            if (c0lt) {
                if (param_2 >= 100000) {
                    a.r[0] = r30;
                    a.r[1] = 5u;
                    r3 = tc_call(0x8014da9cu, &a);
                    if (r3 != 0u) {
                        r31 = 3u;
                        r29 = 1u;
                    } else if (r31 == 0u) {
                        r31 = 9u;
                        r29 = 9u;
                    } else {
                        r31 = 0xbu;
                        r29 = 0xbu;
                    }
                    a.r[0] = r30;
                    a.r[1] = 5u;
                    a.r[2] = 1u;
                    (void)tc_call(0x8014dadcu, &a);
                    break;
                }
                r31 = 1u;
                break;
            }
            c0lt = param_2 < 100004;
            if ((u32)param_2 != 0x186a4u) {
                if (!c0lt) {
                    r31 = 1u;
                    break;
                }
                r31 = 0xfffffffeu;
                r29 = 0xffffffffu;
                break;
            }
        }
        a.r[0] = r30;
        a.r[1] = 4u;
        r3 = tc_call(0x8014da9cu, &a);
        if (r3 != 0u) {
            r31 = 2u;
        } else if (r31 == 0u) {
            r31 = 3u;
            r29 = 2u;
        } else {
            r31 = 7u;
            r29 = 6u;
        }
        a.r[0] = r30;
        a.r[1] = 4u;
        a.r[2] = 1u;
        (void)tc_call(0x8014dadcu, &a);
    } while (0);
    a.r[0] = r31;
    (void)tc_call(0x800a79b4u, &a);
    a.r[0] = r29;
    (void)tc_call(0x800a79fcu, &a);
    return;
}
