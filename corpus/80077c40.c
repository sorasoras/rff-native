#include "tc_rt.h"

void fn_80077c40(void)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    r0 = rd32(r3 + 4u);
    r31 = 0x80488d80u;
    r30 = 0u;
    wr32(0x817fdfe8u, rd32(r3));
    wr32(0x817fdfecu, r0);
    wr32(0x817fdff0u, rd32(r3 + 8u));
    do {
        if (rd32(r31 + 4u) != 0u) {
            a.r[0] = r31;
            a.r[1] = 0x817fdfe8u;
            r3 = tc_call(0x801a6498u, &a);
            if (r3 != 0u) {
                a.r[0] = (r30 * 0x1cu) - 0x7fb77280u;
                (void)tc_call(0x801a6424u, &a);
                return;
            }
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x1cu;
    } while (r30 < 0x1eu);
    return;
}
