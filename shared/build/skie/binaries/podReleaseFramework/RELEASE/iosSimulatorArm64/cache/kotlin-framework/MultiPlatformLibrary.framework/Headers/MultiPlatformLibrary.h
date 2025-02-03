#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class UIView, UITextView, UITextField, UISwitch, UILabel, UIImage, UIFont, UIControl, UIColor, UIButton, NSURL, NSString, NSSet<ObjectType>, NSObject, NSNumber, NSNotificationCenter, NSMutableSet<ObjectType>, NSMutableDictionary<KeyType, ObjectType>, NSMutableArray<ObjectType>, NSLocale, NSError, NSDictionary<KeyType, ObjectType>, NSData, NSBundle, NSArray<ObjectType>, MPL__SkieSuspendWrappersKt, MPLViewModelStateLoading, MPLViewModelStateIdle, MPLViewModelStateError, MPLViewModelState, MPLViewModel, MPLUtils, MPLUShort, MPLULong, MPLUInt, MPLUIViewBindingsKt, MPLUITextViewBindingsKt, MPLUITextFieldBindingsKt, MPLUISwitchBindingsKt, MPLUILabelBindingsKt, MPLUIControlExtKt, MPLUIControlBindingsKt, MPLUIButtonBindingsKt, MPLUByte, MPLStringResource, MPLStringDescLocaleTypeSystem, MPLStringDescLocaleTypeCustom, MPLStringDescLocaleType, MPLStringDescKt, MPLStringDescCompanion, MPLSkie_SuspendResultSuccess, MPLSkie_SuspendResultError, MPLSkie_SuspendResultCanceled, MPLSkie_SuspendResult, MPLSkie_SuspendHandler, MPLSkie_CancellationHandler, MPLSkieKotlinStateFlow<T>, MPLSkieKotlinSharedFlow<T>, MPLSkieKotlinOptionalStateFlow<T>, MPLSkieKotlinOptionalSharedFlow<T>, MPLSkieKotlinOptionalMutableStateFlow<T>, MPLSkieKotlinOptionalMutableSharedFlow<T>, MPLSkieKotlinOptionalFlow<T>, MPLSkieKotlinMutableStateFlow<T>, MPLSkieKotlinMutableSharedFlow<T>, MPLSkieKotlinFlow<T>, MPLSkieColdFlowIterator<E>, MPLShort, MPLResourceStringDesc, MPLResourcePlatformDetails, MPLResourceFormattedStringDesc, MPLResourceExtension, MPLResourceContainerExtKt, MPLReadFileTextException, MPLRawStringDesc, MPLPluralsResource, MPLPluralStringDesc, MPLPluralFormattedStringDesc, MPLPlatform_iosKt, MPLNumber, MPLNSNotificationCenterExtKt, MPLNSBundleExtKt, MPLMutableSet<ObjectType>, MPLMutableDictionary<KeyType, ObjectType>, MPLMRStrings, MPLMR, MPLLong, MPLLoginViewModelActionShowNext, MPLLoginViewModel, MPLKotlinx_coroutines_coreCoroutineDispatcherKey, MPLKotlinx_coroutines_coreCoroutineDispatcher, MPLKotlinThrowable, MPLKotlinRuntimeException, MPLKotlinObjCErrorException, MPLKotlinIllegalStateException, MPLKotlinException, MPLKotlinCancellationException, MPLKotlinArray<T>, MPLKotlinAbstractCoroutineContextKey<B, E>, MPLKotlinAbstractCoroutineContextElement, MPLInt, MPLImageResource, MPLImageDescUrlKt, MPLImageDescUrl, MPLImageDescResource, MPLImageDescCompanion, MPLIOSPlatform, MPLHomeViewModelActionGoBack, MPLHomeViewModel, MPLGraphicsColorCompanion, MPLGraphicsColor, MPLFontResource, MPLFloat, MPLFileResource, MPLEventsDispatcher<ListenerType>, MPLDouble, MPLDisposableHandleKt, MPLCompositionStringDesc, MPLColorResource, MPLColorDescThemed, MPLColorDescSingle, MPLColorDescResource, MPLColorDescExtKt, MPLColorDescCompanion, MPLCStateFlowKt, MPLCStateFlow<T>, MPLCMutableStateFlowKt, MPLCMutableStateFlow<T>, MPLCFlowKt, MPLCFlow<T>, MPLByte, MPLBoolean, MPLBindingBaseKt, MPLBase, MPLAssetResource;

@protocol NSCopying, MPLStringDesc, MPLSkie_DispatcherDelegate, MPLResourceContainer, MPLPlatform, MPLLoginViewModelAction, MPLKotlinx_coroutines_coreStateFlow, MPLKotlinx_coroutines_coreSharedFlow, MPLKotlinx_coroutines_coreRunnable, MPLKotlinx_coroutines_coreMutableStateFlow, MPLKotlinx_coroutines_coreMutableSharedFlow, MPLKotlinx_coroutines_coreFlowCollector, MPLKotlinx_coroutines_coreFlow, MPLKotlinx_coroutines_coreDisposableHandle, MPLKotlinx_coroutines_coreCoroutineScope, MPLKotlinIterator, MPLKotlinCoroutineContextKey, MPLKotlinCoroutineContextElement, MPLKotlinCoroutineContext, MPLKotlinContinuationInterceptor, MPLKotlinContinuation, MPLImageDesc, MPLHomeViewModelAction, MPLEventsDispatcherOwner, MPLDisposableHandle, MPLColorDesc;

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift types with a lambda type argument.
// Example of such type is: A<() -> Unit> where A<T> is a generic class.
// To avoid compilation errors SKIE replaces these type arguments with __SkieLambdaErrorType, resulting in A<__SkieLambdaErrorType>.
// Generated declarations that reference __SkieLambdaErrorType cannot be called in any way and the __SkieLambdaErrorType class cannot be used.
// The original declarations can still be used in the same way as other declarations hidden by SKIE (and with the same limitations as without SKIE).
@interface __SkieLambdaErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift code that uses external Obj-C types for which SKIE doesn't know a fully qualified name.
// This problem occurs when custom Cinterop bindings are used because those do not contain the name of the Framework that provides implementation for those binding.
// The name can be configured manually using the SKIE Gradle configuration key 'ClassInterop.CInteropFrameworkName' in the same way as other SKIE features.
// To avoid compilation errors SKIE replaces types with unknown Framework name with __SkieUnknownCInteropFrameworkErrorType.
// Generated declarations that reference __SkieUnknownCInteropFrameworkErrorType cannot be called in any way and the __SkieUnknownCInteropFrameworkErrorType class cannot be used.
@interface __SkieUnknownCInteropFrameworkErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end

typedef id<MPLStringDesc> _Nonnull Skie__TypeDef__0__id_MPLStringDesc_ __attribute__((__swift_private__));

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MPLBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MPLBase (MPLBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MPLMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MPLMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMPLKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MPLNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface MPLByte : MPLNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MPLUByte : MPLNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MPLShort : MPLNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MPLUShort : MPLNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MPLInt : MPLNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MPLUInt : MPLNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MPLLong : MPLNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MPLULong : MPLNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MPLFloat : MPLNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MPLDouble : MPLNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MPLBoolean : MPLNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceExtension")))
@interface MPLResourceExtension : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MPLStringDesc>)getStringDescId:(MPLStringResource *)id __attribute__((swift_name("getStringDesc(id:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieColdFlowIterator")))
@interface MPLSkieColdFlowIterator<E> : MPLBase
- (instancetype)initWithFlow:(id<MPLKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));
- (void)cancel __attribute__((swift_name("cancel()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextWithCompletionHandler:(void (^)(MPLBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNext(completionHandler:)")));
- (E _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol MPLKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinFlow")))
@interface MPLSkieKotlinFlow<__covariant T> : MPLBase <MPLKotlinx_coroutines_coreFlow>
- (instancetype)initWithDelegate:(id<MPLKotlinx_coroutines_coreFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol MPLKotlinx_coroutines_coreSharedFlow <MPLKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol MPLKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol MPLKotlinx_coroutines_coreMutableSharedFlow <MPLKotlinx_coroutines_coreSharedFlow, MPLKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<MPLKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinMutableSharedFlow")))
@interface MPLSkieKotlinMutableSharedFlow<T> : MPLBase <MPLKotlinx_coroutines_coreMutableSharedFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<MPLKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
- (instancetype)initWithDelegate:(id<MPLKotlinx_coroutines_coreMutableSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol MPLKotlinx_coroutines_coreStateFlow <MPLKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol MPLKotlinx_coroutines_coreMutableStateFlow <MPLKotlinx_coroutines_coreStateFlow, MPLKotlinx_coroutines_coreMutableSharedFlow>
@required
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinMutableStateFlow")))
@interface MPLSkieKotlinMutableStateFlow<T> : MPLBase <MPLKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<MPLKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<MPLKotlinx_coroutines_coreMutableStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T)expect update:(T)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalFlow")))
@interface MPLSkieKotlinOptionalFlow<__covariant T> : MPLBase <MPLKotlinx_coroutines_coreFlow>
- (instancetype)initWithDelegate:(id<MPLKotlinx_coroutines_coreFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalMutableSharedFlow")))
@interface MPLSkieKotlinOptionalMutableSharedFlow<T> : MPLBase <MPLKotlinx_coroutines_coreMutableSharedFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<MPLKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
- (instancetype)initWithDelegate:(id<MPLKotlinx_coroutines_coreMutableSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalMutableStateFlow")))
@interface MPLSkieKotlinOptionalMutableStateFlow<T> : MPLBase <MPLKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<MPLKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<MPLKotlinx_coroutines_coreMutableStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T _Nullable)expect update:(T _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalSharedFlow")))
@interface MPLSkieKotlinOptionalSharedFlow<__covariant T> : MPLBase <MPLKotlinx_coroutines_coreSharedFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
- (instancetype)initWithDelegate:(id<MPLKotlinx_coroutines_coreSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalStateFlow")))
@interface MPLSkieKotlinOptionalStateFlow<__covariant T> : MPLBase <MPLKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<MPLKotlinx_coroutines_coreStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinSharedFlow")))
@interface MPLSkieKotlinSharedFlow<__covariant T> : MPLBase <MPLKotlinx_coroutines_coreSharedFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
- (instancetype)initWithDelegate:(id<MPLKotlinx_coroutines_coreSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinStateFlow")))
@interface MPLSkieKotlinStateFlow<__covariant T> : MPLBase <MPLKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<MPLKotlinx_coroutines_coreStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_CancellationHandler")))
@interface MPLSkie_CancellationHandler : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)cancel __attribute__((swift_name("cancel()")));
@end

__attribute__((swift_name("Skie_DispatcherDelegate")))
@protocol MPLSkie_DispatcherDelegate
@required
- (void)dispatchBlock:(id<MPLKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendHandler")))
@interface MPLSkie_SuspendHandler : MPLBase
- (instancetype)initWithCancellationHandler:(MPLSkie_CancellationHandler *)cancellationHandler dispatcherDelegate:(id<MPLSkie_DispatcherDelegate>)dispatcherDelegate onResult:(void (^)(MPLSkie_SuspendResult *))onResult __attribute__((swift_name("init(cancellationHandler:dispatcherDelegate:onResult:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Skie_SuspendResult")))
@interface MPLSkie_SuspendResult : MPLBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Canceled")))
@interface MPLSkie_SuspendResultCanceled : MPLSkie_SuspendResult
@property (class, readonly, getter=shared) MPLSkie_SuspendResultCanceled *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)canceled __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Error")))
@interface MPLSkie_SuspendResultError : MPLSkie_SuspendResult
@property (readonly) NSError *error __attribute__((swift_name("error")));
- (instancetype)initWithError:(NSError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (MPLSkie_SuspendResultError *)doCopyError:(NSError *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Success")))
@interface MPLSkie_SuspendResultSuccess : MPLSkie_SuspendResult
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(id _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (MPLSkie_SuspendResultSuccess *)doCopyValue:(id _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("ViewModel")))
@interface MPLViewModel : MPLBase
@property (readonly) id<MPLKotlinx_coroutines_coreCoroutineScope> viewModelScope __attribute__((swift_name("viewModelScope")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onCleared __attribute__((swift_name("onCleared()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeViewModel")))
@interface MPLHomeViewModel : MPLViewModel
@property (readonly) MPLCFlow<id<MPLHomeViewModelAction>> *actions __attribute__((swift_name("actions")));
@property (readonly) MPLCStateFlow<MPLBoolean *> *isButtonEnabled __attribute__((swift_name("isButtonEnabled")));
@property (readonly) MPLCStateFlow<MPLBoolean *> *isLoading __attribute__((swift_name("isLoading")));
@property (readonly) MPLCMutableStateFlow<NSString *> *login __attribute__((swift_name("login")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)goBack __attribute__((swift_name("goBack()")));
@end

__attribute__((swift_name("HomeViewModelAction")))
@protocol MPLHomeViewModelAction
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeViewModelActionGoBack")))
@interface MPLHomeViewModelActionGoBack : MPLBase <MPLHomeViewModelAction>
@property (class, readonly, getter=shared) MPLHomeViewModelActionGoBack *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)goBack __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Platform")))
@protocol MPLPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface MPLIOSPlatform : MPLBase <MPLPlatform>
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginViewModel")))
@interface MPLLoginViewModel : MPLViewModel
@property (readonly) id<MPLKotlinx_coroutines_coreMutableStateFlow> _isAlertShown __attribute__((swift_name("_isAlertShown")));
@property (readonly) id<MPLKotlinx_coroutines_coreMutableStateFlow> _isButtonEnabled __attribute__((swift_name("_isButtonEnabled")));
@property (readonly) id<MPLKotlinx_coroutines_coreFlow> actions __attribute__((swift_name("actions")));
@property (readonly) id<MPLKotlinx_coroutines_coreMutableStateFlow> isAlertShown __attribute__((swift_name("isAlertShown")));
@property (readonly) id<MPLKotlinx_coroutines_coreMutableStateFlow> isButtonEnabled __attribute__((swift_name("isButtonEnabled")));
@property (readonly) id<MPLKotlinx_coroutines_coreMutableStateFlow> isLoading __attribute__((swift_name("isLoading")));
@property (readonly) id<MPLKotlinx_coroutines_coreMutableStateFlow> login __attribute__((swift_name("login")));
@property (readonly) id<MPLKotlinx_coroutines_coreMutableStateFlow> password __attribute__((swift_name("password")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)hideAlert __attribute__((swift_name("hideAlert()")));
- (void)onLoginPressed __attribute__((swift_name("onLoginPressed()")));
- (void)onShowNextScreen __attribute__((swift_name("onShowNextScreen()")));
- (void)setLoginValue:(NSString *)value __attribute__((swift_name("setLogin(value:)")));
- (void)setPasswordValue:(NSString *)value __attribute__((swift_name("setPassword(value:)")));
@end

__attribute__((swift_name("LoginViewModelAction")))
@protocol MPLLoginViewModelAction
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginViewModelActionShowNext")))
@interface MPLLoginViewModelActionShowNext : MPLBase <MPLLoginViewModelAction>
@property (class, readonly, getter=shared) MPLLoginViewModelActionShowNext *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)showNext __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("ViewModelState")))
@interface MPLViewModelState : MPLBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModelState.Error")))
@interface MPLViewModelStateError : MPLViewModelState
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (MPLViewModelStateError *)doCopyMessage:(NSString * _Nullable)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModelState.Idle")))
@interface MPLViewModelStateIdle : MPLViewModelState
@property (class, readonly, getter=shared) MPLViewModelStateIdle *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModelState.Loading")))
@interface MPLViewModelStateLoading : MPLViewModelState
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (MPLViewModelStateLoading *)doCopyMessage:(NSString * _Nullable)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MR")))
@interface MPLMR : MPLBase
@property (class, readonly, getter=shared) MPLMR *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mR __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("ResourceContainer")))
@protocol MPLResourceContainer
@required
- (NSArray<id> *)values __attribute__((swift_name("values()")));
@property (readonly) MPLResourcePlatformDetails *__platformDetails __attribute__((swift_name("__platformDetails")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MR.strings")))
@interface MPLMRStrings : MPLBase <MPLResourceContainer>
@property (class, readonly, getter=shared) MPLMRStrings *shared __attribute__((swift_name("shared")));
@property (readonly) MPLResourcePlatformDetails *__platformDetails __attribute__((swift_name("__platformDetails")));
@property (readonly) MPLStringResource *button_no __attribute__((swift_name("button_no")));
@property (readonly) MPLStringResource *button_yes __attribute__((swift_name("button_yes")));
@property (readonly) MPLStringResource *go_back __attribute__((swift_name("go_back")));
@property (readonly) MPLStringResource *log_in __attribute__((swift_name("log_in")));
@property (readonly) MPLStringResource *login __attribute__((swift_name("login")));
@property (readonly) MPLStringResource *my_string __attribute__((swift_name("my_string")));
@property (readonly) MPLStringResource *password __attribute__((swift_name("password")));
@property (readonly) MPLStringResource *show_next_screen __attribute__((swift_name("show_next_screen")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)strings __attribute__((swift_name("init()")));
- (NSArray<MPLStringResource *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventsDispatcher")))
@interface MPLEventsDispatcher<ListenerType> : MPLBase
@property ListenerType _Nullable listener __attribute__((swift_name("listener")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithListener:(ListenerType)listener __attribute__((swift_name("init(listener:)"))) __attribute__((objc_designated_initializer));
- (void)dispatchEventBlock:(void (^)(ListenerType))block __attribute__((swift_name("dispatchEvent(block:)")));
@end

__attribute__((swift_name("EventsDispatcherOwner")))
@protocol MPLEventsDispatcherOwner
@required
@property (readonly) MPLEventsDispatcher<id> *eventsDispatcher __attribute__((swift_name("eventsDispatcher")));
@end

__attribute__((swift_name("CFlow")))
@interface MPLCFlow<T> : MPLBase <MPLKotlinx_coroutines_coreFlow>
- (instancetype)initWithFlow:(id<MPLKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<MPLDisposableHandle>)subscribeOnCollect:(void (^)(T _Nullable))onCollect __attribute__((swift_name("subscribe(onCollect:)")));
- (id<MPLDisposableHandle>)subscribeCoroutineScope:(id<MPLKotlinx_coroutines_coreCoroutineScope>)coroutineScope dispatcher:(MPLKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher onCollect:(void (^)(T _Nullable))onCollect __attribute__((swift_name("subscribe(coroutineScope:dispatcher:onCollect:)")));
@end

__attribute__((swift_name("CStateFlow")))
@interface MPLCStateFlow<T> : MPLCFlow<T> <MPLKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithFlow:(id<MPLKotlinx_coroutines_coreStateFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CMutableStateFlow")))
@interface MPLCMutableStateFlow<T> : MPLCStateFlow<T> <MPLKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) id<MPLKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithFlow:(id<MPLKotlinx_coroutines_coreMutableStateFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));
- (BOOL)compareAndSetExpect:(T _Nullable)expect update:(T _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol MPLKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("DisposableHandle")))
@protocol MPLDisposableHandle <MPLKotlinx_coroutines_coreDisposableHandle>
@required
@end

__attribute__((swift_name("FileResource")))
@interface MPLFileResource : MPLBase
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSString *extension __attribute__((swift_name("extension")));
@property (readonly) NSString *fileName __attribute__((swift_name("fileName")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly) NSURL *url __attribute__((swift_name("url")));
- (instancetype)initWithFileName:(NSString *)fileName extension:(NSString *)extension bundle:(NSBundle *)bundle __attribute__((swift_name("init(fileName:extension:bundle:)"))) __attribute__((objc_designated_initializer));
- (NSString *)readText __attribute__((swift_name("readText()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AssetResource")))
@interface MPLAssetResource : MPLFileResource
@property (readonly) NSString *originalPath __attribute__((swift_name("originalPath")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly) NSURL *url __attribute__((swift_name("url")));
- (instancetype)initWithOriginalPath:(NSString *)originalPath fileName:(NSString *)fileName extension:(NSString *)extension bundle:(NSBundle *)bundle __attribute__((swift_name("init(originalPath:fileName:extension:bundle:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFileName:(NSString *)fileName extension:(NSString *)extension bundle:(NSBundle *)bundle __attribute__((swift_name("init(fileName:extension:bundle:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorResource")))
@interface MPLColorResource : MPLBase
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithName:(NSString *)name bundle:(NSBundle *)bundle __attribute__((swift_name("init(name:bundle:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FontResource")))
@interface MPLFontResource : MPLBase
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSData *data __attribute__((swift_name("data")));
@property (readonly) NSString *filePath __attribute__((swift_name("filePath")));
@property (readonly) NSString *fontName __attribute__((swift_name("fontName")));
- (instancetype)initWithFontName:(NSString *)fontName bundle:(NSBundle *)bundle __attribute__((swift_name("init(fontName:bundle:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of ObjCErrorException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)registerFontAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("registerFont()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageResource")))
@interface MPLImageResource : MPLBase
@property (readonly) NSString *assetImageName __attribute__((swift_name("assetImageName")));
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
- (instancetype)initWithAssetImageName:(NSString *)assetImageName bundle:(NSBundle *)bundle __attribute__((swift_name("init(assetImageName:bundle:)"))) __attribute__((objc_designated_initializer));
- (MPLImageResource *)doCopyAssetImageName:(NSString *)assetImageName bundle:(NSBundle *)bundle __attribute__((swift_name("doCopy(assetImageName:bundle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (UIImage * _Nullable)toUIImage __attribute__((swift_name("toUIImage()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluralsResource")))
@interface MPLPluralsResource : MPLBase
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSString *resourceId __attribute__((swift_name("resourceId")));
- (instancetype)initWithResourceId:(NSString *)resourceId bundle:(NSBundle *)bundle __attribute__((swift_name("init(resourceId:bundle:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MPLKotlinThrowable : MPLBase
@property (readonly) MPLKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (MPLKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface MPLKotlinException : MPLKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadFileTextException")))
@interface MPLReadFileTextException : MPLKotlinException
@property (readonly) MPLFileResource *fileResource __attribute__((swift_name("fileResource")));
@property (readonly) NSString *info __attribute__((swift_name("info")));
- (instancetype)initWithFileResource:(MPLFileResource *)fileResource info:(NSString *)info __attribute__((swift_name("init(fileResource:info:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFileResource:(MPLFileResource *)fileResource error:(NSError *)error __attribute__((swift_name("init(fileResource:error:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourcePlatformDetails")))
@interface MPLResourcePlatformDetails : MPLBase
@property (readonly) NSBundle *nsBundle __attribute__((swift_name("nsBundle")));
- (instancetype)initWithNsBundle:(NSBundle *)nsBundle __attribute__((swift_name("init(nsBundle:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringResource")))
@interface MPLStringResource : MPLBase
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSString *resourceId __attribute__((swift_name("resourceId")));
- (instancetype)initWithResourceId:(NSString *)resourceId bundle:(NSBundle *)bundle __attribute__((swift_name("init(resourceId:bundle:)"))) __attribute__((objc_designated_initializer));
- (MPLStringResource *)doCopyResourceId:(NSString *)resourceId bundle:(NSBundle *)bundle __attribute__((swift_name("doCopy(resourceId:bundle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("StringDesc")))
@protocol MPLStringDesc
@required
- (NSString *)localized __attribute__((swift_name("localized()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompositionStringDesc")))
@interface MPLCompositionStringDesc : MPLBase <MPLStringDesc>
@property (readonly) id args __attribute__((swift_name("args")));
@property (readonly) NSString * _Nullable separator __attribute__((swift_name("separator")));
- (instancetype)initWithArgs:(id)args separator:(NSString * _Nullable)separator __attribute__((swift_name("init(args:separator:)"))) __attribute__((objc_designated_initializer));
- (MPLCompositionStringDesc *)doCopyArgs:(id)args separator:(NSString * _Nullable)separator __attribute__((swift_name("doCopy(args:separator:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)localized __attribute__((swift_name("localized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluralFormattedStringDesc")))
@interface MPLPluralFormattedStringDesc : MPLBase <MPLStringDesc>
@property (readonly) NSArray<id> *args __attribute__((swift_name("args")));
@property (readonly) int32_t number __attribute__((swift_name("number")));
@property (readonly) MPLPluralsResource *pluralsRes __attribute__((swift_name("pluralsRes")));
- (instancetype)initWithPluralsRes:(MPLPluralsResource *)pluralsRes number:(int32_t)number args:(NSArray<id> *)args __attribute__((swift_name("init(pluralsRes:number:args:)"))) __attribute__((objc_designated_initializer));
- (MPLPluralFormattedStringDesc *)doCopyPluralsRes:(MPLPluralsResource *)pluralsRes number:(int32_t)number args:(NSArray<id> *)args __attribute__((swift_name("doCopy(pluralsRes:number:args:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)localized __attribute__((swift_name("localized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluralStringDesc")))
@interface MPLPluralStringDesc : MPLBase <MPLStringDesc>
@property (readonly) int32_t number __attribute__((swift_name("number")));
@property (readonly) MPLPluralsResource *pluralsRes __attribute__((swift_name("pluralsRes")));
- (instancetype)initWithPluralsRes:(MPLPluralsResource *)pluralsRes number:(int32_t)number __attribute__((swift_name("init(pluralsRes:number:)"))) __attribute__((objc_designated_initializer));
- (MPLPluralStringDesc *)doCopyPluralsRes:(MPLPluralsResource *)pluralsRes number:(int32_t)number __attribute__((swift_name("doCopy(pluralsRes:number:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)localized __attribute__((swift_name("localized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RawStringDesc")))
@interface MPLRawStringDesc : MPLBase <MPLStringDesc>
@property (readonly) NSString *string __attribute__((swift_name("string")));
- (instancetype)initWithString:(NSString *)string __attribute__((swift_name("init(string:)"))) __attribute__((objc_designated_initializer));
- (MPLRawStringDesc *)doCopyString:(NSString *)string __attribute__((swift_name("doCopy(string:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)localized __attribute__((swift_name("localized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceFormattedStringDesc")))
@interface MPLResourceFormattedStringDesc : MPLBase <MPLStringDesc>
@property (readonly) NSArray<id> *args __attribute__((swift_name("args")));
@property (readonly) MPLStringResource *stringRes __attribute__((swift_name("stringRes")));
- (instancetype)initWithStringRes:(MPLStringResource *)stringRes args:(NSArray<id> *)args __attribute__((swift_name("init(stringRes:args:)"))) __attribute__((objc_designated_initializer));
- (MPLResourceFormattedStringDesc *)doCopyStringRes:(MPLStringResource *)stringRes args:(NSArray<id> *)args __attribute__((swift_name("doCopy(stringRes:args:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)localized __attribute__((swift_name("localized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceStringDesc")))
@interface MPLResourceStringDesc : MPLBase <MPLStringDesc>
@property (readonly) MPLStringResource *stringRes __attribute__((swift_name("stringRes")));
- (instancetype)initWithStringRes:(MPLStringResource *)stringRes __attribute__((swift_name("init(stringRes:)"))) __attribute__((objc_designated_initializer));
- (MPLResourceStringDesc *)doCopyStringRes:(MPLStringResource *)stringRes __attribute__((swift_name("doCopy(stringRes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)localized __attribute__((swift_name("localized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringDescCompanion")))
@interface MPLStringDescCompanion : MPLBase
@property (class, readonly, getter=shared) MPLStringDescCompanion *shared __attribute__((swift_name("shared")));
@property MPLStringDescLocaleType *localeType __attribute__((swift_name("localeType")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("StringDescLocaleType")))
@interface MPLStringDescLocaleType : MPLBase
@property (readonly) NSLocale *locale __attribute__((swift_name("locale")));
- (NSBundle *)getLocaleBundleRootBundle:(NSBundle *)rootBundle __attribute__((swift_name("getLocaleBundle(rootBundle:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringDescLocaleType.Custom")))
@interface MPLStringDescLocaleTypeCustom : MPLStringDescLocaleType
@property (readonly) NSLocale *locale __attribute__((swift_name("locale")));
- (instancetype)initWithLocale:(NSString *)locale __attribute__((swift_name("init(locale:)"))) __attribute__((objc_designated_initializer));
- (NSBundle *)getLocaleBundleRootBundle:(NSBundle *)rootBundle __attribute__((swift_name("getLocaleBundle(rootBundle:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringDescLocaleType.System")))
@interface MPLStringDescLocaleTypeSystem : MPLStringDescLocaleType
@property (class, readonly, getter=shared) MPLStringDescLocaleTypeSystem *shared __attribute__((swift_name("shared")));
@property (readonly) NSLocale *locale __attribute__((swift_name("locale")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)system __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSBundle *)getLocaleBundleRootBundle:(NSBundle *)rootBundle __attribute__((swift_name("getLocaleBundle(rootBundle:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Utils")))
@interface MPLUtils : MPLBase
@property (class, readonly, getter=shared) MPLUtils *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *BASE_LOCALIZATION __attribute__((swift_name("BASE_LOCALIZATION")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)utils __attribute__((swift_name("init()")));
- (NSString *)localizedStringStringRes:(MPLStringResource *)stringRes __attribute__((swift_name("localizedString(stringRes:)")));
- (MPLKotlinArray<id> *)processArgsArgs:(NSArray<id> *)args __attribute__((swift_name("processArgs(args:)")));
- (NSString *)stringWithFormatFormat:(NSString *)format args:(MPLKotlinArray<id> *)args __attribute__((swift_name("stringWithFormat(format:args:)")));
@end

__attribute__((swift_name("ColorDesc")))
@protocol MPLColorDesc
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorDescCompanion")))
@interface MPLColorDescCompanion : MPLBase
@property (class, readonly, getter=shared) MPLColorDescCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorDescResource")))
@interface MPLColorDescResource : MPLBase <MPLColorDesc>
@property (readonly) MPLColorResource *resource __attribute__((swift_name("resource")));
- (instancetype)initWithResource:(MPLColorResource *)resource __attribute__((swift_name("init(resource:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorDescSingle")))
@interface MPLColorDescSingle : MPLBase <MPLColorDesc>
@property (readonly) MPLGraphicsColor *color __attribute__((swift_name("color")));
- (instancetype)initWithColor:(MPLGraphicsColor *)color __attribute__((swift_name("init(color:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorDescThemed")))
@interface MPLColorDescThemed : MPLBase <MPLColorDesc>
@property (readonly) MPLGraphicsColor *darkColor __attribute__((swift_name("darkColor")));
@property (readonly) MPLGraphicsColor *lightColor __attribute__((swift_name("lightColor")));
- (instancetype)initWithLightColor:(MPLGraphicsColor *)lightColor darkColor:(MPLGraphicsColor *)darkColor __attribute__((swift_name("init(lightColor:darkColor:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("ImageDesc")))
@protocol MPLImageDesc
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageDescCompanion")))
@interface MPLImageDescCompanion : MPLBase
@property (class, readonly, getter=shared) MPLImageDescCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageDescResource")))
@interface MPLImageDescResource : MPLBase <MPLImageDesc>
@property (readonly) MPLImageResource *resource __attribute__((swift_name("resource")));
- (instancetype)initWithResource:(MPLImageResource *)resource __attribute__((swift_name("init(resource:)"))) __attribute__((objc_designated_initializer));
- (MPLImageDescResource *)doCopyResource:(MPLImageResource *)resource __attribute__((swift_name("doCopy(resource:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageDescUrl")))
@interface MPLImageDescUrl : MPLBase <MPLImageDesc>
@property (readonly) NSString *url __attribute__((swift_name("url")));
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (MPLImageDescUrl *)doCopyUrl:(NSString *)url __attribute__((swift_name("doCopy(url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphicsColor")))
@interface MPLGraphicsColor : MPLBase
@property (class, readonly, getter=companion) MPLGraphicsColorCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t alpha __attribute__((swift_name("alpha")));
@property (readonly) int64_t argb __attribute__((swift_name("argb")));
@property (readonly) int32_t blue __attribute__((swift_name("blue")));
@property (readonly) int32_t green __attribute__((swift_name("green")));
@property (readonly) int32_t red __attribute__((swift_name("red")));
@property (readonly) int64_t rgba __attribute__((swift_name("rgba")));
- (instancetype)initWithColorRGBA:(int64_t)colorRGBA __attribute__((swift_name("init(colorRGBA:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithRed:(int32_t)red green:(int32_t)green blue:(int32_t)blue alpha:(int32_t)alpha __attribute__((swift_name("init(red:green:blue:alpha:)"))) __attribute__((objc_designated_initializer));
- (MPLGraphicsColor *)doCopyRed:(int32_t)red green:(int32_t)green blue:(int32_t)blue alpha:(int32_t)alpha __attribute__((swift_name("doCopy(red:green:blue:alpha:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

@interface MPLGraphicsColor (Extensions)
- (id<MPLColorDesc>)asColorDesc __attribute__((swift_name("asColorDesc()")));
@end

@interface MPLColorResource (Extensions)
- (id<MPLColorDesc>)asColorDesc __attribute__((swift_name("asColorDesc()")));
- (UIColor *)getUIColor __attribute__((swift_name("getUIColor()")));
@end

@interface MPLFontResource (Extensions)
- (UIFont *)uiFontWithSize:(double)withSize __attribute__((swift_name("uiFont(withSize:)")));
@end

@interface MPLImageResource (Extensions)
- (id<MPLImageDesc>)asImageDesc __attribute__((swift_name("asImageDesc()")));
@end

@interface MPLPluralsResource (Extensions)
- (MPLPluralStringDesc *)descNumber:(int32_t)number __attribute__((swift_name("desc(number:)")));
- (MPLPluralFormattedStringDesc *)formatNumber:(int32_t)number args:(MPLKotlinArray<id> *)args __attribute__((swift_name("format(number:args:)")));
- (MPLPluralFormattedStringDesc *)formatNumber:(int32_t)number args_:(NSArray<id> *)args __attribute__((swift_name("format(number:args_:)")));
@end

@interface MPLStringResource (Extensions)
- (MPLResourceStringDesc *)desc __attribute__((swift_name("desc()")));
- (MPLResourceFormattedStringDesc *)formatArgs:(MPLKotlinArray<id> *)args __attribute__((swift_name("format(args:)")));
- (MPLResourceFormattedStringDesc *)formatArgs_:(NSArray<id> *)args __attribute__((swift_name("format(args_:)")));
@end

@interface MPLStringDescCompanion (Extensions)
- (MPLCompositionStringDesc *)CompositionArgs:(id)args separator:(NSString * _Nullable)separator __attribute__((swift_name("Composition(args:separator:)")));
- (MPLPluralStringDesc *)PluralPluralsRes:(MPLPluralsResource *)pluralsRes number:(int32_t)number __attribute__((swift_name("Plural(pluralsRes:number:)")));
- (MPLPluralFormattedStringDesc *)PluralFormattedPluralsRes:(MPLPluralsResource *)pluralsRes number:(int32_t)number args:(MPLKotlinArray<id> *)args __attribute__((swift_name("PluralFormatted(pluralsRes:number:args:)")));
- (MPLPluralFormattedStringDesc *)PluralFormattedPluralsRes:(MPLPluralsResource *)pluralsRes number:(int32_t)number args_:(NSArray<id> *)args __attribute__((swift_name("PluralFormatted(pluralsRes:number:args_:)")));
- (MPLRawStringDesc *)RawString:(NSString *)string __attribute__((swift_name("Raw(string:)")));
- (MPLResourceStringDesc *)ResourceStringRes:(MPLStringResource *)stringRes __attribute__((swift_name("Resource(stringRes:)")));
- (MPLResourceFormattedStringDesc *)ResourceFormattedStringRes:(MPLStringResource *)stringRes args:(MPLKotlinArray<id> *)args __attribute__((swift_name("ResourceFormatted(stringRes:args:)")));
- (MPLResourceFormattedStringDesc *)ResourceFormattedStringRes:(MPLStringResource *)stringRes args_:(NSArray<id> *)args __attribute__((swift_name("ResourceFormatted(stringRes:args_:)")));
@end

@interface MPLColorDescCompanion (Extensions)
- (id<MPLColorDesc>)ResourceResource:(MPLColorResource *)resource __attribute__((swift_name("Resource(resource:)")));
- (id<MPLColorDesc>)SingleColor:(MPLGraphicsColor *)color __attribute__((swift_name("Single(color:)")));
- (id<MPLColorDesc>)ThemedLightColor:(MPLGraphicsColor *)lightColor darkColor:(MPLGraphicsColor *)darkColor __attribute__((swift_name("Themed(lightColor:darkColor:)")));
@end

@interface MPLImageDescCompanion (Extensions)
- (id<MPLImageDesc>)ResourceResource:(MPLImageResource *)resource __attribute__((swift_name("Resource(resource:)")));
- (id<MPLImageDesc>)UrlUrl:(NSString *)url __attribute__((swift_name("Url(url:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BindingBaseKt")))
@interface MPLBindingBaseKt : MPLBase
+ (id<MPLDisposableHandle>)bind:(id)receiver flow:(MPLCStateFlow<id> *)flow setter:(void (^)(id, id _Nullable))setter __attribute__((swift_name("bind(_:flow:setter:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CFlowKt")))
@interface MPLCFlowKt : MPLBase
+ (MPLCFlow<id> *)cFlow:(id<MPLKotlinx_coroutines_coreFlow>)receiver __attribute__((swift_name("cFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CMutableStateFlowKt")))
@interface MPLCMutableStateFlowKt : MPLBase
+ (MPLCMutableStateFlow<id> *)cMutableStateFlow:(id<MPLKotlinx_coroutines_coreMutableStateFlow>)receiver __attribute__((swift_name("cMutableStateFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CStateFlowKt")))
@interface MPLCStateFlowKt : MPLBase
+ (MPLCStateFlow<id> *)cStateFlow:(id<MPLKotlinx_coroutines_coreStateFlow>)receiver __attribute__((swift_name("cStateFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorDescExtKt")))
@interface MPLColorDescExtKt : MPLBase
+ (UIColor *)getUIColor:(id<MPLColorDesc>)receiver __attribute__((swift_name("getUIColor(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisposableHandleKt")))
@interface MPLDisposableHandleKt : MPLBase
+ (id<MPLDisposableHandle>)DisposableHandleBlock:(void (^)(void))block __attribute__((swift_name("DisposableHandle(block:)")));
+ (id<MPLDisposableHandle>)plus:(id<MPLDisposableHandle>)receiver other:(id<MPLDisposableHandle>)other __attribute__((swift_name("plus(_:other:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageDescUrlKt")))
@interface MPLImageDescUrlKt : MPLBase
+ (id<MPLImageDesc>)asImageUrl:(NSString *)receiver __attribute__((swift_name("asImageUrl(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSBundleExtKt")))
@interface MPLNSBundleExtKt : MPLBase
@property (class) BOOL isBundleSearchLogEnabled __attribute__((swift_name("isBundleSearchLogEnabled")));
+ (NSBundle *)loadableBundle:(Class)receiver identifier:(NSString *)identifier __attribute__((swift_name("loadableBundle(_:identifier:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSNotificationCenterExtKt")))
@interface MPLNSNotificationCenterExtKt : MPLBase
+ (id<MPLDisposableHandle>)setEventHandler:(NSNotificationCenter *)receiver notification:(NSString * _Nullable)notification ref:(id)ref lambda:(void (^)(id))lambda __attribute__((swift_name("setEventHandler(_:notification:ref:lambda:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface MPLPlatform_iosKt : MPLBase
+ (id<MPLPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceContainerExtKt")))
@interface MPLResourceContainerExtKt : MPLBase
+ (MPLAssetResource * _Nullable)getAssetByFilePath:(id<MPLResourceContainer>)receiver filePath:(NSString *)filePath __attribute__((swift_name("getAssetByFilePath(_:filePath:)")));
+ (MPLImageResource * _Nullable)getImageByFileName:(id<MPLResourceContainer>)receiver fileName:(NSString *)fileName __attribute__((swift_name("getImageByFileName(_:fileName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringDescKt")))
@interface MPLStringDescKt : MPLBase
+ (MPLRawStringDesc *)desc:(NSString *)receiver __attribute__((swift_name("desc(_:)")));
+ (id<MPLStringDesc>)joinToStringDesc:(id)receiver separator:(NSString *)separator __attribute__((swift_name("joinToStringDesc(_:separator:)")));
+ (id<MPLStringDesc>)plus:(id<MPLStringDesc>)receiver other:(id<MPLStringDesc>)other __attribute__((swift_name("plus(_:other:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIButtonBindingsKt")))
@interface MPLUIButtonBindingsKt : MPLBase
+ (id<MPLDisposableHandle>)bindImage:(UIButton *)receiver flow:(MPLCStateFlow<MPLBoolean *> *)flow trueImage:(UIImage *)trueImage falseImage:(UIImage *)falseImage __attribute__((swift_name("bindImage(_:flow:trueImage:falseImage:)")));
+ (id<MPLDisposableHandle>)bindTitle:(UIButton *)receiver flow:(MPLCStateFlow<NSString *> *)flow __attribute__((swift_name("bindTitle(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIControlBindingsKt")))
@interface MPLUIControlBindingsKt : MPLBase
+ (id<MPLDisposableHandle>)bindEnabled:(UIControl *)receiver flow:(MPLCStateFlow<MPLBoolean *> *)flow __attribute__((swift_name("bindEnabled(_:flow:)")));
+ (id<MPLDisposableHandle>)bindFocusTwoWay:(UIControl *)receiver flow:(MPLCMutableStateFlow<MPLBoolean *> *)flow __attribute__((swift_name("bindFocusTwoWay(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIControlExtKt")))
@interface MPLUIControlExtKt : MPLBase
+ (id<MPLDisposableHandle>)setEventHandler:(UIControl *)receiver event:(uint64_t)event lambda:(void (^)(UIControl *))lambda __attribute__((swift_name("setEventHandler(_:event:lambda:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UILabelBindingsKt")))
@interface MPLUILabelBindingsKt : MPLBase
+ (id<MPLDisposableHandle>)bindText:(UILabel *)receiver flow:(MPLCStateFlow<NSString *> *)flow __attribute__((swift_name("bindText(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UISwitchBindingsKt")))
@interface MPLUISwitchBindingsKt : MPLBase
+ (id<MPLDisposableHandle>)bindSwitchOn:(UISwitch *)receiver flow:(MPLCStateFlow<MPLBoolean *> *)flow __attribute__((swift_name("bindSwitchOn(_:flow:)")));
+ (id<MPLDisposableHandle>)bindSwitchOnTwoWay:(UISwitch *)receiver flow:(MPLCMutableStateFlow<MPLBoolean *> *)flow __attribute__((swift_name("bindSwitchOnTwoWay(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UITextFieldBindingsKt")))
@interface MPLUITextFieldBindingsKt : MPLBase
+ (id<MPLDisposableHandle>)bindText:(UITextField *)receiver flow:(MPLCStateFlow<NSString *> *)flow __attribute__((swift_name("bindText(_:flow:)")));
+ (id<MPLDisposableHandle>)bindTextTwoWay:(UITextField *)receiver flow:(MPLCMutableStateFlow<NSString *> *)flow __attribute__((swift_name("bindTextTwoWay(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UITextViewBindingsKt")))
@interface MPLUITextViewBindingsKt : MPLBase
+ (id<MPLDisposableHandle>)bindFocusTwoWay:(UITextView *)receiver flow:(MPLCMutableStateFlow<MPLBoolean *> *)flow __attribute__((swift_name("bindFocusTwoWay(_:flow:)")));
+ (id<MPLDisposableHandle>)bindText:(UITextView *)receiver flow:(MPLCStateFlow<NSString *> *)flow __attribute__((swift_name("bindText(_:flow:)")));
+ (id<MPLDisposableHandle>)bindTextTwoWay:(UITextView *)receiver flow:(MPLCMutableStateFlow<NSString *> *)flow __attribute__((swift_name("bindTextTwoWay(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIViewBindingsKt")))
@interface MPLUIViewBindingsKt : MPLBase
+ (id<MPLDisposableHandle>)bindBackgroundColor:(UIView *)receiver flow:(MPLCStateFlow<MPLBoolean *> *)flow trueColor:(UIColor *)trueColor falseColor:(UIColor *)falseColor __attribute__((swift_name("bindBackgroundColor(_:flow:trueColor:falseColor:)")));
+ (id<MPLDisposableHandle>)bindFocus:(UIView *)receiver flow:(MPLCStateFlow<MPLBoolean *> *)flow __attribute__((swift_name("bindFocus(_:flow:)")));
+ (id<MPLDisposableHandle>)bindHidden:(UIView *)receiver flow:(MPLCStateFlow<MPLBoolean *> *)flow __attribute__((swift_name("bindHidden(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__SkieSuspendWrappersKt")))
@interface MPL__SkieSuspendWrappersKt : MPLBase
+ (void)Skie_Suspend__0__emitDispatchReceiver:(id<MPLKotlinx_coroutines_coreFlowCollector>)dispatchReceiver value:(id _Nullable)value suspendHandler:(MPLSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__0__emit(dispatchReceiver:value:suspendHandler:)")));
+ (void)Skie_Suspend__1__collectDispatchReceiver:(id<MPLKotlinx_coroutines_coreFlow>)dispatchReceiver collector:(id<MPLKotlinx_coroutines_coreFlowCollector>)collector suspendHandler:(MPLSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__1__collect(dispatchReceiver:collector:suspendHandler:)")));
+ (void)Skie_Suspend__2__hasNextDispatchReceiver:(MPLSkieColdFlowIterator<id> *)dispatchReceiver suspendHandler:(MPLSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__2__hasNext(dispatchReceiver:suspendHandler:)")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface MPLKotlinRuntimeException : MPLKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MPLKotlinIllegalStateException : MPLKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface MPLKotlinCancellationException : MPLKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol MPLKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol MPLKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<MPLKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol MPLKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MPLKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MPLKotlinCoroutineContextElement> _Nullable)getKey:(id<MPLKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<MPLKotlinCoroutineContext>)minusKeyKey:(id<MPLKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MPLKotlinCoroutineContext>)plusContext:(id<MPLKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol MPLKotlinCoroutineContextElement <MPLKotlinCoroutineContext>
@required
@property (readonly) id<MPLKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface MPLKotlinAbstractCoroutineContextElement : MPLBase <MPLKotlinCoroutineContextElement>
@property (readonly) id<MPLKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
- (instancetype)initWithKey:(id<MPLKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol MPLKotlinContinuationInterceptor <MPLKotlinCoroutineContextElement>
@required
- (id<MPLKotlinContinuation>)interceptContinuationContinuation:(id<MPLKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<MPLKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface MPLKotlinx_coroutines_coreCoroutineDispatcher : MPLKotlinAbstractCoroutineContextElement <MPLKotlinContinuationInterceptor>
@property (class, readonly, getter=companion) MPLKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<MPLKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<MPLKotlinCoroutineContext>)context block:(id<MPLKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<MPLKotlinCoroutineContext>)context block:(id<MPLKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<MPLKotlinContinuation>)interceptContinuationContinuation:(id<MPLKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<MPLKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (MPLKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (MPLKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(MPLKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<MPLKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinObjCErrorException")))
@interface MPLKotlinObjCErrorException : MPLKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message error:(id)error __attribute__((swift_name("init(message:error:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MPLKotlinArray<T> : MPLBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MPLInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MPLKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphicsColor.Companion")))
@interface MPLGraphicsColorCompanion : MPLBase
@property (class, readonly, getter=shared) MPLGraphicsColorCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol MPLKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol MPLKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<MPLKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface MPLKotlinAbstractCoroutineContextKey<B, E> : MPLBase <MPLKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<MPLKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<MPLKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface MPLKotlinx_coroutines_coreCoroutineDispatcherKey : MPLKotlinAbstractCoroutineContextKey<id<MPLKotlinContinuationInterceptor>, MPLKotlinx_coroutines_coreCoroutineDispatcher *>
@property (class, readonly, getter=shared) MPLKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<MPLKotlinCoroutineContextKey>)baseKey safeCast:(id<MPLKotlinCoroutineContextElement> _Nullable (^)(id<MPLKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MPLKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END

@import UIKit;