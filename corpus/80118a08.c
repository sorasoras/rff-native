#include "tc_rt.h"

void fn_80118a08(void)
{
    u32 r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = 0x804bc118u;
    r29 = 0u;
    do {
        a.r[0] = r30;
        (void)tc_call(0x800a62ccu, &a);
        r29 = r29 + 1u;
        wr32(r30 + 0x14u, 0u);
        r30 = r30 + 0x18u;
    } while ((s32)r29 < 16);
    wr32(0x80571268u, 0u);
    return;
}
