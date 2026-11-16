#include "tc_rt.h"

void fn_8004f594(void)
{
    u32 r5 = 0;
    TcArgs a = {0};
    (void)tc_call(0x8004f8d8u, &a);
    r5 = rd32(0x803c6a88u);
    wr32(0x803c6a30u, 0u);
    wr32(0x8057108cu, r5);
    wr32(0x803c6a50u, 0u);
    wr32(0x803c6a34u, 0u);
    wr32(0x803c6a54u, 0u);
    wr32(0x803c6a38u, 0u);
    wr32(0x803c6a58u, 0u);
    wr32(0x803c6a3cu, 0u);
    wr32(0x803c6a5cu, 0u);
    wr32(0x803c6a40u, 0u);
    wr32(0x803c6a60u, 0u);
    wr32(0x803c6a44u, 0u);
    wr32(0x803c6a64u, 0u);
    wr32(0x803c6a48u, 0u);
    wr32(0x803c6a68u, 0u);
    wr32(0x803c6a4cu, 0u);
    wr32(0x803c6a6cu, 0u);
    return;
}
