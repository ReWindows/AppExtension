#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 18 member(s).
class AppExtensionPackageStatusChangedEventArgsServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppExtensionPackageStatusChangedEventArgsServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppExtensionPackageStatusChangedEventArgsServer@@QEAA@XZ
    AppExtensionPackageStatusChangedEventArgsServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppExtensionPackageStatusChangedEventArgsServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppExtensionPackageStatusChangedEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppExtensionPackageStatusChangedEventArgsServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppExtensionPackageStatusChangedEventArgsServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppExtensionPackageStatusChangedEventArgsServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppExtensionName@AppExtensionPackageStatusChangedEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppExtensionName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@AppExtensionPackageStatusChangedEventArgsServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_Package(::Windows::ApplicationModel::IPackage * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppExtensionPackageStatusChangedEventArgsServer@@UEAA@XZ
    virtual ~AppExtensionPackageStatusChangedEventArgsServer();
};
