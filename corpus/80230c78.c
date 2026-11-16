#include "tc_rt.h"

void fn_80230c78(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = tc_argr(0u);
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr16(0xcc002002u, 0u);
    if (rd32(0x80571524u) == 0u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x803869a8u;
        a.r[1] = 0x17cu;
        a.r[2] = 0x803869ecu;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        r3 = tc_call(0x802285e4u, &a);
        f1 = tc_lastf();
    }
    a.r[0] = rd32(0x80571528u);
    a.r[1] = 0x2001u;
    a.r[2] = 0x804e0ca0u;
    a.r[3] = 0x20u;
    a.r[4] = 0x804e0cc0u;
    a.r[5] = 0x20u;
    r3 = tc_call(0x8026fea8u, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x80227824u, &a);
    f1 = tc_lastf();
    for (;;) {
    }
}
