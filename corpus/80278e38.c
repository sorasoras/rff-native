#include "tc_rt.h"

void fn_80278e38(void)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = (u32)rd8(0x80571ad0u);
    wr32(0x80571ae0u, 1u);
    if (r0 == 0u) {
        a.r[0] = 0x8038fb30u;
        (void)tc_call(0x8022d8b8u, &a);
        wr8(0x80571ad0u, 1u);
    }
    r3 = tc_call(0x802869b8u, &a);
    if (r3 != 0u) {
        wr32(0x80571ae8u, 0u);
        wr32(0x80570db4u, 0xffffffffu);
        wr32(0x80571ae4u, 0x32u);
        (void)tc_call(0x80278c28u, &a);
    }
    return;
}
