/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKitCore/ARResultData.h>
#import <ARKitCore/ARDaemonSecureCoding.h>

@class ARLocationData, VLLocalizationResult, VLLocalizationDebugInfo, CLLocation, NSString;

@interface ARVisualLocalizationResultData : NSObject <ARResultData, ARDaemonSecureCoding> {

	ARLocationData* _inputLocation;
	VLLocalizationResult* _localizationResult;
	long long _errorCode;
	VLLocalizationDebugInfo* _debugInfo;
	CLLocation* _location;
	double _heading;

}

@property (getter=isSecure,nonatomic,readonly) BOOL secure; 
@property (nonatomic,readonly) VLLocalizationResult * localizationResult;              //@synthesize localizationResult=_localizationResult - In the implementation block
@property (assign,nonatomic) long long errorCode;                                      //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) VLLocalizationDebugInfo * debugInfo;                    //@synthesize debugInfo=_debugInfo - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) double heading;                                         //@synthesize heading=_heading - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isSecure;
-(double)heading;
-(CLLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(VLLocalizationDebugInfo *)debugInfo;
-(VLLocalizationResult *)localizationResult;
-(id)initWithVLLocalizationResult:(id)arg1 errorCode:(long long)arg2 debugInfo:(id)arg3 heading:(double)arg4 inputLocation:(id)arg5 ;
@end

