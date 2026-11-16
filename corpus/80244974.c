#include "tc_rt.h"

void fn_80244974(void)
{
    wr32(0x80571848u, 0u);
    wr32(0x80571850u, 0u);
    wr32(0x8057184cu, 0x804e9600u);
    wr32(0x80571840u, 1u);
    wr16(0x8057183eu, 0x8000u);
    wr16(0x8057183cu, 0x8000u);
    wr16(0x8057183au, 0x8000u);
    wr16(0x80571838u, 0x8000u);
    return;
}
