#include "tc_rt.h"

void fn_801b0e38(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r12 = 0, r25 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r27 = rd32(0x8033b3c0u);
    r25 = param_r4 * 0xcu;
    r28 = rd32(0x8033b3c4u);
    r29 = rd32(0x8033b3c8u);
    r30 = rd32(0x8033b3ccu);
    r31 = rd32(0x8033b3d0u);
    r12 = rd32(0x8033b3d4u);
    r10 = rd32(0x8033b3dcu);
    r9 = rd32(0x8033b3e0u);
    r8 = rd32(0x8033b3e4u);
    r7 = rd32(0x8033b3e8u);
    r0 = rd32(0x8033b3ecu);
    wr32(0x817fdfc0u, rd32(0x8033b3d8u));
    wr32(0x817fdfa8u, r27);
    wr32(0x817fdfacu, r28);
    wr32(0x817fdfb0u, r29);
    wr32(0x817fdfb4u, r30);
    wr32(0x817fdfb8u, r31);
    wr32(0x817fdfbcu, r12);
    wr32(0x817fdfc4u, r10);
    wr32(0x817fdfc8u, r9);
    wr32(0x817fdfccu, r8);
    wr32(0x817fdfd0u, r7);
    wr32(0x817fdfd4u, r0);
    f1 = (f64)rdf32(r25 - 0x7e802054u);
    f0 = (f64)rdf32(r25 - 0x7e802050u);
    wrf32d(param_r3, (f64)rdf32(r25 - 0x7e802058u));
    wrf32d(param_r3 + 4u, f1);
    wrf32d(param_r3 + 8u, f0);
    return;
}
