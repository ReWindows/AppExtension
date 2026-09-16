#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 49 member(s).
class AppExtensionCatalogServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppExtensionCatalogServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppExtensionCatalogServer@@QEAA@XZ
    AppExtensionCatalogServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAll@AppExtensionCatalogServer@@UEAAJPEAPEAU?$IVectorView@PEAVAppExtension@AppExtensions@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long FindAll(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllAsync@AppExtensionCatalogServer@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppExtension@AppExtensions@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long FindAllAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppExtensionCatalogServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppExtensionCatalogServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppExtensionCatalogServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppExtensionCatalogServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppExtensionCatalogServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestRemovePackageAsync@AppExtensionCatalogServer@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long RequestRemovePackageAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppExtensionCatalogServer@@QEAAJPEAUHSTRING__@@@Z
    long RuntimeClassInitialize(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageInstalled@AppExtensionCatalogServer@@UEAAJPEAU?$ITypedEventHandler@PEAVAppExtensionCatalog@AppExtensions@ApplicationModel@Windows@@PEAVAppExtensionPackageInstalledEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageInstalled(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageStatusChanged@AppExtensionCatalogServer@@UEAAJPEAU?$ITypedEventHandler@PEAVAppExtensionCatalog@AppExtensions@ApplicationModel@Windows@@PEAVAppExtensionPackageStatusChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageStatusChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageUninstalling@AppExtensionCatalogServer@@UEAAJPEAU?$ITypedEventHandler@PEAVAppExtensionCatalog@AppExtensions@ApplicationModel@Windows@@PEAVAppExtensionPackageUninstallingEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageUninstalling(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageUpdated@AppExtensionCatalogServer@@UEAAJPEAU?$ITypedEventHandler@PEAVAppExtensionCatalog@AppExtensions@ApplicationModel@Windows@@PEAVAppExtensionPackageUpdatedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageUpdated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageUpdating@AppExtensionCatalogServer@@UEAAJPEAU?$ITypedEventHandler@PEAVAppExtensionCatalog@AppExtensions@ApplicationModel@Windows@@PEAVAppExtensionPackageUpdatingEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageUpdating(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageInstalled@AppExtensionCatalogServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageInstalled(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageStatusChanged@AppExtensionCatalogServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageStatusChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageUninstalling@AppExtensionCatalogServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageUninstalling(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageUpdated@AppExtensionCatalogServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageUpdated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageUpdating@AppExtensionCatalogServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageUpdating(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppExtensionCatalogServer@@UEAA@XZ
    virtual ~AppExtensionCatalogServer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@AppExtensionCatalogServer@@AEAAXXZ
    void Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadResourceString@AppExtensionCatalogServer@@CAJIAEAVStringBuffer@Common@@@Z
    static long LoadResourceString(unsigned int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegistryKeyChangeCallback@AppExtensionCatalogServer@@CAXPEAXE@Z
    static void RegistryKeyChangeCallback(void *, unsigned char);
};
