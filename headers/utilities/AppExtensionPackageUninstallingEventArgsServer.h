#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 18 member(s).
class AppExtensionPackageUninstallingEventArgsServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppExtensionPackageUninstallingEventArgsServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppExtensionPackageUninstallingEventArgsServer@@QEAA@XZ
    AppExtensionPackageUninstallingEventArgsServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppExtensionPackageUninstallingEventArgsServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppExtensionPackageUninstallingEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppExtensionPackageUninstallingEventArgsServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppExtensionPackageUninstallingEventArgsServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppExtensionPackageUninstallingEventArgsServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppExtensionName@AppExtensionPackageUninstallingEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppExtensionName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@AppExtensionPackageUninstallingEventArgsServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_Package(::Windows::ApplicationModel::IPackage * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppExtensionPackageUninstallingEventArgsServer@@UEAA@XZ
    virtual ~AppExtensionPackageUninstallingEventArgsServer();
};
