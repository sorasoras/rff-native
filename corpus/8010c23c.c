#include "tc_rt.h"

void fn_8010c23c(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 0xffffffffu;
    r3 = tc_call(0x8010b954u, &a);
    if (r3 == 0u) {
        r3 = tc_call(0x800a7460u, &a);
        r31 = r3;
        if (r3 == 5u) {
            a.r[0] = 2u;
            (void)tc_call(0x800a79fcu, &a);
        }
        a.r[0] = 0xffffffffu;
        a.r[1] = 0xffffffffu;
        r3 = tc_call(0x800a74e4u, &a);
        if ((s32)r3 >= 0) {
            a.r[0] = 4u;
            (void)tc_call(0x800a79b4u, &a);
        }
        a.r[0] = r31;
        a.r[1] = 0xffffffffu;
        a.r[2] = 0xffffffffu;
        r3 = tc_call(0x800a7e80u, &a);
        if (r3 != 0u) {
            a.r[0] = 5u;
            (void)tc_call(0x800a79b4u, &a);
        }
        a.r[0] = 1u;
        (void)tc_call(0x800a79b4u, &a);
    }
    return;
}
