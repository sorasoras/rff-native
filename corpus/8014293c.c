#include "tc_rt.h"

void fn_8014293c(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r4 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u);
    TcArgs a = {0};
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0xcu;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0xcu;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0xcu;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        }
    }
    if (r3 != 0u) {
        wr32(r3, param_r4);
        wr32(r3 + 4u, 0x80364460u);
    }
    wr32(param_r3 + 8u, r3);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x660u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r29 = r3;
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x660u;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x660u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        }
        r29 = r3;
    }
    if (r3 != 0u) {
        wr32(r3, param_r4);
        wr32(r3 + 4u, 0x8036444cu);
        r3 = r3 + 0x10u;
        a.r[0] = r3;
        r3 = tc_call(0x80144d68u, &a);
        f1 = tc_lastf();
        r28 = r29 + 0x4acu;
        a.r[0] = r28;
        r3 = tc_call(0x80079efcu, &a);
        f1 = tc_lastf();
        f0 = (f64)rdf32(0x80574490u);
        r27 = r29 + 0x53cu;
        wrf32d(r28 + 0x7cu, f0);
        wrf32d(r28 + 0x78u, f0);
        wrf32d(r28 + 0x74u, f0);
        a.r[0] = r27;
        r3 = tc_call(0x80079efcu, &a);
        f1 = tc_lastf();
        f0 = (f64)rdf32(0x80574490u);
        r28 = r29 + 0x5ccu;
        wrf32d(r27 + 0x7cu, f0);
        wrf32d(r27 + 0x78u, f0);
        wrf32d(r27 + 0x74u, f0);
        a.r[0] = r28;
        r3 = tc_call(0x80079efcu, &a);
        f1 = tc_lastf();
        f0 = (f64)rdf32(0x80574490u);
        wrf32d(r28 + 0x7cu, f0);
        wrf32d(r28 + 0x78u, f0);
        wrf32d(r28 + 0x74u, f0);
    }
    wr32(param_r3 + 0x10u, r29);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x10u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x10u;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x10u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        }
    }
    if (r3 != 0u) {
        wr32(r3, param_r4);
        wr32(r3 + 4u, 0x80364438u);
    }
    wr32(param_r3 + 0x14u, r3);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0xcu;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0xcu;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0xcu;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        }
    }
    if (r3 != 0u) {
        wr32(r3, param_r4);
        wr32(r3 + 4u, 0x803643e8u);
    }
    wr32(param_r3 + 0x24u, r3);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0xcu;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0xcu;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0xcu;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        }
    }
    if (r3 != 0u) {
        wr32(r3, param_r4);
        wr32(r3 + 4u, 0x803643d4u);
    }
    wr32(param_r3 + 0x2cu, r3);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0xcu;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0xcu;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0xcu;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        }
    }
    if (r3 != 0u) {
        wr32(r3, param_r4);
        wr32(r3 + 4u, 0x80364424u);
    }
    wr32(param_r3 + 0x18u, r3);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0xcu;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0xcu;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0xcu;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        }
    }
    if (r3 != 0u) {
        wr32(r3, param_r4);
        wr32(r3 + 4u, 0x80364410u);
    }
    wr32(param_r3 + 0x1cu, r3);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0xcu;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0xcu;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0xcu;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        }
    }
    if (r3 != 0u) {
        wr32(r3, param_r4);
        wr32(r3 + 4u, 0x803643fcu);
    }
    wr32(param_r3 + 0x20u, r3);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0xc0u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        f1 = tc_lastf();
        r27 = r3;
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0xc0u;
            r3 = tc_call(0x80094e80u, &a);
            f1 = tc_lastf();
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0xc0u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
        }
        r27 = r3;
    }
    if (r3 != 0u) {
        wr32(r3, param_r4);
        r28 = r3 + 0xcu;
        wr32(r3 + 4u, 0x803643c0u);
        a.r[0] = r28;
        r3 = tc_call(0x80079efcu, &a);
        f1 = tc_lastf();
        f0 = (f64)rdf32(0x80574490u);
        wrf32d(r28 + 0x80u, f0);
        wrf32d(r28 + 0x7cu, f0);
        wrf32d(r28 + 0x78u, f0);
        wrf32d(r27 + 0xb0u, f0);
        wrf32d(r27 + 0xacu, f0);
        wrf32d(r27 + 0xa8u, f0);
    }
    wr32(param_r3 + 0x28u, r27);
    wr32(param_r3 + 4u, 9u);
    return;
}
