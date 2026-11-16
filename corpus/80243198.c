#include "tc_rt.h"

void fn_80243198(void)
{
    TcArgs a = {0};
    if (rd32(0x805717e0u) != 0u) {
        (void)tc_call(0x80245070u, &a);
        (void)tc_call(0x80243358u, &a);
        (void)tc_call(0x802461f0u, &a);
        (void)tc_call(0x80245518u, &a);
        (void)tc_call(0x80243864u, &a);
        (void)tc_call(0x802449b0u, &a);
        wr32(0x805717e0u, 0u);
    }
    return;
}
