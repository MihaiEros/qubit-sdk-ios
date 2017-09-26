// Generated by Apple Swift version 4.0 (swiftlang-900.0.63.10 clang-900.0.36)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import ObjectiveC;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("QubitSDK")
typedef SWIFT_ENUM(NSInteger, QBLogLevel) {
  QBLogLevelDisabled = 0,
  QBLogLevelError = 1,
  QBLogLevelInfo = 2,
  QBLogLevelDebug = 3,
  QBLogLevelVerbose = 4,
  QBLogLevelWarning = 5,
};


SWIFT_CLASS("_TtC8QubitSDK13QBTrackerInit")
@interface QBTrackerInit : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8QubitSDK16QBTrackerManager")
@interface QBTrackerManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) QBTrackerManager * _Nonnull sharedManager;)
+ (QBTrackerManager * _Nonnull)sharedManager SWIFT_WARN_UNUSED_RESULT;
- (void)setTrackingId:(NSString * _Nonnull)trackingId SWIFT_UNAVAILABLE_MSG("this method is unavailable at new version of SDK, please use [QubitSDK startWithTrackingId:logLevel:]/QubitSDK.start(withTrackingId)");
- (void)setDebugEndpoint:(NSString * _Nonnull)endPointUrl SWIFT_UNAVAILABLE_MSG("this method is unavailable at new version of SDK");
- (void)unsubscribeToTracking SWIFT_UNAVAILABLE_MSG("this method is unavailable at new version of SDK, please use [QubitSDK stopTracking]/QubitSDK.stopTracking()");
- (void)subscribeToTracking SWIFT_UNAVAILABLE_MSG("this method is unavailable at new version of SDK, please use [QubitSDK startWithTrackingId:logLevel:]/QubitSDK.start(withTrackingId)");
- (void)dispatchEvent:(NSString * _Nonnull)type withData:(NSDictionary<NSString *, id> * _Nonnull)withData SWIFT_DEPRECATED_MSG("will be removed in next version of SDK, please use [QubitSDK sendEventWithType:dictionary:]/QubitSDK.sendEvent(type,dictionary)");
- (void)dispatchEvent:(NSString * _Nonnull)type withStringData:(NSString * _Nonnull)withStringData SWIFT_DEPRECATED_MSG("will be removed in next version of SDK, please use [QubitSDK sendEventWithType:data:]/QubitSDK.sendEvent(type,data)");
- (void)dispatchSessionEvent:(NSTimeInterval)startTimeStamp withEnd:(NSTimeInterval)withEnd SWIFT_UNAVAILABLE_MSG("this method is unavailable at new version of SDK");
- (NSString * _Nonnull)getUserID SWIFT_WARN_UNUSED_RESULT SWIFT_UNAVAILABLE_MSG("this method is unavailable at new version of SDK");
- (void)setStashInfo:(NSString * _Nonnull)data key:(NSString * _Nonnull)key withCallback:(SWIFT_NOESCAPE void (^ _Nonnull)(NSInteger))withCallback SWIFT_UNAVAILABLE_MSG("this method is unavailable at new version of SDK");
- (void)setStashInfo:(NSString * _Nonnull)key withCallback:(SWIFT_NOESCAPE void (^ _Nonnull)(NSInteger, NSString * _Nonnull))withCallback SWIFT_UNAVAILABLE_MSG("this method is unavailable at new version of SDK");
- (void)setStashInfoMultiple:(NSArray<NSString *> * _Nonnull)userkeys withCallback:(SWIFT_NOESCAPE void (^ _Nonnull)(NSInteger, NSDictionary<NSString *, id> * _Nonnull))withCallback SWIFT_UNAVAILABLE_MSG("this method is unavailable at new version of SDK");
- (void)getSegmentMembershipInfo:(NSString * _Nonnull)userId withCallback:(SWIFT_NOESCAPE void (^ _Nonnull)(NSInteger, NSArray<NSString *> * _Nonnull))withCallback SWIFT_UNAVAILABLE_MSG("this method is unavailable at new version of SDK");
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8QubitSDK8QubitSDK")
@interface QubitSDK : NSObject
/// Start the QubitSDK
/// \param id trackingId
///
/// \param logLevel QBLogLevel, default = .disabled
///
+ (void)startWithTrackingId:(NSString * _Nonnull)id logLevel:(enum QBLogLevel)logLevel;
/// Send and event
/// \param type eventType
///
/// \param data JSONString of event data
///
+ (void)sendEventWithType:(NSString * _Nonnull)type data:(NSString * _Nonnull)data;
/// Send and event
/// \param type eventType
///
/// \param dictionary event representing by dictionary
///
+ (void)sendEventWithType:(NSString * _Nonnull)type dictionary:(NSDictionary<NSString *, id> * _Nonnull)dictionary;
/// Send and event
/// \param type eventType
///
/// \param event QBEventEntity
///
+ (void)sendEventWithEvent:(id _Nullable)event;
/// Create event
/// \param type eventType
///
/// \param data json String
///
+ (id _Nullable)createEventWithType:(NSString * _Nonnull)type data:(NSString * _Nonnull)data SWIFT_WARN_UNUSED_RESULT;
/// Create event
/// \param type eventType
///
/// \param event QBEventEntity
///
+ (id _Nullable)createEventWithType:(NSString * _Nonnull)type dictionary:(NSDictionary<NSString *, id> * _Nonnull)dictionary SWIFT_WARN_UNUSED_RESULT;
/// Stop tracking
+ (void)stopTracking;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end





SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop