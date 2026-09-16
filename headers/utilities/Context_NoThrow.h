#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 5 member(s).
namespace StateRepository::Cache {
class Context_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToCache@Context_NoThrow@Cache@StateRepository@@QEAAJPEBG@Z
    long AddToCache(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateData@Context_NoThrow@Cache@StateRepository@@QEAAJHAEA_J@Z
    long EnumerateData(int, int64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetField@Context_NoThrow@Cache@StateRepository@@QEAAJPEBGAEAI@Z
    long GetField(unsigned short const *, unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetField@Context_NoThrow@Cache@StateRepository@@QEAAJPEBGAEAIPEAPEAE@Z
    long GetField(unsigned short const *, unsigned int &, unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetField@Context_NoThrow@Cache@StateRepository@@QEAAJPEBGPEAPEAG@Z
    long GetField(unsigned short const *, unsigned short * *);
};
} // namespace StateRepository::Cache
