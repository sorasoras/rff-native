#include "tc_rt.h"

void fn_8026add4(void)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80266524u, &a);
    f1 = tc_lastf();
    wr32(0x80502c98u, r3);
    if (r3 == 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802664d8u, &a);
        (void)tc_call(0x802661b8u, &a);
    }
    r3 = tc_call(0x80266500u, &a);
    wr32(0x80502c98u, r3);
    return;
}
