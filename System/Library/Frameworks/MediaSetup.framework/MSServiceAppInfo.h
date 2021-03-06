/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface MSServiceAppInfo : NSObject <NSSecureCoding> {

	NSString* _serviceName;
	NSString* _serviceBundleID;
	NSArray* _alternateBundleIDS;

}

@property (nonatomic,copy,readonly) NSString * serviceName;                  //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceBundleID;              //@synthesize serviceBundleID=_serviceBundleID - In the implementation block
@property (nonatomic,retain) NSArray * alternateBundleIDS;                   //@synthesize alternateBundleIDS=_alternateBundleIDS - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)serviceName;
-(id)initWithServiceName:(id)arg1 serviceBundleID:(id)arg2 ;
-(NSString *)serviceBundleID;
-(NSArray *)alternateBundleIDS;
-(void)setAlternateBundleIDS:(NSArray *)arg1 ;
@end

