#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 2 member(s).
namespace StateRepository::Cache::Entity {
class PkgExtensionIndexIterator_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PkgExtensionIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJW4CacheFlags@PkgExtension_NoThrow@234@AEAV6234@AEA_N@Z
    long Get(int, ::StateRepository::Cache::Entity::PkgExtension_NoThrow &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenByName@PkgExtensionIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@PEBG@Z
    long OpenByName(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *);
};
} // namespace StateRepository::Cache::Entity
