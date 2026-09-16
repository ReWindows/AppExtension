#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 22 member(s).
class PackageExtensionCatalogFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackageExtensionCatalogFactoryServer@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageExtensionCatalogFactoryServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageExtensionCatalogFactoryServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageExtensionCatalogFactoryServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageExtensionCatalogFactoryServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@PackageExtensionCatalogFactoryServer@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@PackageExtensionCatalogFactoryServer@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@PackageExtensionCatalogFactoryServer@@UEAAJPEAUHSTRING__@@PEAPEAUIPackageExtensionCatalog@PackageExtensions@ApplicationModel@Windows@@@Z
    virtual long Open(HSTRING__*, ::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageExtensionCatalogFactoryServer@@QEAA@XZ
    PackageExtensionCatalogFactoryServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageExtensionCatalogFactoryServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageExtensionCatalogFactoryServer@@UEAAKXZ
    virtual unsigned long Release();
};
