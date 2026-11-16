#include "tc_rt.h"

void fn_80118b64(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = 0x817fdfe8u;
    (void)tc_call(0x800a5f50u, &a);
    r3 = tc_call(0x800545e4u, &a);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = r3;
    a.r[2] = 0x392u;
    (void)tc_call(0x800a6034u, &a);
    (void)tc_call(0x80118a08u, &a);
    a.r[0] = 0x817fdfe8u;
    r3 = tc_call(0x80118a70u, &a);
    if (r3 == 0u) {
        a.r[0] = 0x817fdfe8u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x800a5f8cu, &a);
    } else {
        a.r[0] = 0x817fdfe8u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x800a5f8cu, &a);
    }
    return;
}
