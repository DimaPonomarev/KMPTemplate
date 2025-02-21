// Generated by Touchlab SKIE 0.9.3

import Foundation

public final class SkieSwiftSharedFlow<T> : MultiPlatformLibrary.SkieSwiftFlowProtocol,
        Swift._ObjectiveCBridgeable {

    @_spi(SKIE)
    public let delegate: MultiPlatformLibrary.Kotlinx_coroutines_coreSharedFlow

    public var replayCache: [T] {
        delegate.replayCache as! [T]
    }

    init(`internal` flow: MultiPlatformLibrary.Kotlinx_coroutines_coreSharedFlow) {
        delegate = flow
    }

    public static func _forceBridgeFromObjectiveC(_ source: MultiPlatformLibrary.SkieKotlinSharedFlow<Swift.AnyObject>, result: inout MultiPlatformLibrary.SkieSwiftSharedFlow<T>?) -> Swift.Void {
        result = fromObjectiveC(source)
    }

    public static func _conditionallyBridgeFromObjectiveC(_ source: MultiPlatformLibrary.SkieKotlinSharedFlow<Swift.AnyObject>, result: inout MultiPlatformLibrary.SkieSwiftSharedFlow<T>?) -> Swift.Bool {
        result = fromObjectiveC(source)
        return true
    }

    public static func _unconditionallyBridgeFromObjectiveC(_ source: MultiPlatformLibrary.SkieKotlinSharedFlow<Swift.AnyObject>?) -> Self {
        return fromObjectiveC(source)
    }

    public func _bridgeToObjectiveC() -> MultiPlatformLibrary.SkieKotlinSharedFlow<Swift.AnyObject> {
        return MultiPlatformLibrary.SkieKotlinSharedFlow(delegate)
    }

    private static func fromObjectiveC(_ source: MultiPlatformLibrary.SkieKotlinSharedFlow<Swift.AnyObject>?) -> Self {
        guard let source = source else {
            fatalError("Couldn't map value of \(Swift.String(describing: source)) to MultiPlatformLibrary.SkieSwiftSharedFlow")
        }
        return .init(internal: source)
    }

    public func makeAsyncIterator() -> MultiPlatformLibrary.SkieSwiftFlowIterator<T> {
        return SkieSwiftFlowIterator(flow: delegate)
    }

    public typealias AsyncIterator = MultiPlatformLibrary.SkieSwiftFlowIterator<T>

    public typealias Element = T

    public typealias _ObjectiveCType = MultiPlatformLibrary.SkieKotlinSharedFlow<Swift.AnyObject>

}
