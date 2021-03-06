//
//  DeviceUtil.h
//  iPhoneLib,
//  Helper Functions and Classes for Ordinary Application Development on iPhone
//
//  Created by meinside on 09. 12. 15.
//
//  last update: 13.08.26.
//

#pragma once
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//needs: SystemConfiguration.framework
#import <SystemConfiguration/SCNetworkReachability.h>

//needs: CoreLocation.framework
#import <CoreLocation/CoreLocation.h>


@interface DeviceUtil : NSObject {

}

+ (BOOL)checkConnection:(SCNetworkReachabilityFlags*)flags;

+ (BOOL)connectedToNetwork;

+ (BOOL)connectedToWiFi;


+ (NSString*)UDID;

+ (NSString*)MACAddress __attribute__((deprecated));	//not working properly anymore

+ (NSString*)name;

+ (NSString*)model;

+ (NSString*)systemVersion;

+ (NSString*)systemName;

+ (NSString*)appVersion;

+ (NSString*)appName;

+ (NSString*)bundleIdentifier;

/*
 * iPhone Simulator == i386
 * iPhone == iPhone1,1
 * 3G iPhone == iPhone1,2
 * 3GS iPhone == iPhone2,1
 * 4 iPhone == iPhone3,1
 * 1st Gen iPod == iPod1,1
 * 2nd Gen iPod == iPod2,1
 * 3rd Gen iPod == iPod3,1 
 */
+ (NSString*)machine;


+ (BOOL)cameraSupported;

+ (BOOL)compassSupported;

@end
