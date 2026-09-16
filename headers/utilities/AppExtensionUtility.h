#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppExtension.dll by Windissect. 4 member(s).
class AppExtensionUtility {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCallerHostPermission@AppExtensionUtility@@YAJPEAUIUnknown@@AEBQEAUHSTRING__@@@Z
    long CheckCallerHostPermission(IUnknown *, HSTRING__* const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExtensions@AppExtensionUtility@@YAJPEBGAEAV?$ComPtr@V?$AgileVector@PEAVAppExtension@AppExtensions@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVAppExtension@AppExtensions@ApplicationModel@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAppExtension@AppExtensions@ApplicationModel@Windows@@@6784@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z
    long CreateExtensions(unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExtensions@AppExtensionUtility@@YAJPEBG0AEAV?$ComPtr@V?$AgileVector@PEAVAppExtension@AppExtensions@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVAppExtension@AppExtensions@ApplicationModel@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAppExtension@AppExtensions@ApplicationModel@Windows@@@6784@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z
    long CreateExtensions(unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePackage@AppExtensionUtility@@YAJPEBGAEAV?$ComPtr@UIPackage@ApplicationModel@Windows@@@WRL@Microsoft@@@Z
    long CreatePackage(unsigned short const *, WindissectOpaque &);
};
