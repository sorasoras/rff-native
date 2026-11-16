#include "tc_rt.h"

void fn_80080494(void)
{
    TcArgs a = {0};
    a.r[0] = 0x80492800u;
    (void)tc_call(0x80082bf0u, &a);
    a.r[0] = 0x80499060u;
    (void)tc_call(0x800aa9c8u, &a);
    a.r[0] = 0x8049afe0u;
    (void)tc_call(0x800c8fd4u, &a);
    a.r[0] = 0x8049c500u;
    (void)tc_call(0x800c8144u, &a);
    a.r[0] = 0x8049df80u;
    (void)tc_call(0x800c91dcu, &a);
    a.r[0] = 0x8049e100u;
    (void)tc_call(0x801eb9e0u, &a);
    wr32(0x80571158u, 0u);
    wr32(0x80571160u, 0u);
    wr32(0x8057115cu, 0u);
    wr32(0x80571164u, 0u);
    wr32(0x80571168u, 0u);
    wr32(0x8057116cu, 0u);
    wr32(0x80571170u, 1u);
    wr32(0x80571190u, 0u);
    wr32(0x8057119cu, 0u);
    wr32(0x805711a0u, 0u);
    wr32(0x805711acu, 0u);
    wr32(0x80571174u, 9u);
    a.r[0] = 0x8049e140u;
    (void)tc_call(0x801a7840u, &a);
    wr32(0x80571178u, 1u);
    wr32(0x8057117cu, 0u);
    wr32(0x80571180u, 0xau);
    (void)tc_call(0x800cea54u, &a);
    (void)tc_call(0x80080590u, &a);
    wr32(0x805711a4u, 0xffffffffu);
    wr32(0x805711a8u, 0u);
    wr32(0x80571184u, 6u);
    wr32(0x80571188u, 0u);
    wr32(0x8057118cu, 0xffffffffu);
    wr32(0x80571194u, 0xf7u);
    wr32(0x80571198u, 0xffffffffu);
    (void)tc_call(0x80082a24u, &a);
    (void)tc_call(0x800816b0u, &a);
    return;
}
