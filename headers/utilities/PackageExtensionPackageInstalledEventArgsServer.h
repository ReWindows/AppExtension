#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 19 member(s).
class PackageExtensionPackageInstalledEventArgsServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageExtensionPackageInstalledEventArgsServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageExtensionPackageInstalledEventArgsServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageExtensionPackageInstalledEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageExtensionPackageInstalledEventArgsServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageExtensionPackageInstalledEventArgsServer@@QEAA@XZ
    PackageExtensionPackageInstalledEventArgsServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageExtensionPackageInstalledEventArgsServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageExtensionPackageInstalledEventArgsServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Extensions@PackageExtensionPackageInstalledEventArgsServer@@UEAAJPEAPEAU?$IVectorView@PEAVPackageExtension@PackageExtensions@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Extensions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackageExtensionPackageInstalledEventArgsServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_Package(::Windows::ApplicationModel::IPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageExtensionName@PackageExtensionPackageInstalledEventArgsServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageExtensionName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageExtensionPackageInstalledEventArgsServer@@UEAA@XZ
    virtual ~PackageExtensionPackageInstalledEventArgsServer();
};
