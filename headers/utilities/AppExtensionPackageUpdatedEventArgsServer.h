#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 19 member(s).
class AppExtensionPackageUpdatedEventArgsServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppExtensionPackageUpdatedEventArgsServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppExtensionPackageUpdatedEventArgsServer@@QEAA@XZ
    AppExtensionPackageUpdatedEventArgsServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppExtensionPackageUpdatedEventArgsServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppExtensionPackageUpdatedEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppExtensionPackageUpdatedEventArgsServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppExtensionPackageUpdatedEventArgsServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppExtensionPackageUpdatedEventArgsServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppExtensionName@AppExtensionPackageUpdatedEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppExtensionName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Extensions@AppExtensionPackageUpdatedEventArgsServer@@UEAAJPEAPEAU?$IVectorView@PEAVAppExtension@AppExtensions@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Extensions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@AppExtensionPackageUpdatedEventArgsServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_Package(::Windows::ApplicationModel::IPackage * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppExtensionPackageUpdatedEventArgsServer@@UEAA@XZ
    virtual ~AppExtensionPackageUpdatedEventArgsServer();
};
