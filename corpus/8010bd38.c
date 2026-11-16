#include "tc_rt.h"

void fn_8010bd38(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800a7854u, &a);
    if (r3 != 0u) {
        a.r[0] = 2u;
        r3 = tc_call(0x8013c7fcu, &a);
        if (r3 == 0x288u) {
            r3 = tc_call(0x800a7460u, &a);
            r31 = r3;
            a.r[0] = r3;
            a.r[1] = 0xbu;
            a.r[2] = 2u;
            (void)tc_call(0x8014dadcu, &a);
            if (r31 == 0xbu) {
                a.r[0] = 0x18u;
                a.r[1] = 0xbu;
                a.r[2] = 2u;
                (void)tc_call(0x8014dadcu, &a);
            }
        }
    }
    return;
}
