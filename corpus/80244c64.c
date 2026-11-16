#include "tc_rt.h"

void fn_80244c64(void)
{
    u32 r4 = 0;
    TcArgs a = {0};
    if (rd32(0x8057187cu) != 1u) {
        if (rd32(0x80571888u) == 1u) {
            wr32(0x80571888u, 0u);
            (void)tc_call(0x80244a04u, &a);
        } else {
            wr32(0x80571888u, 2u);
            a.r[0] = 0x804ea460u;
            (void)tc_call(0x8024cd54u, &a);
        }
        if (rd32(0x80571868u) == 1u) {
            a.r[0] = (rd32(0x8057188cu) * 0x180u) - 0x7fb16020u;
            a.r[1] = 0x180u;
            (void)tc_call(0x80242c04u, &a);
            r4 = rd32(0x8057188cu) + 1u;
            r4 = r4 - (((ppc_mulhwu(0xaaaaaaabu, r4) >> 1u) & 0x7fffffffu) * 3u);
            if (r4 != rd32(0x80571890u)) {
                wr32(0x8057188cu, r4);
            }
        }
    }
    return;
}
