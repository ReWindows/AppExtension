#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 18 member(s).
class PackageExtensionPackageUpdatingEventArgsServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageExtensionPackageUpdatingEventArgsServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageExtensionPackageUpdatingEventArgsServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageExtensionPackageUpdatingEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageExtensionPackageUpdatingEventArgsServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageExtensionPackageUpdatingEventArgsServer@@QEAA@XZ
    PackageExtensionPackageUpdatingEventArgsServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageExtensionPackageUpdatingEventArgsServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageExtensionPackageUpdatingEventArgsServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackageExtensionPackageUpdatingEventArgsServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_Package(::Windows::ApplicationModel::IPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageExtensionName@PackageExtensionPackageUpdatingEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageExtensionName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageExtensionPackageUpdatingEventArgsServer@@UEAA@XZ
    virtual ~PackageExtensionPackageUpdatingEventArgsServer();
};
