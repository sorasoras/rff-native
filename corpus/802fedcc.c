#include "tc_rt.h"

u32 fn_802fedcc(u32 param_1)
{
    TcArgs a = {0};
    wr8(param_1 + 5u, 0u);
    wr32(param_1, 0x8039d4e8u);
    a.r[0] = param_1 + 0x8cu;
    (void)tc_call(0x802fad50u, &a);
    wr8(param_1 + 0xa4u, 0u);
    wr8(param_1 + 0xa5u, 0u);
    wr16(param_1 + 0xa6u, 0u);
    wr16(param_1 + 0xa8u, 0u);
    wr8(param_1 + 0xaau, 0u);
    wr8(param_1 + 0xabu, 0u);
    wr16(param_1 + 0xacu, 0u);
    wr16(param_1 + 0xaeu, 0u);
    wr8(param_1 + 0xb0u, 0u);
    wr8(param_1 + 0xb1u, 0u);
    wr16(param_1 + 0xb2u, 0u);
    wr16(param_1 + 0xb4u, 0u);
    wr32(param_1 + 0xecu, 0u);
    wr32(param_1 + 0xf0u, 0u);
    a.r[0] = param_1;
    (void)tc_call(0x802fef60u, &a);
    return param_1;
}
