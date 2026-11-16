#include "tc_rt.h"

void fn_802dc0f8(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x802431e0u, &a);
    if (r3 != 0u && rd32(0x805480e0u) == 0u) {
        wr32(0x80547c1cu, 0x80547c20u);
        wr32(0x80547c28u, 0u);
        wr32(rd32(0x80547c1cu) + 0x54u, 0u);
        wr32(rd32(0x80547c1cu) + 0xa0u, 0u);
        wr32(rd32(0x80547c1cu) + 0xecu, 0u);
        wr32(rd32(0x80547c1cu) + 0x138u, 0u);
        wr32(rd32(0x80547c1cu) + 0x184u, 0u);
        wr32(rd32(0x80547c1cu) + 0x1d0u, 0u);
        wr32(rd32(0x80547c1cu) + 0x21cu, 0u);
        wr32(rd32(0x80547c1cu) + 0x268u, 0u);
        wr32(rd32(0x80547c1cu) + 0x2b4u, 0u);
        wr32(rd32(0x80547c1cu) + 0x300u, 0u);
        wr32(rd32(0x80547c1cu) + 0x34cu, 0u);
        wr32(rd32(0x80547c1cu) + 0x398u, 0u);
        wr32(rd32(0x80547c1cu) + 0x3e4u, 0u);
        wr32(rd32(0x80547c1cu) + 0x430u, 0u);
        wr32(rd32(0x80547c1cu) + 0x47cu, 0u);
        wr32(0x80547c18u, 0u);
        wr32(0x805480e0u, 1u);
    }
    return;
}
