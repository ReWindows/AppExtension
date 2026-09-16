#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 18 member(s).
class PackageExtensionPackageUninstallingEventArgsServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageExtensionPackageUninstallingEventArgsServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageExtensionPackageUninstallingEventArgsServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageExtensionPackageUninstallingEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageExtensionPackageUninstallingEventArgsServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageExtensionPackageUninstallingEventArgsServer@@QEAA@XZ
    PackageExtensionPackageUninstallingEventArgsServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageExtensionPackageUninstallingEventArgsServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageExtensionPackageUninstallingEventArgsServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackageExtensionPackageUninstallingEventArgsServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_Package(::Windows::ApplicationModel::IPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageExtensionName@PackageExtensionPackageUninstallingEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageExtensionName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageExtensionPackageUninstallingEventArgsServer@@UEAA@XZ
    virtual ~PackageExtensionPackageUninstallingEventArgsServer();
};
