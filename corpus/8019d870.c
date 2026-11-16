#include "tc_rt.h"

u32 fn_8019d870(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8017b710u, &a);
    wr32(param_1 + 0x160u, 0u);
    wr32(param_1, 0x80370cc0u);
    return param_1;
}
