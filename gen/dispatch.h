#ifndef DISPATCH_H
#define DISPATCH_H
#include "tc_rt.h"
typedef struct { u32 target; u32 (*fn)(const TcArgs *a); f64 (*ff)(const TcArgs *a); } DispatchEntry;
extern const DispatchEntry DISPATCH[];
extern const int DISPATCH_N;
const DispatchEntry *dispatch_find(u32 target);
void tc_set_lastr4(u32 v);
#endif
