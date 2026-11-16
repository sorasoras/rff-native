#include "tc_rt.h"

void fn_8003dc84(void)
{
    u32 r3 = tc_argr(0u);
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r3 = tc_call(0x8003cd10u, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x8003dba4u, &a);
    f1 = tc_lastf();
    for (;;) {
        a.r[0] = 1u;
        r3 = tc_call(0x8003cdc0u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x8003dba8u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x8003dba0u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x8003ce24u, &a);
        f1 = tc_lastf();
    }
}
