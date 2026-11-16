#include "tc_rt.h"

void fn_80051aa8(void)
{
    TcArgs a = {0};
    (void)tc_call(0x80052500u, &a);
    (void)tc_call(0x8005263cu, &a);
    (void)tc_call(0x800520acu, &a);
    (void)tc_call(0x800528d0u, &a);
    (void)tc_call(0x80052cacu, &a);
    (void)tc_call(0x80052e50u, &a);
    wr32(0x803d18b0u, 0u);
    return;
}
