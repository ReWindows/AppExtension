#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 19 member(s).
class PackageExtensionPackageUpdatedEventArgsServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageExtensionPackageUpdatedEventArgsServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageExtensionPackageUpdatedEventArgsServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageExtensionPackageUpdatedEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageExtensionPackageUpdatedEventArgsServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageExtensionPackageUpdatedEventArgsServer@@QEAA@XZ
    PackageExtensionPackageUpdatedEventArgsServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageExtensionPackageUpdatedEventArgsServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageExtensionPackageUpdatedEventArgsServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Extensions@PackageExtensionPackageUpdatedEventArgsServer@@UEAAJPEAPEAU?$IVectorView@PEAVPackageExtension@PackageExtensions@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Extensions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackageExtensionPackageUpdatedEventArgsServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_Package(::Windows::ApplicationModel::IPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageExtensionName@PackageExtensionPackageUpdatedEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageExtensionName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageExtensionPackageUpdatedEventArgsServer@@UEAA@XZ
    virtual ~PackageExtensionPackageUpdatedEventArgsServer();
};
