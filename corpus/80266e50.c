#include "tc_rt.h"

u32 fn_80266e50(void)
{
    u32 r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = 0x80500d40u;
    r29 = 0u;
    do {
        (void)tc_call(0x802689e4u, &a);
        (void)tc_call(0x802689dcu, &a);
        wr32(r30 + 4u, 0u);
        (void)tc_call(0x802689d4u, &a);
        r29 = r29 + 1u;
        r30 = r30 + 0x890u;
    } while ((s32)r29 < 3);
    return 0u;
}
