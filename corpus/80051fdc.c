#include "tc_rt.h"

void fn_80051fdc(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80059e38u, &a);
    if (r3 != 0u) {
        if ((param_1 & 0x10u) != 0u) {
            (void)tc_call(0x80052cf8u, &a);
        }
        if ((param_1 & 0x20u) != 0u) {
            (void)tc_call(0x80052e5cu, &a);
        }
        if ((param_1 & 0x40u) != 0u) {
            (void)tc_call(0x80052df8u, &a);
        }
        if ((param_1 & 1u) != 0u) {
            (void)tc_call(0x800520dcu, &a);
        }
        if ((param_1 & 8u) != 0u) {
            (void)tc_call(0x80052728u, &a);
        }
    }
    return;
}
