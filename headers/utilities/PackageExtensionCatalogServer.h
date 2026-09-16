#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 43 member(s).
class PackageExtensionCatalogServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageExtensionCatalogServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAll@PackageExtensionCatalogServer@@UEAAJPEAPEAU?$IVectorView@PEAVPackageExtension@PackageExtensions@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long FindAll(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllAsync@PackageExtensionCatalogServer@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVPackageExtension@PackageExtensions@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long FindAllAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageExtensionCatalogServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageExtensionCatalogServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageExtensionCatalogServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageExtensionCatalogServer@@QEAA@XZ
    PackageExtensionCatalogServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageExtensionCatalogServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageExtensionCatalogServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestRemovePackageAsync@PackageExtensionCatalogServer@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long RequestRemovePackageAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PackageExtensionCatalogServer@@QEAAJPEAUHSTRING__@@@Z
    long RuntimeClassInitialize(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageInstalled@PackageExtensionCatalogServer@@UEAAJPEAU?$ITypedEventHandler@PEAVPackageExtensionCatalog@PackageExtensions@ApplicationModel@Windows@@PEAVPackageExtensionPackageInstalledEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageInstalled(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageStatusChanged@PackageExtensionCatalogServer@@UEAAJPEAU?$ITypedEventHandler@PEAVPackageExtensionCatalog@PackageExtensions@ApplicationModel@Windows@@PEAVPackageExtensionPackageStatusChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageStatusChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageUninstalling@PackageExtensionCatalogServer@@UEAAJPEAU?$ITypedEventHandler@PEAVPackageExtensionCatalog@PackageExtensions@ApplicationModel@Windows@@PEAVPackageExtensionPackageUninstallingEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageUninstalling(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageUpdated@PackageExtensionCatalogServer@@UEAAJPEAU?$ITypedEventHandler@PEAVPackageExtensionCatalog@PackageExtensions@ApplicationModel@Windows@@PEAVPackageExtensionPackageUpdatedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageUpdated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PackageUpdating@PackageExtensionCatalogServer@@UEAAJPEAU?$ITypedEventHandler@PEAVPackageExtensionCatalog@PackageExtensions@ApplicationModel@Windows@@PEAVPackageExtensionPackageUpdatingEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PackageUpdating(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageInstalled@PackageExtensionCatalogServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageInstalled(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageStatusChanged@PackageExtensionCatalogServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageStatusChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageUninstalling@PackageExtensionCatalogServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageUninstalling(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageUpdated@PackageExtensionCatalogServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageUpdated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PackageUpdating@PackageExtensionCatalogServer@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PackageUpdating(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageExtensionCatalogServer@@UEAA@XZ
    virtual ~PackageExtensionCatalogServer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@PackageExtensionCatalogServer@@AEAAXXZ
    void Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadResourceString@PackageExtensionCatalogServer@@CAJIAEAVStringBuffer@Common@@@Z
    static long LoadResourceString(unsigned int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegistryKeyChangeCallback@PackageExtensionCatalogServer@@CAXPEAXE@Z
    static void RegistryKeyChangeCallback(void *, unsigned char);
};
