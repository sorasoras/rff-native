#include "tc_rt.h"

u32 fn_802c2950(u32 param_1, u32 param_2)
{
    u32 r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(param_1 + 4u, param_2);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0x238u, 0u);
    wr32(param_1 + 0x250u, 0u);
    a.r[0] = param_1 + 0x258u;
    (void)tc_call(0x802cc510u, &a);
    wr32(param_1 + 0x454u, 0u);
    r29 = 0u;
    r30 = 0u;
    wr32(param_1 + 0x458u, 0x1eu);
    wr32(param_1 + 0x45cu, 0u);
    wr8(param_1 + 0x461u, 0u);
    wr8(param_1 + 0x462u, 0u);
    wr8(param_1 + 0x463u, 0u);
    wr8(param_1 + 0x460u, 1u);
    wr32(param_1 + 0x618u, 1u);
    wr32(param_1 + 0x14u, 2u);
    wr32(param_1 + 0xb8u, 0xffffffffu);
    wr32(param_1 + 0x18u, 0xffffffffu);
    wr32(param_1 + 0x1cu, 0u);
    wr32(param_1, 0u);
    wr32(param_1 + 0x68u, 0u);
    wr8(param_1 + 0x8eu, 0u);
    wr32(param_1 + 0x6cu, 0u);
    wr32(param_1 + 0x70u, 0u);
    wr32(param_1 + 0x74u, 0u);
    wr32(param_1 + 0x78u, 0u);
    wr8(param_1 + 0x8fu, 0u);
    wr8(param_1 + 0x90u, 0u);
    wr8(param_1 + 0x97u, 0u);
    do {
        a.r[0] = param_1 + r30 + 0x468u;
        (void)tc_call(0x8022671cu, &a);
        a.r[0] = param_1 + r30 + 0x528u;
        (void)tc_call(0x8022671cu, &a);
        r29 = r29 + 1u;
        r30 = r30 + 0x30u;
    } while ((s32)r29 < 4);
    a.r[0] = param_1 + 0x5e8u;
    (void)tc_call(0x8022671cu, &a);
    a.r[0] = 0x80547498u;
    (void)tc_call(0x8022d534u, &a);
    return param_1;
}
