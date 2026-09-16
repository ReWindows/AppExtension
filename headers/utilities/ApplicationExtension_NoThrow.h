#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 4 member(s).
namespace StateRepository::Cache::Entity {
class ApplicationExtension_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@ApplicationExtension_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JW4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long Get(::StateRepository::Cache::Manager_NoThrow &, int64_t, int, ::StateRepository::Cache::Entity::ApplicationExtension_NoThrow &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationExtension_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~ApplicationExtension_NoThrow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextToObject@ApplicationExtension_NoThrow@Entity@Cache@StateRepository@@CAJAEAVContext_NoThrow@34@AEAV1234@W4CacheFlags@1234@_J@Z
    static long ContextToObject(::StateRepository::Cache::Context_NoThrow &, ::StateRepository::Cache::Entity::ApplicationExtension_NoThrow &, int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@ApplicationExtension_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JAEAVContext_NoThrow@34@AEA_N@Z
    static long Open(::StateRepository::Cache::Manager_NoThrow &, int64_t, ::StateRepository::Cache::Context_NoThrow &, bool &);
};
} // namespace StateRepository::Cache::Entity
