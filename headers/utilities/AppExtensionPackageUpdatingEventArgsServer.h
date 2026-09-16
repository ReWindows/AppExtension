#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 18 member(s).
class AppExtensionPackageUpdatingEventArgsServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppExtensionPackageUpdatingEventArgsServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppExtensionPackageUpdatingEventArgsServer@@QEAA@XZ
    AppExtensionPackageUpdatingEventArgsServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppExtensionPackageUpdatingEventArgsServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppExtensionPackageUpdatingEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppExtensionPackageUpdatingEventArgsServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppExtensionPackageUpdatingEventArgsServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppExtensionPackageUpdatingEventArgsServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppExtensionName@AppExtensionPackageUpdatingEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppExtensionName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@AppExtensionPackageUpdatingEventArgsServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_Package(::Windows::ApplicationModel::IPackage * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppExtensionPackageUpdatingEventArgsServer@@UEAA@XZ
    virtual ~AppExtensionPackageUpdatingEventArgsServer();
};
