#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 41 member(s).
class AppExtensionServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppExtensionServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppExtensionServer@@QEAA@XZ
    AppExtensionServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtensionProperties@AppExtensionServer@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long GetExtensionProperties(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtensionPropertiesAsync@AppExtensionServer@@UEAAJPEAPEAU?$IAsyncOperation@PEAUIPropertySet@Collections@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long GetExtensionPropertiesAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppExtensionServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPublicFolder@AppExtensionServer@@UEAAJPEAPEAUIStorageFolder@Storage@Windows@@@Z
    virtual long GetPublicFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPublicFolderAsync@AppExtensionServer@@UEAAJPEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@Windows@@@Z
    virtual long GetPublicFolderAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPublicPath@AppExtensionServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPublicPath(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppExtensionServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppExtensionServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppExtensionServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppExtensionServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppExtensionServer@@QEAAJPEAUIAppExtension@StateRepository@Internal@Windows@@PEAUHSTRING__@@@Z
    long RuntimeClassInitialize(::Windows::Internal::StateRepository::IAppExtension *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppExtensionServer@@QEAAJPEBG0000_JIPEBX@Z
    long RuntimeClassInitialize(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, int64_t, unsigned int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppInfo@AppExtensionServer@@UEAAJPEAPEAUIAppInfo@ApplicationModel@Windows@@@Z
    virtual long get_AppInfo(::Windows::ApplicationModel::IAppInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@AppExtensionServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Description@AppExtensionServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Description(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@AppExtensionServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@AppExtensionServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@AppExtensionServer@@UEAAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z
    virtual long get_Package(::Windows::ApplicationModel::IPackage * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppExtensionServer@@UEAA@XZ
    virtual ~AppExtensionServer();
};
