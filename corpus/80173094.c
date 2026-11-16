#include "tc_rt.h"

void fn_80173094(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x804c093cu) == 1u) {
        r0 = rd32(0x803541bcu);
        if (r0 == 0u) {
            r4 = 0u;
        } else {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 == 1u) {
                r4 = rd32(0x80354134u);
            } else {
                if (r3 == 2u) {
                    r4 = rd32(0x80354168u);
                } else {
                    r4 = 0u;
                }
            }
        }
        if (r0 == 0u) {
            r3 = 0u;
        } else {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 == 1u) {
                r3 = r4 & rd32(rd32(0x80354198u));
            } else {
                if (r3 == 2u) {
                    r3 = r4 & rd32(rd32(0x803541a8u));
                } else {
                    r3 = 0u;
                }
            }
        }
        if (r3 != 0u) {
            wr8(0x804c093cu, 4u);
        }
        if (r0 == 0u) {
            r4 = 0u;
        } else {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 == 1u) {
                r4 = rd32(0x80354130u);
            } else {
                if (r3 == 2u) {
                    r4 = rd32(0x80354164u);
                } else {
                    r4 = 0u;
                }
            }
        }
        if (r0 == 0u) {
            r3 = 0u;
        } else {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 == 1u) {
                r3 = r4 & rd32(rd32(0x80354198u));
            } else {
                if (r3 == 2u) {
                    r3 = r4 & rd32(rd32(0x803541a8u));
                } else {
                    r3 = 0u;
                }
            }
        }
        if (r3 != 0u) {
            wr8(0x804c093cu, 5u);
        }
        if (r0 == 0u) {
            r4 = 0u;
        } else {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 == 1u) {
                r4 = rd32(0x8035413cu);
            } else {
                if (r3 == 2u) {
                    r4 = rd32(0x80354170u);
                } else {
                    r4 = 0u;
                }
            }
        }
        if (r0 == 0u) {
            r3 = 0u;
        } else {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 == 1u) {
                r3 = r4 & rd32(rd32(0x80354198u));
            } else {
                if (r3 == 2u) {
                    r3 = r4 & rd32(rd32(0x803541a8u));
                } else {
                    r3 = 0u;
                }
            }
        }
        if (r3 != 0u) {
            wr8(0x804c093cu, 6u);
        }
        if (r0 == 0u) {
            r4 = 0u;
        } else {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 == 1u) {
                r4 = rd32(0x80354138u);
            } else {
                if (r3 == 2u) {
                    r4 = rd32(0x8035416cu);
                } else {
                    r4 = 0u;
                }
            }
        }
        if (r0 == 0u) {
            r0 = 0u;
        } else {
            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r0 == 1u) {
                r0 = r4 & rd32(rd32(0x80354198u));
            } else {
                if (r0 == 2u) {
                    r0 = r4 & rd32(rd32(0x803541a8u));
                } else {
                    r0 = 0u;
                }
            }
        }
        if (r0 != 0u) {
            wr8(0x804c093cu, 7u);
        }
    }
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    (void)tc_call(0x801e6900u, &a);
    a.r[0] = 0x804bf24cu;
    (void)tc_call(0x80170644u, &a);
    return;
}
