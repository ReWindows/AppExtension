#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 22 member(s).
class AppExtensionCatalogFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AppExtensionCatalogFactoryServer@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppExtensionCatalogFactoryServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppExtensionCatalogFactoryServer@@QEAA@XZ
    AppExtensionCatalogFactoryServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppExtensionCatalogFactoryServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppExtensionCatalogFactoryServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppExtensionCatalogFactoryServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@AppExtensionCatalogFactoryServer@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@AppExtensionCatalogFactoryServer@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@AppExtensionCatalogFactoryServer@@UEAAJPEAUHSTRING__@@PEAPEAUIAppExtensionCatalog@AppExtensions@ApplicationModel@Windows@@@Z
    virtual long Open(HSTRING__*, ::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppExtensionCatalogFactoryServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppExtensionCatalogFactoryServer@@UEAAKXZ
    virtual unsigned long Release();
};
