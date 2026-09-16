#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 3 member(s).
namespace Common {
class RegistryKey {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt64Value@RegistryKey@Common@@QEAAJPEBGPEA_K@Z
    long GetUInt64Value(unsigned short const *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGK@Z
    long Open(HKEY__* const, unsigned short const *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegistryKey@Common@@QEAA@XZ
    ~RegistryKey();
};
} // namespace Common
