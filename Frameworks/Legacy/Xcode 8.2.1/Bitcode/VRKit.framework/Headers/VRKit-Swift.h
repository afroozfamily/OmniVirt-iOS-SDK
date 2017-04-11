// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
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

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import Darwin;
@import Foundation;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
typedef SWIFT_ENUM(NSInteger, AdState) {
  AdStateNone = 1,
  AdStateLoading = 2,
  AdStateReady = 4,
  AdStateShowing = 5,
  AdStateCompleted = 6,
  AdStateFailed = 0,
};

typedef SWIFT_ENUM(NSInteger, Feature) {
  FeatureCardboard = 2,
  FeatureGyroscope = 1,
};

enum Mode : NSInteger;
@class VRPlayer;
@protocol VRPlayerDelegate;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC5VRKit18FullscreenVRPlayer")
@interface FullscreenVRPlayer : UIViewController
+ (FullscreenVRPlayer * _Nonnull)createWithContentID:(uint)contentID andAutoplay:(BOOL)autoplay andCardboardMode:(enum Mode)mode;
- (void)viewDidLoad;
- (void)dismissViewControllerAnimated:(BOOL)flag completion:(void (^ _Nullable)(void))completion;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly, strong) VRPlayer * _Nullable player;
@property (nonatomic) uint contentID;
@property (nonatomic) BOOL autoplay;
@property (nonatomic) enum Mode cardboard;
@property (nonatomic, strong) id <VRPlayerDelegate> _Nullable delegate;
@property (nonatomic, copy) NSString * _Nullable middleman;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, Mode) {
  ModeOn = 1,
  ModeOff = 0,
};

typedef SWIFT_ENUM(NSInteger, Quality) {
  QualityQuality4K = 4,
  QualityQualityFullHD = 3,
  QualityQualityHD = 2,
  QualityQualitySD = 1,
};

@class VRAd;

SWIFT_PROTOCOL("_TtP5VRKit12VRAdDelegate_")
@protocol VRAdDelegate
- (void)adStatusChangedWithAd:(VRAd * _Nonnull)withAd andStatus:(enum AdState)andStatus;
@end


SWIFT_CLASS("_TtC5VRKit4VRAd")
@interface VRAd : UIViewController <VRAdDelegate>
+ (VRAd * _Nonnull)createWithAdSpaceID:(uint)adSpaceID andViewController:(UIViewController * _Nonnull)controller andListener:(id <VRAdDelegate> _Nonnull)listener;
- (void)viewDidLoad;
- (void)load;
- (void)unload;
- (void)showWithCardboardMode:(enum Mode)mode;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
@property (nonatomic, readonly) BOOL shouldAutorotate;
- (void)adStatusChangedWithAd:(VRAd * _Nonnull)ad andStatus:(enum AdState)status;
@property (nonatomic, readonly) enum AdState status;
@property (nonatomic, strong) id <VRAdDelegate> _Nullable delegate;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@class UIWebView;

SWIFT_CLASS("_TtC5VRKit8VRPlayer")
@interface VRPlayer : UIView <UIWebViewDelegate>
+ (VRPlayer * _Nonnull)create;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (void)loadWithContentID:(uint)contentID;
- (void)loadWithContentID:(uint)contentID andMiddlemanFileURL:(NSString * _Nonnull)middleman;
- (void)unload;
- (void)play;
- (void)pause;
- (void)expand;
- (void)collapse;
- (void)back;
- (void)skip;
@property (nonatomic) enum Mode cardboard;
@property (nonatomic) double audio;
@property (nonatomic) enum Mode interface;
- (void)enableWithFeature:(enum Feature)feature;
- (void)disableWithFeature:(enum Feature)feature;
- (void)switchSceneWithName:(NSString * _Nonnull)name;
- (void)sendMessageWithType:(NSString * _Nonnull)type andValue:(id _Nullable)value;
@property (nonatomic, strong) id <VRPlayerDelegate> _Nullable delegate;
- (BOOL)webView:(UIWebView * _Nonnull)webView shouldStartLoadWithRequest:(NSURLRequest * _Nonnull)request navigationType:(UIWebViewNavigationType)navigationType;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_PROTOCOL("_TtP5VRKit16VRPlayerDelegate_")
@protocol VRPlayerDelegate
- (void)playerLoaded:(VRPlayer * _Nonnull)player withMaximumQuality:(NSInteger)maximum andCurrentQuality:(enum Quality)current andCardboardMode:(enum Mode)mode;
- (void)playerStarted:(VRPlayer * _Nonnull)player;
- (void)playerPaused:(VRPlayer * _Nonnull)player;
- (void)playerEnded:(VRPlayer * _Nonnull)player;
- (void)playerSkipped:(VRPlayer * _Nonnull)player;
- (void)playerDurationChanged:(VRPlayer * _Nonnull)player withValue:(double)value;
- (void)playerProgressChanged:(VRPlayer * _Nonnull)player withValue:(double)value;
- (void)playerBufferChanged:(VRPlayer * _Nonnull)player withValue:(double)value;
- (void)playerSeekChanged:(VRPlayer * _Nonnull)player withValue:(double)value;
- (void)playerCardboardChanged:(VRPlayer * _Nonnull)player withMode:(enum Mode)value;
- (void)playerAudioChanged:(VRPlayer * _Nonnull)player withLevel:(double)value;
- (void)playerQualityChanged:(VRPlayer * _Nonnull)player withQuality:(enum Quality)value;
- (void)playerExpanded:(VRPlayer * _Nonnull)player;
- (void)playerCollapsed:(VRPlayer * _Nonnull)player;
- (void)playerLatitudeChanged:(VRPlayer * _Nonnull)player withLatitude:(double)value;
- (void)playerLongitudeChanged:(VRPlayer * _Nonnull)player withLongitude:(double)value;
- (void)playerSwitched:(VRPlayer * _Nonnull)player withScene:(NSString * _Nonnull)name withHistory:(NSArray<NSString *> * _Nonnull)history;
@end

#pragma clang diagnostic pop
