#include "tc_rt.h"

void fn_802a87a8(void)
{
    TcArgs a = {0};
    a.r[0] = 0x80540a20u;
    a.r[1] = 0u;
    a.r[2] = 0x7e8u;
    (void)tc_call(0x8000443cu, &a);
    wr32(0x80540ba0u, 0x80540c14u);
    wr32(0x80540c1cu, 0x80540c90u);
    wr32(0x80540c98u, 0x80540d0cu);
    wr32(0x80540d14u, 0x80540d88u);
    wr32(0x80540d90u, 0x80540e04u);
    wr32(0x80540e0cu, 0x80540e80u);
    wr32(0x80540e88u, 0x80540efcu);
    wr32(0x80540f04u, 0x80540f78u);
    wr32(0x80540f80u, 0x80540ff4u);
    wr32(0x805411d0u, 0x80540b98u);
    wr32(0x805411d4u, 0x80540ff4u);
    wr8(0x80540a21u, 0u);
    wr16(0x805411dau, 2u);
    wr8(0x80540a20u, 0u);
    return;
}
