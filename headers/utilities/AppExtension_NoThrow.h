#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 5 member(s).
namespace StateRepository::Cache::Entity {
class AppExtension_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@AppExtension_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEAVAppExtensionIndexIterator_NoThrow@234@@Z
    static long FindByName(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *, ::StateRepository::Cache::Entity::AppExtensionIndexIterator_NoThrow &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@AppExtension_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JW4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long Get(::StateRepository::Cache::Manager_NoThrow &, int64_t, int, ::StateRepository::Cache::Entity::AppExtension_NoThrow &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppExtension_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~AppExtension_NoThrow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextToObject@AppExtension_NoThrow@Entity@Cache@StateRepository@@CAJAEAVContext_NoThrow@34@AEAV1234@W4CacheFlags@1234@_J@Z
    static long ContextToObject(::StateRepository::Cache::Context_NoThrow &, ::StateRepository::Cache::Entity::AppExtension_NoThrow &, int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@AppExtension_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JAEAVContext_NoThrow@34@AEA_N@Z
    static long Open(::StateRepository::Cache::Manager_NoThrow &, int64_t, ::StateRepository::Cache::Context_NoThrow &, bool &);
};
} // namespace StateRepository::Cache::Entity
