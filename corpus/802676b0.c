#include "tc_rt.h"

u32 fn_802676b0(void)
{
    u32 r3 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r3 = tc_call(0x80268fa4u, &a);
    if (r3 == 0u) {
        a.r[0] = 0x817fdfb8u;
        a.r[1] = 0u;
        a.r[2] = 0x40u;
        (void)tc_call(0x8000446cu, &a);
        r8 = rd32(0x80502708u);
        wr8(0x817fdfbcu, 0x80u);
        r7 = r8 + 1u;
        wr32(0x817fdfc4u, r8);
        wr32(0x80502708u, r7);
        wr32(0x817fdfb8u, 0x40u);
        wr8(0x817fdfc0u, 0x16u);
        wr32(0x80502708u, r7 + 1u);
        wr32(0x817fdfc4u, r7);
        (void)tc_call(0x8026af8cu, &a);
        r3 = 0u;
    } else {
        a.r[0] = 0x817fdf78u;
        a.r[1] = 0u;
        a.r[2] = 0x40u;
        (void)tc_call(0x8000446cu, &a);
        r8 = rd32(0x80502708u);
        wr8(0x817fdf7cu, 0x80u);
        r7 = r8 + 1u;
        wr32(0x817fdf84u, r8);
        wr32(0x80502708u, r7);
        wr32(0x817fdf78u, 0x40u);
        wr8(0x817fdf80u, 0u);
        wr32(0x80502708u, r7 + 1u);
        wr32(0x817fdf84u, r7);
        (void)tc_call(0x8026af8cu, &a);
        r3 = tc_call(0x8026b2d8u, &a);
    }
    return r3;
}
