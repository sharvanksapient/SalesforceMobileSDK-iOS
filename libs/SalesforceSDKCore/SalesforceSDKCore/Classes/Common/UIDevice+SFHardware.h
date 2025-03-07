/*
 Erica Sadun, http://ericasadun.com
 iPhone Developer's Cookbook, 6.x Edition
 BSD License, Use at your own risk
 */

#import <UIKit/UIKit.h>
#import <SalesforceSDKCore/SalesforceSDKConstants.h>

#define IFPGA_NAMESTRING                @"iFPGA"

#define IPHONE_1G_NAMESTRING            @"iPhone 1G"
#define IPHONE_3G_NAMESTRING            @"iPhone 3G"
#define IPHONE_3GS_NAMESTRING           @"iPhone 3GS"
#define IPHONE_4_NAMESTRING             @"iPhone 4"
#define IPHONE_4S_NAMESTRING            @"iPhone 4S"
#define IPHONE_5_NAMESTRING             @"iPhone 5"
#define IPHONE_5C_NAMESTRING            @"iPhone 5C"
#define IPHONE_5S_NAMESTRING            @"iPhone 5S"
#define IPHONE_6_NAMESTRING             @"iPhone 6"
#define IPHONE_6P_NAMESTRING            @"iPhone 6+"
#define IPHONE_6s_NAMESTRING            @"iPhone 6s"
#define IPHONE_6sP_NAMESTRING           @"iPhone 6s+"
#define IPHONE_SE_NAMESTRING            @"iPhone SE"
#define IPHONE_7_NAMESTRING             @"iPhone 7"
#define IPHONE_7P_NAMESTRING            @"iPhone 7+"
#define IPHONE_8_NAMESTRING             @"iPhone 8"
#define IPHONE_8P_NAMESTRING            @"iPhone 8+"
#define IPHONE_X_NAMESTRING             @"iPhone X"
#define IPHONE_XS_NAMESTRING            @"iPhone XS"
#define IPHONE_XSMAX_NAMESTRING         @"iPhone XS Max"
#define IPHONE_XR_NAMESTRING            @"iPhone XR"

#define IPHONE_UNKNOWN_NAMESTRING       @"Unknown iPhone"

#define IPOD_1G_NAMESTRING              @"iPod touch 1G"
#define IPOD_2G_NAMESTRING              @"iPod touch 2G"
#define IPOD_3G_NAMESTRING              @"iPod touch 3G"
#define IPOD_4G_NAMESTRING              @"iPod touch 4G"
#define IPOD_5G_NAMESTRING              @"iPod Touch 5"
#define IPOD_6G_NAMESTRING              @"iPod Touch 6"
#define IPOD_UNKNOWN_NAMESTRING         @"Unknown iPod"

#define IPAD_1G_NAMESTRING              @"iPad 1G"
#define IPAD_2G_NAMESTRING              @"iPad 2G"
#define IPAD_3G_NAMESTRING              @"iPad 3G"
#define IPAD_4G_NAMESTRING              @"iPad 4G"
#define IPAD_5G_NAMESTRING              @"iPad 5G"
#define IPAD_6G_NAMESTRING              @"iPad 6G"
#define IPAD_AIR_1G_NAMESTRING          @"iPad Air 1G"
#define IPAD_AIR_2G_NAMESTRING          @"iPad Air 2G"
#define IPAD_PRO_9_7_INCH_NAMESTRING    @"iPad Pro (9.7 inch)"
#define IPAD_PRO_12_9_INCH_NAMESTRING   @"iPad Pro (12.9 inch)"
#define IPAD_PRO_12_9_2G_INCH_NAMESTRING   @"iPad Pro (12.9 inch) (2nd generation)"
#define IPAD_PRO_12_9_3G_INCH_NAMESTRING   @"iPad Pro (12.9 inch) (3rd generation)"
#define IPAD_PRO_10_5_INCH_NAMESTRING   @"iPad Pro (10.5 inch)"
#define IPAD_PRO_11_INCH_NAMESTRING     @"iPad Pro (11-inch)"



#define IPAD_UNKNOWN_NAMESTRING         @"Unknown iPad"

#define IPAD_MINI_1G_NAMESTRING         @"iPad mini 1G"
#define IPAD_MINI_2G_NAMESTRING         @"iPad mini 2G"
#define IPAD_MINI_3G_NAMESTRING         @"iPad mini 3G"
#define IPAD_MINI_4G_NAMESTRING         @"iPad mini 5G"

#define APPLETV_2G_NAMESTRING           @"Apple TV 2G"
#define APPLETV_3G_NAMESTRING           @"Apple TV 3G"
#define APPLETV_4G_NAMESTRING           @"Apple TV 4G"
#define APPLETV_4K_NAMESTRING           @"APPLE TV 4K"
#define APPLETV_UNKNOWN_NAMESTRING      @"Unknown Apple TV"

#define IOS_FAMILY_UNKNOWN_DEVICE       @"Unknown iOS device"

#define SIMULATOR_NAMESTRING            @"iPhone Simulator"
#define SIMULATOR_IPHONE_NAMESTRING     @"iPhone Simulator"
#define SIMULATOR_IPAD_NAMESTRING       @"iPad Simulator"
#define SIMULATOR_APPLETV_NAMESTRING    @"Apple TV Simulator"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, UIDevicePlatform) {
    UIDeviceUnknown,
    
    UIDeviceSimulator,
    UIDeviceSimulatoriPhone,
    UIDeviceSimulatoriPhone6,
    UIDeviceSimulatoriPhone6Plus,
    UIDeviceSimulatoriPad,
    UIDeviceSimulatorAppleTV,
    
    UIDevice1GiPhone,
    UIDevice3GiPhone,
    UIDevice3GSiPhone,
    UIDevice4iPhone,
    UIDevice4SiPhone,
    UIDevice5iPhone,
    UIDevice5CiPhone,
    UIDevice5SiPhone,
    UIDevice6iPhone,
    UIDevice6PlusiPhone,
    UIDevice6siPhone,
    UIDevice6sPlusiPhone,
    UIDeviceSEiPhone,
    UIDevice7iPhone,
    UIDevice7PlusiPhone,
    UIDevice8iPhone,
    UIDevice8PlusiPhone,
    UIDeviceXiPhone,
    UIDeviceXsiPhone,
    UIDeviceXsMaxiPhone,
    UIDeviceXRiPhone,
    
    
    UIDevice1GiPod,
    UIDevice2GiPod,
    UIDevice3GiPod,
    UIDevice4GiPod,
    UIDevice5GiPod,
    UIDevice6GiPod,
    
    UIDevice1GiPad,
    UIDevice2GiPad,
    UIDevice3GiPad,
    UIDevice4GiPad,
    UIDevice5GiPad,
    UIDevice6GiPad,
    UIDevice1GiPadAir,
    UIDevice2GiPadAir,
    
    UIDevice1GiPadMini,
    UIDevice2GiPadMini,
    UIDevice3GiPadMini,
    UIDevice4GiPadMini,
    
    UIDevice97InchiPadPro,
    UIDevice129InchiPadPro,
    UIDevice2G129InchiPadPro,
    UIDevice3G129InchiPadPro,
    UIDevice105InchIpadPro,
    UIDevice11InchIpadPro,
    
    
    UIDeviceAppleTV2,
    UIDeviceAppleTV3,
    UIDeviceAppleTV4,
    UIDeviceAppleTV4k,
    
    UIDeviceUnknowniPhone,
    UIDeviceUnknowniPod,
    UIDeviceUnknowniPad,
    UIDeviceUnknownAppleTV,
    UIDeviceIFPGA
};

typedef NS_ENUM(NSUInteger, UIDeviceFamily) {
    UIDeviceFamilyiPhone,
    UIDeviceFamilyiPod,
    UIDeviceFamilyiPad,
    UIDeviceFamilyAppleTV,
    UIDeviceFamilyUnknown
};

/**Extension to UIDevice class to provide more hardware related information, including hardware model, capability and also most importantly current device's orientation
 */
@interface UIDevice (SFHardware)

/**Platform for the Device*/
- (nullable NSString *)sfsdk_platform;

/**Platform type
 See `UIDevicePlatform`
 */
- (UIDevicePlatform)sfsdk_platformType;

/**Returns the system-dependent version number.
 @return The system version number.
 */
- (double)sfsdk_systemVersionNumber;

/**Platform string
 
 Valid values are defined above in the IPHONE_XX_NAMESTRING and IPAD_XXX_NAMESTRING
 */
- (NSString *)sfsdk_platformString;

/**Total memory*/
- (NSUInteger)sfsdk_totalMemory;

/**User Memory*/
- (NSUInteger)sfsdk_userMemory;

/**Memory used by application (in bytes)*/
- (NSUInteger)sfsdk_applicationMemory;

/**Free VM page space available to application (in bytes)*/
- (NSUInteger)sfsdk_freeMemory;

/**Total disk space*/
- (NSNumber *)sfsdk_totalDiskSpace;

/**Total free space*/
- (NSNumber *)sfsdk_freeDiskSpace;

/**Returns whether the device's SOC has a neural engine for core ML tasks*/
- (BOOL)sfsdk_hasNeuralEngine;

/**Device Family*/
- (UIDeviceFamily)sfsdk_deviceFamily;

/**Device's current orientation
 This method will first try to retrieve orientation using UIDevice currentOrientation, if return value is an invalid orientation, it will try to use the orientation of the first window scene
 */
- (UIInterfaceOrientation)sfsdk_interfaceOrientation;

/**
 *  Determine if current device is simulator or not
 *
 *  @return Return YES if current device is simulator, NO otherwise.
 */
- (BOOL)sfsdk_isSimulator;

/**Return YES if device is iPad
 */
+ (BOOL)sfsdk_currentDeviceIsIPad;

/**Return YES if device is iPhone
 */
+ (BOOL)sfsdk_currentDeviceIsIPhone;

@end

NS_ASSUME_NONNULL_END
