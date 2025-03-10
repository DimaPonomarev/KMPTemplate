// Generated by Touchlab SKIE 0.9.3

import Foundation
import UIKit

extension UIKit.UIView {

    public func bindBackgroundColor(
        flow: MultiPlatformLibrary.CStateFlow<MultiPlatformLibrary.KotlinBoolean>,
        trueColor: UIKit.UIColor,
        falseColor: UIKit.UIColor
    ) -> MultiPlatformLibrary.DisposableHandle {
        return MultiPlatformLibrary.UIViewBindingsKt.bindBackgroundColor(self, flow: flow, trueColor: trueColor, falseColor: falseColor)
    }

    public func bindFocus(flow: MultiPlatformLibrary.CStateFlow<MultiPlatformLibrary.KotlinBoolean>) -> MultiPlatformLibrary.DisposableHandle {
        return MultiPlatformLibrary.UIViewBindingsKt.bindFocus(self, flow: flow)
    }

    public func bindHidden(flow: MultiPlatformLibrary.CStateFlow<MultiPlatformLibrary.KotlinBoolean>) -> MultiPlatformLibrary.DisposableHandle {
        return MultiPlatformLibrary.UIViewBindingsKt.bindHidden(self, flow: flow)
    }

}
