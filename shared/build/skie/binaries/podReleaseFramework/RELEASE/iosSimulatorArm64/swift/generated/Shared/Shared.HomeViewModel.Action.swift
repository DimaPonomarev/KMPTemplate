// Generated by Touchlab SKIE 0.9.3

import Foundation

extension MultiPlatformLibrary.Skie.Shared.HomeViewModel.Action {

    @frozen
    public enum __Sealed : Swift.Hashable {

        case goBack(MultiPlatformLibrary.HomeViewModelActionGoBack)

    }

}

public func onEnum<__Sealed : MultiPlatformLibrary.HomeViewModelAction>(of sealed: __Sealed) -> MultiPlatformLibrary.Skie.Shared.HomeViewModel.Action.__Sealed {
    if let sealed = sealed as? MultiPlatformLibrary.HomeViewModelActionGoBack {
        return MultiPlatformLibrary.Skie.Shared.HomeViewModel.Action.__Sealed.goBack(sealed)
    } else {
        fatalError("Unknown subtype \(sealed). This error should not happen under normal circumstances since SirClass: MultiPlatformLibrary.HomeViewModelAction is sealed.")
    }
}

@_disfavoredOverload
public func onEnum<__Sealed : MultiPlatformLibrary.HomeViewModelAction>(of sealed: __Sealed?) -> MultiPlatformLibrary.Skie.Shared.HomeViewModel.Action.__Sealed? {
    if let sealed {
        return onEnum(of: sealed) as MultiPlatformLibrary.Skie.Shared.HomeViewModel.Action.__Sealed
    } else {
        return nil
    }
}
