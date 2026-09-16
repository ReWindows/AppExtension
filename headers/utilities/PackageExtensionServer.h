#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 27 member(s).
class PackageExtensionServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageExtensionServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtensionProperties@PackageExtensionServer@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long GetExtensionProperties(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtensionPropertiesAsync@PackageExtensionServer@@UEAAJPEAPEAU?$IAsyncOperation@PEAUIPropertySet@Collections@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long GetExtensionPropertiesAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageExtensionServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPublicFolder@PackageExtensionServer@@UEAAJPEAPEAUIStorageFolder@Storage@Windows@@@Z
    virtual long GetPublicFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPublicFolderAsync@PackageExtensionServer@@UEAAJPEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@Windows@@@Z
    virtual long GetPublicFolderAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPublicPath@PackageExtensionServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPublicPath(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageExtensionServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageExtensionServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageExtensionServer@@QEAA@XZ
    PackageExtensionServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageExtensionServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageExtensionServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PackageExtensionServer@@QEAAJPEAUIPkgExtension@StateRepository@Internal@Windows@@PEAUHSTRING__@@@Z
    long RuntimeClassInitialize(::Windows::Internal::StateRepository::IPkgExtension *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PackageExtensionServer@@QEAAJPEBG0000IPEBX@Z
    long RuntimeClassInitialize(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Description@PackageExtensionServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Description(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@PackageExtensionServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@PackageExtensionServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackageExtensionServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_Package(::Windows::ApplicationModel::IPackage * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageExtensionServer@@UEAA@XZ
    virtual ~PackageExtensionServer();
};
