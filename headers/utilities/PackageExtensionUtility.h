#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 4 member(s).
class PackageExtensionUtility {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCallerHostPermission@PackageExtensionUtility@@YAJPEAUIUnknown@@AEBQEAUHSTRING__@@@Z
    long CheckCallerHostPermission(IUnknown *, HSTRING__* const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExtensions@PackageExtensionUtility@@YAJPEBG0AEAV?$ComPtr@V?$AgileVector@PEAVPackageExtension@PackageExtensions@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVPackageExtension@PackageExtensions@ApplicationModel@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVPackageExtension@PackageExtensions@ApplicationModel@Windows@@@6784@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z
    long CreateExtensions(unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExtensions@PackageExtensionUtility@@YAJPEBGAEAV?$ComPtr@V?$AgileVector@PEAVPackageExtension@PackageExtensions@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVPackageExtension@PackageExtensions@ApplicationModel@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVPackageExtension@PackageExtensions@ApplicationModel@Windows@@@6784@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z
    long CreateExtensions(unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePackage@PackageExtensionUtility@@YAJPEBGAEAV?$ComPtr@UIPackage@ApplicationModel@Windows@@@WRL@Microsoft@@@Z
    long CreatePackage(unsigned short const *, WindissectOpaque &);
};
