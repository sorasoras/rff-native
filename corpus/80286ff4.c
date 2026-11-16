#include "tc_rt.h"

u32 fn_80286ff4(void)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    (void)tc_call(0x80289ba4u, &a);
    wr32(0x80571b34u, 1u);
    r30 = 0u;
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    if ((u32)rd8(0x8050f808u) == 3u) {
        if ((u32)(s8)rd8(0x8050f7e8u) != 0u) {
            if ((u32)rd8(0x8050f10cu) == 3u) {
                (void)tc_call(0x8028ffa8u, &a);
            }
            wr8(0x8050f7e8u, 0u);
        }
        r30 = 1u;
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return r30;
}
