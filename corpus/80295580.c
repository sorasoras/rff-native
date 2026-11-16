#include "tc_rt.h"

void fn_80295580(void)
{
    TcArgs a = {0};
    a.r[0] = 0x8053dfa0u;
    a.r[1] = 0x80570e30u;
    a.r[2] = 3u;
    (void)tc_call(0x80004338u, &a);
    wr16(0x8053dfa4u, 0x1400u);
    wr32(0x8053dedcu, 1u);
    wr32(0x8053def8u, 2u);
    wr32(0x8053df14u, 4u);
    wr16(0x8053dfacu, 0xcc18u);
    wr16(0x8053dfaeu, 0x3fu);
    wr8(0x80540115u, 0xffu);
    wr8(0x80540116u, 0xffu);
    wr8(0x8053dfa6u, 0u);
    wr8(0x8053dfa7u, 5u);
    a.r[0] = 0x8053deccu;
    a.r[1] = 1u;
    a.r[2] = 4u;
    (void)tc_call(0x8028d220u, &a);
    (void)tc_call(0x802a0fb0u, &a);
    return;
}
