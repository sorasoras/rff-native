#include "tc_rt.h"

u32 fn_80267310(void)
{
    u32 c0lt = 0, r3 = 0, r6 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x80268f7cu, &a);
    c0lt = (s32)r3 < 1796;
    if (r3 == 0x704u) {
        r31 = 0x21u;
    } else if (!c0lt) {
        c0lt = (s32)r3 < 1798;
        if (r3 == 0x706u) {
            r31 = 0x20u;
        } else if (!c0lt) {
            r31 = 1u;
        } else {
            r31 = 0x22u;
        }
    } else if (r3 == 0u) {
        r31 = 0u;
    } else {
        r31 = 1u;
    }
    a.r[0] = 0x817fdfb8u;
    a.r[1] = 0u;
    a.r[2] = 0x40u;
    (void)tc_call(0x8000446cu, &a);
    r7 = rd32(0x80502708u);
    wr8(0x817fdfbcu, 0x80u);
    r6 = r7 + 1u;
    wr32(0x817fdfc4u, r7);
    wr32(0x80502708u, r6);
    wr32(0x817fdfb8u, 0x40u);
    wr8(0x817fdfc0u, (u8)r31);
    wr32(0x80502708u, r6 + 1u);
    wr32(0x817fdfc4u, r6);
    (void)tc_call(0x8026af8cu, &a);
    return 0u;
}
