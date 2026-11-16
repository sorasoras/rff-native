#include "tc_rt.h"

void fn_80183794(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x804d9028u;
    (void)tc_call(0x80183190u, &a);
    a.r[0] = 0x804d9028u;
    a.r[1] = param_1;
    (void)tc_call(0x80183374u, &a);
    a.r[0] = 0x804d9028u;
    a.r[1] = param_1;
    r3 = tc_call(0x8018359cu, &a);
    wr16(param_2, (u16)r3);
    wr8(param_2 + 2u, 1u);
    a.r[0] = 0x804d9028u;
    a.r[1] = param_1;
    r3 = tc_call(0x801835d4u, &a);
    wr8(param_2 + 3u, (u8)r3);
    a.r[0] = 0x804d9028u;
    (void)tc_call(0x801831a4u, &a);
    return;
}
