#include "tc_rt.h"

void fn_80050b58(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    f1 = (f64)rdf32(0x80572264u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r5 = (u32)rd8(0x80572261u);
    r4 = (u32)rd8(0x80572262u);
    r0 = (u32)rd8(0x80572263u);
    wr8(0x817fdfe8u, rd8(0x80572260u));
    wr8(0x817fdfe9u, (u8)r5);
    wr8(0x817fdfeau, (u8)r4);
    wr8(0x817fdfebu, (u8)r0);
    a.f[0] = f1;
    a.r[0] = 0x817fdfe8u;
    (void)tc_call(0x80051e9cu, &a);
    a.r[0] = 1u;
    (void)tc_call(0x8003cdc0u, &a);
    r3 = tc_call(0x80037910u, &a);
    if (r3 <= 2u) {
        (void)tc_call(0x800a8474u, &a);
        if ((u32)param_1 != 0u) {
            (void)tc_call(0x80035bd4u, &a);
            a.r[0] = 0x803c81f0u;
            (void)tc_call(0x801dbe40u, &a);
        }
        a.r[0] = 0x804b9da0u;
        (void)tc_call(0x8010b258u, &a);
        if ((u32)param_1 != 0u) {
            a.r[0] = 2u;
            (void)tc_call(0x80051fdcu, &a);
            a.r[0] = 2u;
            (void)tc_call(0x80051b20u, &a);
        }
    }
    (void)tc_call(0x8003ce24u, &a);
    return;
}
